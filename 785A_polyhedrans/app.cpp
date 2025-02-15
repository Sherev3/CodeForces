#include <iostream>
#include <string>
int main()
{
    int number_of_shapes = 0;
    int number_of_faces = 0;
    std::string shape="";
    std::cin >> number_of_shapes;
// "Tetrahedron" (without quotes), if the i-th polyhedron in Anton's collection is a tetrahedron.
// "Cube" (without quotes), if the i-th polyhedron in Anton's collection is a cube.
// "Octahedron" (without quotes), if the i-th polyhedron in Anton's collection is an octahedron.
// "Dodecahedron" (without quotes), if the i-th polyhedron in Anton's collection is a dodecahedron.
// "Icosahedron" (without quotes), if the i-th polyhedron in Anton's collection is an icosahedron.
    for(int i = 0; i < number_of_shapes;++i)
    {
            std::cin >> shape;
            if(shape == "Tetrahedron")
                number_of_faces+=4;
            else if(shape == "Cube")
                number_of_faces+=6;
            else if (shape=="Octahedron")
                number_of_faces+=8;
            else if (shape=="Dodecahedron")
                number_of_faces+=12;
            else if(shape=="Icosahedron")
                number_of_faces+=20;
            else
            {

            } 
        
    }
    std::cout << number_of_faces;
    return 0;
}