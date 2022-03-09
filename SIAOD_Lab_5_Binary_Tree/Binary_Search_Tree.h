#pragma once


template<typename T>
struct KeyValue
{
	int key;
	T* value;
};

template<typename T>
KeyValue<T> Create_KeyValue(int key, T* value)
{
	KeyValue<T> kv;
	kv.key = key;
	kv.value = value;
	return kv;
}

template <typename T>
class BST//Binary_Search_Tree
{
	private:
		KeyValue<T> value;
		BST* left_node;
		BST* right_node;
	public:
		BST()
		{
			value.key = 0;
			value.value = nullptr;
		}
		// вставка нового узла
		// возвращает ключ
		// -1 == узел не добавлен(уже существует)
		int Insert(KeyValue<T> pair_value)
		{
			if (this->value->value == nullptr)
			{
				this->value = value;
			}

		}
};

