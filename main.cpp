#include "src/TestVector.h"
#include "src/TestAuto.h"

int main() {
    //Test routine for vector
    TestVector t_vector = TestVector();
    t_vector.test_vector_main();

    TestAuto t_auto = TestAuto();
    t_auto.test_auto_main();
    return 0;
}