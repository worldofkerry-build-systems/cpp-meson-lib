#include <assert.h>
#include <libfib.hpp>

int main() {
    const auto result = fibonacci(10);
    assert(result == 55);
}
