#define DOCTEST_CONFIG_IMPLEMENT
#include "includes/doctest.h"

int main(int argc, char** argv) {
    doctest::Context context;
    context.applyCommandLine(argc, argv);
    return context.run(); 
} 