#include <iostream> /* a preprocessor directive, literary insert/copy-paste a standard library (its header)
                       iostream provides standard stream objects */
                    // preprocessor directives can also have if statements, etc

                    // headers (.h) are used for declarations ((re)introducing names) (eg: variable types and names), source files for actual code
                    /* a symbol/name can be declared many times (function name, variable),
                    but "defined" only once (eg: function with a body, variable with initial value)
                    */
using namespace std; // import a name from different namespace to this one (compiler searches additional namespace)
                     // (insert a name into the current namespace)
                     // namespace - scope of identifiers/names
                     // std is a namespace, "standard" (the header file included wraps its declarations in this namespace)
#include "other_file.h" // add external file
using namespace other; // include its namespace (can also use other:: when using the names from the other file)

/* The C++ build pipeline:
1. preprocess - preprocessor builds "translation units" (implementation files/source and headers are included directly/indirectly)
2. compile - compiler produces object file
3. link - linker merges compiled translation units into one program
*/

namespace privates { // custom namespace
    int wtf = 10; // same name variable in a different namespace
}

int wtf = 100; // global variable

// called when the program starts, entry point
int main() { // the arguments list for this *function* can be modified to include command line arguments
    // Input-Output:
    /* types of standard streams (stream = device on which IO can be done):
        c(out/in/err/log) - "character" stream
        w(out/in/err/log) - "wide character" stream (uncommon)
    */
    cout << "hello th3rE?#\n"; // newline
    // put(cout, "test char??\n\n"); // << and >> are overloaded (bitwise shift) operators that act on streams
    std::cout << "test newlines?"; // use the "scope operator" to explicitly look for the name in the given scope
    cout << "no newline?"; // look for cout in the global namespace
    cout << privates::wtf << "\n" ; // own namespace
    cout << wtf << "\n"; // global variable
    int x;  // local variable
    cin >> x;   // save read value into a variable
    cout << "here is your x: " << x << ends; // add \0 to the end
        // (if not an integer is given, only 0 is outputted) (negative numbers are supported)
    clog << "\n(log message:) I'm almost at the end" << flush;
    cerr << "\n(error message:) hey is that an error?" << flush;
    cout << "output from another file: " << get_num();
    cout << "\n\nfinish" << endl << endl; // adds \n and flushes the stream (actually sends out the characters to screen / "empties the buffer")
    cout << "did this work?"; // before flushing?
    return 0; // exit code of the function / program (0 - success, non-0  - failure)
    // can leave out the return statement - has same effect as returning 0
}
