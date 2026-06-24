implicit typedef: '__int128'
 name: __int128_t

implicit typedef: 'unsigned __int128'
 name: __uint128_t

implicit typedef: '*char'
 name: __builtin_ms_va_list

implicit typedef: '*char'
 name: __builtin_va_list

implicit typedef: 'struct __NSConstantString_tag'
 name: __NSConstantString

variable: 'int'
 dllimport
 extern name: imported_value

function: 'fn () int'
 dllimport
 name: imported_func

variable: 'int'
 dllimport
 extern name: gnu_imported_value

function: 'fn () int'
 name: use_imports
 body:
  compound_stmt
    return_stmt: 'int'
     expr:
      add_expr: 'int'
       lhs:
        add_expr: 'int'
         lhs:
          implicit cast: (lval_to_rval) 'int'
            decl_ref_expr: 'int' lvalue
             name: imported_value
         rhs:
          call_expr: 'int'
           callee:
            implicit cast: (function_to_pointer) '*fn () int'
              decl_ref_expr: 'fn () int' lvalue
               name: imported_func
       rhs:
        implicit cast: (lval_to_rval) 'int'
          decl_ref_expr: 'int' lvalue
           name: gnu_imported_value

