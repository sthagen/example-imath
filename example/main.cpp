#include <Imath/ImathVec.h>
#include <iostream>

int
main()
{
    Imath::V3f v (3.0, 4.0, 5.0);

    v.normalize();

    Imath::M33f M;
    M.translate (1.0, 2.0, 3.0);
    Imath::V3f p = v * M;

    std::cout << "What's your vector, Victor? " << p << std::endl;

    return 0;
}
