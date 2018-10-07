class Token {
  enum class ToKind {
    //LITERALS
    //Char
    Lit_Char,
    Lit_String,
    //Simple numbers
    Lit_Short,
    Lit_Integer,
    Lit_Long,
    //Non-simple numbers
    Lit_Double,
    Lit_Float,
    Lit_Complex,
    //RESERVED WORDS
    Res_for,//
    Res_while,//
    Res_,//
    Res_,//
    Res_,//
    Res_,//
    Res_,//
    Res_,//
    Res_,//
    Res_,//
    Res_,//
    Res_,//
    Res_,//
    Res_,//
    //SYMBOL SETS
    //Math Base
    Sym_Pluss,//   +
    Sym_Minus,//   -
    Sym_Mult, //   *
    Sym_Div,  //   /
    //Math extend
    Sym_Power,//   ^
    Sym_,//
    Sym_,//
    Sym_,//
    Sym_,//
    Sym_,//
    Sym_,//
    Sym_,//
    Sym_,//
    Sym_,//
    Sym_,//
    Sym_,//
    Sym_,//

    Sym_,//
    Sym_,//
    Sym_,//
    Sym_,//
    Sym_,//
    Sym_,//
    Sym_,//
    Sym_,//
  }
}
