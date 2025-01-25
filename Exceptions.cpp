#include<iostream>
#include<memory>
#include<stdexcept>
using namespace std;

// class Rectangle
// {
//     private:
//         int width, height;
//         string color;
//     public:
//         Rectangle() = default;
//         Rectangle(int width, int height){
//             cout << "Constructing A Rectangle" << endl;
//             setWidth(width);
//             setHeight(height);
//         };
//         void draw(){
//             cout << "Drawing Rectangle" << endl;
//             cout << "Dimensions: " << width << ", " << height << endl;
//         };
//         int getArea(){
//             return width * height;
//         };    
//         // Getter 
//         int getWidth(){
//             return width;
//         };
//         // Setter
//         void setWidth(int width){
//             if(width < 0){
//                 throw invalid_argument("width");
//             }
//             else{
//                 (*this).width = width;
//                 // this->width = width;
//             }
//         }
//         // Getter
//         int getHeight(){
//             return height;
//         }
//         // Setter
//         void setHeight(int height){
//             if(height < 0){
//                 throw invalid_argument("Height Must be greater than 0");
//             }else if(height > 100){
//                 throw invalid_argument("Height Must be less than 100");
//             }
//             else{
//                 (*this).height = height;
//             }
//         }
// };

// int main() {
    
//     try
//     {
//         int width, height;
//         cout << "Enter Width: ";
//         cin >> width;
//         cout << "Enter Height: ";
//         cin >> height;
//         Rectangle rectangle;
//         rectangle.setHeight(height);
//         rectangle.setWidth(width);
//     }
//     catch(const out_of_range& e){
//         cout << "Error: " << e.what() << endl;
//     }
//     catch(const logic_error& e)
//     {
//         cout << "Error: " << e.what() << '\n';
//     };
    

// }


//! -------------------------- Where to catch exceptions
// class Rectangle{
//     private:
//         int width;
//     public:
//         void setWidth(int newWidth){
//             if(newWidth > 100)
//                 throw invalid_argument("Width must be less than 100");
//             if(newWidth < 0)
//                 throw invalid_argument("Width must be greater than 0");
//             this->width = newWidth;
//         };
// };

// void CreateRectangle(){
//     Rectangle rect;
//     rect.setWidth(-10);
// };

// void doWork(){
//     CreateRectangle();
// };

// int main(){
//     try
//     {
//         doWork();
//     }
//     catch(const exception& e)
//     {
//         cout << e.what() << '\n';
//     };
// }


//! -------------------------- Rethrowing an exception
// class Rectangle{
//     private:
//         int width;
//     public:
//         void setWidth(int newWidth){
//             if(newWidth > 100)
//                 throw invalid_argument("Width must be less than 100");
//             if(newWidth < 0)
//                 throw invalid_argument("Width must be greater than 0");
//             this->width = newWidth;
//         };
// };

// void CreateRectangle(){
//     try
//     {
//         // Open a file
//         Rectangle rect;
//         rect.setWidth(-10);
//     }
//     catch(const std::exception& e)
//     {
//         cout << "Close a file" << endl;
//         cout << e.what() << '\n';
//     };
    
// };

// void doWork(){
//     CreateRectangle();
// };

// int main(){
//     try
//     {
//         doWork();
//     }
//     catch(const exception& e)
//     {
//         cout << e.what() << '\n';
//     };
// }


//! -------------------------- Creating custom exception
// class AccountLocked : public exception{
//     public:
//         const char* what() const noexcept override {
//             return "Your account is locked! Contact the administrator.";
//         };
// };

// void login(){
//     throw AccountLocked{};
// };

// int main(){
    
//     try
//     {
//         login();
//     }
//     catch(const std::exception& e)
//     {
//         cout << e.what() << '\n';
//     };

// }