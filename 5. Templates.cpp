#include<iostream>
using namespace std;

//! ------------------------ Defining a function template
// template<typename T>
// T getLarger(T x, T y){
//     return x > y ? x : y;
// };

// int main(){
//     cout << getLarger(10, 20) << endl;
//     cout << getLarger(20.20, 30.20) << endl;
//     cout << getLarger('a', 'b') << endl;
// }


//! ----------------------- Explicit type argument
// template<typename T>
// T getLarger(T x, T y){
//     return x > y ? x : y;
// };

// int main(){
//     cout << getLarger<int>(10, 20) << endl;
//     cout << getLarger<double>(20.20, 30.20) << endl;
//     cout << getLarger<char>('a', 'b') << endl;
// }


//! ---------------------- Template with multiple parameters
// template<typename K, typename V>
// void display(K key, V value){
//     cout << key << " = " << value << endl;
// };

// int main(){
//     display("Key", 10);
// }


//! ---------------------- Creating class template
// template<typename K, typename V>
// class Pair{
//     private:
//         K key;
//         V value;
//     public:
//         Pair() = default;
//         Pair(K key, V value) : key(key), value(value) {};
//         K getKey() { return key; };
//         V getValue() { return value;};
// };

// int main(){
//     Pair<string, int> pair("Key", 10);
// }


//! --------------------- A more complex class template
// template<typename K, typename V>
// class Pair {
// private:
//     K key;
//     V value;

// public:
//     Pair() = default;
//     Pair(K key, V value) : key(key), value(value) {};

//     K getKey() { return key; };
//     V getValue() { return value; };

//     friend std::ostream& operator<<(std::ostream& stream, const Pair<K, V>& pair) {
//         stream << pair.key << " = " << pair.value;
//         return stream;
//     };
// };

// template<typename T>
// class Array {
// private:
//     T* values;
//     size_t size;

// public:
//     explicit Array(size_t size) {
//         this->size = size;
//         values = new T[size];
//     };

//     ~Array() {
//         delete[] values;
//     };

//     T& operator[](size_t index) {
//         if (index >= size) {
//             throw std::out_of_range("Array index out of bounds");
//         }
//         return values[index];
//     };
// };

// int main() {
//     Array<Pair<int, std::string>> Array1{10};
//     Array1[0] = Pair<int, std::string>("Key", 10);
//     std::cout << Array1[0] << std::endl;
// }