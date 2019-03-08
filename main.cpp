#include "src/TestVector.h"
#include "src/TestAuto.h"
#include "src/TestIO.h"

int main() {
    //Test routine for vector
//    TestVector t_vector = TestVector();
//    t_vector.test_vector_main();
//
//    TestAuto t_auto = TestAuto();
//    t_auto.test_auto_main();

    TestIO t_io = TestIO();
    t_io.test_io_main();
    return 0;
}