function yourpath = pathplanning(S, G, n, O)

    % S = Start(x,y) Point
    % G = Goal(x,y) Point
    % n = Number of obsticals
    % O = Obstacle points (x1 y1; x2 y2)
    
    % Settings
    StartLabel = -1;
    EndLabel = 2; 
    FreeSpaceLabel = 0;
    ObsticleLabel = 1;
    NodeLabel = 3;
    TotalNumberOfNodes = 60;
    roomWidth = 15;
    roomLength = 12;
    EdgeIterations = 100;
    
    yourpath = 0;

    %% Creating the map with obsticles
    map = zeros(roomLength, roomWidth);

    map(G(2),G(1)) = EndLabel; % Mark the Goal
    map(S(2),S(1)) = StartLabel; % Mark the Start Point
    
    % Draw Obsticles
	for index = 1:n*2 
        if mod(index,2) ~= 0
            % Get the two X Y vectors
            Oi1 = O(:,index); 
            Oi2 = O(:,index + 1);

            sY = min([Oi1(2),Oi2(2)]);
            eY = max([Oi1(2),Oi2(2)]);

            for k = sY:eY
                
                sX = min([Oi1(1),Oi2(1)]);
                eX = max([Oi1(1),Oi2(1)]);
                
                for j = sX:eX 
                    map(k,j) = ObsticleLabel;
                end
            end
        end
    end

    %1. R = (N, E)  begins empty
    %2. A random free configuration c is generated and added to N
    %3a. Candidate neighbors to c are partitioned from N
    %3b. Edges are created between these neighbors and c, such that acyclicity is preserved
    %4. Repeat 2-3 until “done”

    k = 5; % Number of neighbors evaluated
    N = [TotalNumberOfNodes, 2]; % Nodes (Coords)
    E = []; % Edges (Lines) 
    %R = (N, E); % I am assuming this is going to be a list of nodes' coords
    
    %% 5.4.1 Sampling the Configuration Space

    % Generate Random Nodes
    ConfigurationsAdded = 0;
    
    while ConfigurationsAdded < TotalNumberOfNodes
        c = [randi(roomLength, 1), randi(roomWidth, 1)]; 
        if map(c(1),c(2)) == FreeSpaceLabel
            ConfigurationsAdded = ConfigurationsAdded + 1;
            N(ConfigurationsAdded,:) = c;
            map(c(1),c(2)) = NodeLabel; 
        end
	end
    
	%% 5.4.2 Connecting Pairs of Configurations
    
    for iter = 1:EdgeIterations
        
        % Select a Random c from the list of nodes
        c = N(randi(TotalNumberOfNodes, 1), :);
        
        % Get k neighbors whose distinc
        %disp('Random Configuration');
        %disp(c);
        
        Ndist = [TotalNumberOfNodes, 3];
        Neighbors = [];
        
        for i = 1:TotalNumberOfNodes
            % Get the distance between c and N(i,;)
            Ndist(i, 1) = N(i,1);
            Ndist(i, 2) = N(i,2);
            Ndist(i, 3) = sqrt((c(1)-N(i,1))^2 + (c(2)-N(i,2))^2);
            %Ndist(i)
        end
        
        sortedNdist = sortrows(Ndist, 3);
        
        %disp(sortedNdist);
        
        for j = 2:k+1
            Neighbors(j-1, :) = [sortedNdist(j, 1), sortedNdist(j, 2)];
        end
        
        %disp('Neighbors');
        %disp(Neighbors);
        
        % Try to create an edge between the current c and its neighbors
        for i = 1:k
            
            % is there a collision?
            % Get the funtion for the line and check
            % each of the coords based on the line type
            
            % Are the y coords the same? Then it is a straight line in y
            % Same with X
            % For slanted lines, find the longest coord and use that as the
            % the coord to check
            HasObsticle = 0;
            
            if c(1) == Neighbors(i, 1)
                % M is a straight line in y along x
                for x = c(2):Neighbors(i, 2)
                    if map(c(1), x) == ObsticleLabel
                        HasObsticle = 1;
                        break;
                    end
                end
                
            elseif c(2) == Neighbors(i, 2)
                % M is a straight line in x along y
                for y = c(1):Neighbors(i, 1)
                    if map(y, c(2)) == ObsticleLabel
                        HasObsticle = 1;
                        break;
                    end
                end
            else
                
                numerator = c(1) - Neighbors(i, 1);
                denominator = c(2) - Neighbors(i, 2);
                m = (numerator)/(denominator);
                
                if abs(m) == 1
                    % Can move diagonally, and it is at the neighbor, so we know
                    % that it is legit
                    
                    for x = c(2):Neighbors(i, 2)
                        for y = c(1):Neighbors(i, 1)
                            if map(y, x) == ObsticleLabel
                                HasObsticle = 1;
                                break;
                            end
                        end
                    end
                    
                else
                    % have to see if the rectangle formed has any Obsticles
                    
                    % Create a rectangle and sample in the inner based on
                    % which element is bigger... 
                    if numerator > denominator % The change in Y is bigger
                        
                        startY = min(c(1), Neighbors(i, 1)) + 1;
                        endY = max(c(1), Neighbors(i, 1)) - 1;
                        
                        startX = min(c(2), Neighbors(i, 2));
                        endX = max(c(2), Neighbors(i, 2));
                        
                    else
                        
                        startY = min(c(1), Neighbors(i, 1));
                        endY = max(c(1), Neighbors(i, 1));
                        
                        startX = min(c(2), Neighbors(i, 2)) + 1;
                        endX = max(c(2), Neighbors(i, 2)) - 1;
                        
                    end
                    
                    
                    for y = startY:endY
                        for x = startX:endX
                            if map(y, x) == ObsticleLabel
                                HasObsticle = 1;
                                break;
                            end
                        end
                    end
                    
                end
                
            end
            
            if HasObsticle ~= 1 && ~ElementExists(E, [c(1) c(2) Neighbors(i, 1) Neighbors(i, 2)])
                [rows, ~] = size(E);
                E(rows+1,:) = [c(1) c(2) Neighbors(i, 1) Neighbors(i, 2)];
            end
            
        end
        
    end
    
    disp('Edges');
    disp(E)
	disp(map);
    
    %% Query Phase
    
    
    

    end

    
    function exists = ElementExists(E, elem)
        
        exists = 0;
        
        [r,~] = size(E);
        
        for i = 1:r
            
            if E(i, 1) == elem(1) && E(i, 2) == elem(2)
                exists = 1;
                break;
            end
        
            if E(i, 3) == elem(1) && E(i, 4) == elem(2)
                exists = 1;
                break;
            end  
        end
    end
    



