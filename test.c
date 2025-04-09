#include <assert.h>
#include <libfib.h>

int main() {
    const auto result = fibonacci(10);
    assert(result == 55);
}
