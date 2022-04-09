#include <ImathMatrix.h>
#include <ImathVec.h>
#include <iostream>

int
main()
{
    Imath::V3f v (3.0, 4.0, 5.0);

    std::cout << "What's your raw vector v, Rachid? " << v << std::endl;
    v.normalize();

    Imath::M33f M;
    std::cout << "What's your raw matrix M, Roberta? \n" << M << std::endl;
    Imath::V2f t{1.0, 2.0};
    std::cout << "What's your vector t, Tamid? " << t << std::endl;
    M.translate(t);
    Imath::V3f p = v * M;

    std::cout << "What's your vector p, Pocahontas? " << p << std::endl;

    std::cout << "What's your vector v, Victor? " << v << std::endl;
    std::cout << "What's your matrix M, Martha? \n" << M << std::endl;


    return 0;
}
