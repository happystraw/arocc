__declspec(dllimport) extern int imported_value;
__declspec(dllimport) int imported_func(void);
__attribute__((dllimport)) extern int gnu_imported_value;

int use_imports(void) {
    return imported_value + imported_func() + gnu_imported_value;
}

/** manifest:
syntax
args = -fdeclspec --target=x86_64-windows-msvc
*/
