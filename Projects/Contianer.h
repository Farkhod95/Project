template <typename T>
class Container
{
	int array_size = 0, size_new = 1;
	T *array_numbers = new T[size_new];

public:
	
	~Container(){
		delete[] array_numbers;
	};
	void add(T object){
		if (array_size == size_new){
			size_new = 2 * size_new;
			T *new_array_numbers = new T[size_new];
			for (int i = 0; i < array_size; i++){
				new_array_numbers[i] = array_numbers[i];
			}
			new_array_numbers[array_size] = object;
			delete[] array_numbers;
			array_numbers = new_array_numbers;
		}
		else
			array_numbers[array_size] = object;
		array_size++;

	}
	;
	int length(){
		return array_size;
	};
	T& operator[](int index){
		if (index >= array_size) {
			std::cout << index + 1 << " - index not exists\n";
		}
		return array_numbers[index];
	};
	bool isEmpty(){
		return array_size == 0;
	};
	void clear(){
		array_size = 0;
		size_new = 1;
		delete[] array_numbers;
		array_numbers = new T[size_new];
	};

};

