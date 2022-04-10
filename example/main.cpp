#include <iostream>
#include <ImathMatrix.h>
#include <ImathVec.h>

int
main()
{
    Imath::V3f v{3.f, 4.f, 5.f};

    v.normalize();

    Imath::M44f M;
    Imath::V3f const t{1.f, 2.f, 3.f};
    M.translate(t);

    Imath::V3f p;
    M.multVecMatrix(v, p);

    std::cout << "What's your vector, Victor? " << p << std::endl;


    return 0;
}
