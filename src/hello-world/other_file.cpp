#include "other_file.h" // use "header.h" instead of <header.h> to include a header file from the local directory

namespace other { // use the same namespace as in the header (can also use 'using' to include the names from the other namespace)
    int get_num() {
        return -2045;
    }
}
