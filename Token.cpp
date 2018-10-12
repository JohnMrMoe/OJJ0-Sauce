class Token {
  enum class ToKind {
    //LITERALS
    //Char
    Lit_Char,               // c
    Lit_String,             // s
    //Simple numbers
    Lit_Word,               // w   //AKA: short
    Lit_Integer,            // i
    Lit_Long,               // l
    //Non-simple numbers
    Lit_Double,             // d
    Lit_Float,              // f
    Lit_Complex,            // z
    //Boolean BITS
    Lit_True,               // b
    Lit_False,              // b
    //Boolean NUll
    Lit_Null                // n
    //RESERVED WORDS
    //Key words
    Res_if,//
    Res_else,//
    Res_switch,//
    Res_case,//
    Res_default,//
    Res_loop,//   base loop, accepts power as parameter multiplum
    Res_do,//     do before while, accepts loop interactions
    Res_while,//  loop with boolean demand
    Res_then,//   then after while or do, accepts loop interactions
    Res_for,//    loop type with
    Res_halt,//   crash the system :D
    Res_lambda,// MOAHAHAHA
    Res_delay,//  delays computation of expression until required
    //out
    Res_out,//    print to the out stream, can be manipulated through powers and alterations
    //Literal Modifiers
    Res_undoable,//   keep history (accepts power for length)
    //Modified Literal Actions
    Res_undo,//      backstep history of undoable literal
    //Loop interactions
    Res_break,//      break current loop, accepts power, which makes it break multiple loops
    Res_continue,//   skip to next iteration of this loop, will accept power in non-while loops (ig. for and loop)
    Res_redo,//       demands to redo this loop iteration
    //Object types
    Res_class,//
    Res_enum,//        subtype of class with a set of allowable presets
    Res_throwable,//   subtype of class that allows for being thrown
    Res_signature,//   juts a "identical" indentifier on objects
                  //   can be used to check if something is a literal (and type),
                  //   if it is an object (and what type), and if it is identical on the inside.
                  //   can also check if a lambda matches another lambda on input and output
    //Modifiers
    Res_public,//      globally accessible
    Res_private,//     innaccessible
    Res_restricted,//  specifies exceotions to private
    Res_static,//      exist outside of object
    Res_subcase,//     can only exist within its owner
    //Exception handlers
    Res_try,//
    Res_throw,//
    Res_catch,//
    Res_retry,//        because why the hell not? attempt try block again
    //SYMBOL SETS
    //Operators
    Sym_AND,//          &&
    Sym_OR, //          ||
    Sym_NOT,//          !
    //Math Base
    Sym_Pluss,//        +
    Sym_Minus,//        -
    Sym_Mult, //        *
    Sym_Div,  //        /
    Sym_Equals,//       =
    Sym_EqualsLess,//   <=
    Sym_EqualsMore,//   =>
    Sym_NotEquals, //   !=
    Sym_LessThan,//     <
    Sym_MoreThan,//     >
    //Math extend
    Sym_Increment,//    ++
    Sym_Decrement,//    --
    Sym_Power,//        ^
    Sym_Alters,//       ˇ   shift + alt gr + tüddler
    Sym_Modulo,//       %
    Sym_Pi,//           π           alt gr + p
    Sym_PluMin ,//      ±           alt gr + "+"
    Sym_Inverse,//      ¬   shift + alt gr + "\"
    //Math binary
    Sym_BinLShift,//    <<
    Sym_BinRShift,//    >>
    Sym_BinAnd,//        &
    Sym_BinNand,//      §&
    Sym_BinXand,//      ¤&
    Sym_BinOr,//         |
    Sym_BinNor,//       !|
    Sym_BinXor,//       ¤|
    //Adressing
    Sym_Adress,//        @
    Sym_Index,//         #
    Sym_Global,//        §
    //Brackets: Opening
    Sym_ParanOpen,//    (
    Sym_BrackOpen,//    [
    Sym_CurlyOpen,//    {
    Sym_QuoteOpen,//    «
    //Brackets: Closing
    Sym_ParanClose,//    )
    Sym_BrackClose,//    ]
    Sym_CurlyClose,//    }
    Sym_QuoteClose,//    »
    //Text
    Sym_CharSep,//       '
    Sym_StringSep,//     "
    //Base
    Sym_Comma,      //   ,
    Sym_Punctum,    //   .
    Sym_Tilde,      //   ~
    //Others?
    Sym_Colon,//        :
    Sym_SemiColon,//    ;
    Sym_Up,//           ↑   shift + alt gr + u
    Sym_Down,//         ↓           alt gr + u
    Sym_Left,//         ←           alt gr + y
    Sym_Right,//        →           alt gr + i
    Sym_Omega,//        Ω   shift + alt gr + q
    Sym_TH,//           þ           alt gr + t
    Sym_SS,//           ß           alt gr + s
    Sym_Pound,//        £
    Sym_Dollar,//       $
    Sym_Euro,//         €           alt gr + e
    Sym_Cent,//         ¢   shift + alt gr + e
    Sym_NewLine,//      ¶
    Sym_Que,//          ?
    Sym_UpsideQue,//    ¿   shift + alt gr + "+"
    Sym_HighZero, //    °   shift + alt gr + 0
    Sym_HighOne,  //    ¹   shift + alt gr + 1
    Sym_HighTwo,  //    ²   shift + alt gr + 2
    Sym_HighThree,//    ³   shift + alt gr + 3
    Sym_Dash,//         —   shift + alt gr + -
    //Commentary:
    Note_Line,//          //
    Note_Start,//         /*
    Note_Stop,//          */
    Note_Comment_line//  /**
  }
}
/*
*/
