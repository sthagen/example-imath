#include <ImathMatrix.h>
#include <ImathVec.h>
#include <iostream>

int
main()
{
    Imath::V3f v (3.0, 4.0, 5.0);

    v.normalize();

    Imath::M33f M;
    Imath::V2f t{1.0, 2.0};
    M.translate(t);
    Imath::V3f p = v * M;

    std::cout << "What's your vector, Victor? " << p << std::endl;


    return 0;
}
