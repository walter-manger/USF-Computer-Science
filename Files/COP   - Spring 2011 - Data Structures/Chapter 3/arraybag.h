class bag
{
	public:
		typedef int value_type; 
		typedef size_t size_type;
		static const size_type CAPACITY = 30;

		bag() {} // default constructor
		void insert(size_type &size);
		size_type erase(const value_type &target);
		bool erase_one(const value_type &target);
		void insert(const value_type &entry);
	private:
}