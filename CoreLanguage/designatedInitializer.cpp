// designatedInitializer.cpp

#include <iostream>

struct Point2D{
    int x;
    int y;
};

class Point3D{
public:
    int x;
    int y;
    int z;
};

int main(){
    
    std::cout << '\n';
    
    Point2D point2D{.x = 1, .y = 2};          // (1)
    Point3D point3D{.x = 1, .y = 2, .z = 3};  // (2)

    std::cout << "point2D: " << point2D.x << " " << point2D.y << '\n';
    std::cout << "point3D: " << point3D.x << " " << point3D.y << " " << point3D.z << '\n';
    
    std::cout << '\n';

}