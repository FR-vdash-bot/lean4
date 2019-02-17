// Lean compiler output
// Module: init.lean.parser.notation
// Imports: init.lean.parser.token
#include "runtime/object.h"
#include "runtime/apply.h"
typedef lean::object obj;    typedef lean::usize  usize;
typedef lean::uint8  uint8;  typedef lean::uint16 uint16;
typedef lean::uint32 uint32; typedef lean::uint64 uint64;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
obj* l_lean_parser_command_reserve__mixfix;
obj* l_lean_parser_command_notation__spec_fold__action_parser___closed__1;
obj* l_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__view;
obj* l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__1___closed__2;
obj* l_lean_parser_command_reserve__mixfix_parser_lean_parser_has__tokens;
obj* l_lean_parser_parsec__t_bind__mk__res___rarg(obj*, obj*);
obj* l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__4;
obj* l_lean_parser_combinators_any__of___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__1(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__1___closed__2;
obj* l_lean_parser_command_notation__spec_rule_has__view;
obj* l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__3;
obj* l_list_map___main___rarg(obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__view___spec__2(obj*, obj*, obj*);
obj* l_lean_parser_command_notation__like_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_command_notation__spec_binders_has__view_x_27;
obj* l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_raw_view___rarg(obj*, obj*, obj*, obj*, obj*, uint8);
obj* l_lean_parser_command_notation__like_has__view;
extern obj* l_lean_parser_number_has__view_x_27___lambda__2___closed__1;
obj* l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_ident_parser___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__4___rarg___closed__1;
obj* l_lean_parser_command_notation__spec_binder_has__view_x_27;
extern obj* l_lean_parser_combinators_many___rarg___closed__1;
obj* l_lean_parser_command_notation__spec_precedence_parser_lean_parser_has__tokens;
obj* l_lean_parser_command_reserve__notation_has__view;
obj* l_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__view;
obj* l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__3;
namespace lean {
obj* nat_add(obj*, obj*);
}
obj* l_lean_parser_command_notation__spec_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_command_notation_has__view_x_27___lambda__2(obj*);
obj* l_reader__t_orelse___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__2___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__2(obj*);
obj* l_reader__t_bind___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__5(obj*, obj*);
obj* l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_command_notation__spec_fold__action__folder_has__view;
obj* l_lean_parser_command_notation__spec_action_parser___closed__1;
extern obj* l_lean_parser_term__parser__m_lean_parser_monad__basic__parser;
obj* l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27;
obj* l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__1___closed__1;
extern obj* l_mjoin___rarg___closed__1;
obj* l_lean_parser_command_notation__spec_mixfix__symbol;
obj* l_lean_parser_symbol__or__ident___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__2(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_rule_has__view_x_27;
obj* l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__5;
obj* l_lean_parser_with__trailing___rarg___lambda__1(obj*, obj*);
obj* l_lean_parser_command_reserve__mixfix_parser_lean_parser_has__view;
obj* l_lean_parser_command_notation__spec_rule_parser_lean_parser_has__view;
obj* l_lean_parser_list_cons_tokens___rarg(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_has__view_x_27;
obj* l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__1___closed__2;
obj* l_lean_parser_command_notation__like_has__view_x_27___lambda__1___closed__2;
obj* l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__5;
obj* l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27;
obj* l_lean_parser_parsec__t_try__mk__res___rarg(obj*);
obj* l_reader__t_lift___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__2___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1___closed__3;
obj* l_lean_parser_ident_parser___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__4(obj*);
obj* l_lean_parser_command_notation__spec_notation__symbol_parser_lean_parser_has__tokens;
obj* l_list_reverse___rarg(obj*);
obj* l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
extern "C" obj* lean_name_mk_string(obj*, obj*);
obj* l_lean_parser_command_notation__spec_notation__symbol_has__view;
obj* l_lean_parser_command_mixfix_has__view;
obj* l_lean_parser_command_notation__spec_precedence_parser___closed__1;
obj* l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens;
obj* l_lean_parser_command_notation__spec_notation__symbol_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_number_view_to__nat___main(obj*);
obj* l_lean_parser_command_reserve__notation_parser_lean_parser_has__view;
obj* l_lean_parser_parsec__t_labels__mk__res___rarg(obj*, obj*);
obj* l_lean_parser_command_notation__spec_binders;
obj* l_lean_parser_command_notation__spec_scoped__action_has__view_x_27___lambda__2(obj*);
extern obj* l___private_init_lean_parser_combinators_1__many1__aux___main___rarg___closed__1;
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_command_notation__spec_quoted__symbol_parser___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_command_notation__spec_binders_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_command_notation_has__view_x_27;
obj* l_string_quote(obj*);
obj* l_lean_parser_command_notation_parser___closed__1;
obj* l_lean_parser_command_notation__spec_fold__action;
namespace lean {
obj* string_iterator_next(obj*);
}
obj* l_lean_parser_with__trailing___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__6(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(obj*);
obj* l_lean_parser_command_notation__spec_action__kind;
obj* l_lean_parser_number_parser___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_rule_parser___closed__1;
obj* l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__8;
obj* l_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__view;
obj* l_lean_parser_combinators_optional___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__7(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_command_notation__spec_quoted__symbol_parser___spec__2(obj*, obj*, obj*);
obj* l_lean_parser_command_notation;
obj* l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__3;
obj* l_lean_parser_command_notation__spec_precedence__term;
obj* l_lean_parser_command_notation__spec_precedence__term_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_binder_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_command_notation__spec_symbol__quote_has__view;
obj* l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1___closed__2;
obj* l_lean_parser_command_notation__spec;
obj* l_lean_parser_command_notation__spec_rule_parser_lean_parser_has__tokens;
namespace lean {
obj* string_length(obj*);
}
obj* l_lean_parser_command_notation_parser_lean_parser_has__tokens;
obj* l_reader__t_lift___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__2(obj*);
uint8 l_string_is__empty(obj*);
obj* l_lean_parser_command_notation__like_parser_lean_parser_has__tokens;
obj* l_lean_parser_command_notation__spec_action_has__view;
obj* l_lean_parser_command_notation__spec_precedence__lit_parser(obj*, obj*, obj*, obj*, obj*);
namespace lean {
uint32 string_iterator_curr(obj*);
}
obj* l_lean_parser_command_notation__spec_parser_lean_parser_has__view;
obj* l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_command_mixfix_parser_lean_parser_has__view;
obj* l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__2;
obj* l_lean_parser_monad__parsec_str__core___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__4(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_precedence__lit_parser___closed__1;
obj* l_lean_parser_command_notation__spec_argument_has__view;
obj* l_lean_parser_command_notation__spec_scoped__action;
obj* l_lean_parser_command_reserve__notation;
obj* l_function_comp___rarg(obj*, obj*, obj*);
obj* l_reader__t_lift___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__1(obj*);
obj* l_lean_parser_combinators_label_view___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_fold__action__folder_has__view_x_27;
obj* l_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens;
obj* l_list_foldl___main___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__3(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_number_parser___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__1___rarg___closed__1;
obj* l_lean_parser_try__view___at_lean_parser_number_parser___spec__1(obj*);
obj* l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__6;
obj* l_lean_parser_command_notation__spec_transition_has__view_x_27;
obj* l_lean_parser_command_notation__spec_notation__symbol_parser_lean_parser_has__view;
obj* l_reader__t_lift___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_mixfix_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_reserve__mixfix_has__view;
extern obj* l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
extern obj* l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__1;
obj* l_lean_parser_command_reserve__mixfix_has__view_x_27___lambda__2(obj*);
obj* l___private_init_lean_parser_parsec_1__str__aux___main(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__view___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_transition_parser_lean_parser_has__tokens;
extern obj* l_lean_parser_number_has__view;
obj* l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__2___closed__1;
obj* l_lean_parser_command_mixfix_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_command_notation__spec_action_parser_lean_parser_has__view___lambda__1(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_unquoted__symbol_view;
obj* l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_command_notation__spec_fold__action__folder_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__4;
extern obj* l_lean_parser_number_has__view_x_27___lambda__2___closed__2;
obj* l_lean_parser_command_notation__spec_precedence_has__view_x_27;
obj* l_lean_parser_command_notation__spec_scoped__action_has__view_x_27;
obj* l_lean_parser_command_notation__like_parser___closed__1;
obj* l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_command_notation__spec_transition_has__view;
obj* l_lean_parser_command_notation__spec_transition;
obj* l_lean_parser_tokens___rarg(obj*);
obj* l_option_get__or__else___main___rarg(obj*, obj*);
obj* l_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens;
obj* l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__1___closed__2;
obj* l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__2;
extern obj* l_lean_parser_no__kind;
obj* l_lean_parser_combinators_many1___at_lean_parser_command_notation__spec_parser_lean_parser_has__tokens___spec__2(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_syntax_as__node___main(obj*);
obj* l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__3;
obj* l_lean_parser_command_notation__spec_fold__action_parser(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_combinators_1__many1__aux___main___at_lean_parser_command_notation__spec_parser_lean_parser_has__tokens___spec__3(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_mixfix_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_command_notation__spec_unquoted__symbol_parser(obj*, obj*, obj*, obj*, obj*);
namespace lean {
uint8 string_iterator_has_next(obj*);
}
obj* l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27;
obj* l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__view___lambda__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__1___closed__2;
obj* l_lean_parser_symbol_tokens___rarg(obj*, obj*);
obj* l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__2(obj*);
namespace lean {
uint8 nat_dec_eq(obj*, obj*);
}
obj* l_lean_parser_command_notation__like_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_raw_view___rarg___lambda__1(obj*);
extern obj* l_lean_parser_term__parser__m_lean_parser_monad__parsec;
obj* l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__2;
obj* l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__1;
obj* l_reader__t_lift___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__3___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_mk__raw__res(obj*, obj*);
obj* l_lean_parser_command_notation__spec_mixfix__symbol_parser_lean_parser_has__tokens;
obj* l___private_init_lean_parser_token_3__update__trailing___main(obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__tokens___spec__1(obj*, obj*, obj*);
extern obj* l_lean_parser_term__parser__m_monad;
obj* l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_combinators_node_view___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_reader__t_orelse___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__2(obj*);
obj* l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__7;
obj* l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_command_notation__spec_argument;
obj* l_lean_parser_number_parser___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__1(obj*);
obj* l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27;
extern obj* l_lean_parser_finish__comment__block___closed__2;
obj* l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__5;
obj* l_lean_parser_command_mixfix_kind_parser_lean_parser_has__view;
obj* l_lean_parser_command_notation__spec_parser_lean_parser_has__tokens;
obj* l_list_mfoldl___main___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__2(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_string_join___closed__1;
obj* l_lean_parser_command_notation__spec_action_parser_lean_parser_has__view;
obj* l_lean_parser_command_notation__spec_unquoted__symbol_tokens;
obj* l_lean_parser_command_notation__spec_has__view_x_27___lambda__2___closed__1;
obj* l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__2(obj*);
extern obj* l_lean_parser_ident_parser_view___rarg___lambda__1___closed__1;
obj* l_lean_parser_command_notation__spec_precedence__term_parser___closed__1;
obj* l_lean_parser_command_mixfix_kind_parser_lean_parser_has__tokens;
obj* l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__view___lambda__2(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_precedence;
extern obj* l_lean_parser_max__prec;
obj* l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_command_notation__spec_unquoted__symbol_parser___closed__1;
obj* l_lean_parser_command_reserve__mixfix_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_scoped__action_has__view;
obj* l_reader__t_bind___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__5___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_syntax_mk__node(obj*, obj*);
obj* l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_command_notation__spec_transition_parser___closed__1;
obj* l_lean_parser_command_reserve__mixfix_has__view_x_27;
obj* l_lean_parser_term_parser_lean_parser_has__view___closed__1;
obj* l_lean_parser_command_notation__spec_action;
obj* l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_command_notation__spec_fold__action__folder_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_command_notation__spec_mixfix__symbol_parser_lean_parser_has__view;
obj* l_lean_parser_command_notation__spec_binders_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_command_notation__spec_precedence__offset__op;
obj* l_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__tokens;
obj* l_lean_parser_combinators_recurse_view___rarg(obj*, obj*);
obj* l_lean_parser_command_notation__like_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_token(obj*, obj*, obj*);
obj* l_lean_parser_term_parser_lean_parser_has__view(obj*);
obj* l_lean_parser_whitespace(obj*, obj*, obj*);
obj* l_lean_parser_combinators_choice__aux___main___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__3(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_precedence__term_has__view_x_27;
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__view___spec__1___rarg(obj*, obj*);
obj* l_lean_parser_command_notation__spec_argument_has__view_x_27;
obj* l_lean_parser_term_parser_lean_parser_has__tokens___closed__1;
obj* l_reader__t_lift___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__3(obj*);
obj* l_lean_parser_command_notation__spec_action_parser_lean_parser_has__view___lambda__2(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_term_parser(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_mixfix_kind_has__view_x_27;
extern obj* l_lean_parser_detail__ident_has__view_x_27___lambda__2___closed__1;
obj* l_lean_parser_command_notation__spec_fold__action_has__view_x_27;
obj* l_lean_parser_command_notation__spec_binder_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_combinators_many___at_lean_parser_command_notation__spec_parser_lean_parser_has__tokens___spec__1(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_fold__action__folder_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_command_notation__spec_precedence_parser_lean_parser_has__view;
obj* l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__6;
obj* l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_command_notation__spec_fold__action__folder;
obj* l_lean_parser_substring_to__string(obj*);
obj* l_lean_parser_command_notation__like_parser_lean_parser_has__view;
extern "C" uint8 lean_name_dec_eq(obj*, obj*);
obj* l_lean_parser_rec__t_recurse___at_lean_parser_term_parser_lean_parser_has__tokens___spec__1(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_mixfix_has__view_x_27;
obj* l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__view___lambda__1___closed__1;
obj* l_lean_parser_command_mixfix_kind_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_command_notation_parser_lean_parser_has__view;
obj* l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1___closed__2;
obj* l_lean_parser_command_notation__spec_precedence_parser(obj*, obj*, obj*, obj*, obj*);
namespace lean {
uint8 string_dec_eq(obj*, obj*);
}
obj* l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_command_notation__spec_action_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_precedence__offset;
extern obj* l_lean_parser_combinators_choice__aux___main___rarg___closed__1;
obj* l_lean_parser_command_mixfix_kind;
obj* l_lean_parser_raw_view___rarg___lambda__3(obj*);
obj* l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_command_notation__spec_rule;
obj* l_lean_parser_monad__parsec_error___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__4___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_parser___closed__1;
obj* l_lean_parser_command_notation__like_has__view_x_27;
obj* l_lean_parser_command_notation__spec_mixfix__symbol_parser(obj*, obj*, obj*, obj*, obj*);
namespace lean {
obj* string_iterator_remaining(obj*);
}
obj* l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__7;
namespace lean {
obj* string_mk_iterator(obj*);
}
obj* l_lean_parser_command_notation__spec_notation__symbol;
obj* l_lean_parser_command_notation__spec_action_has__view_x_27;
obj* l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__4;
obj* l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__2;
obj* l_lean_parser_command_reserve__notation_has__view_x_27;
obj* l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27;
obj* l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_command_notation__spec_precedence__lit_view_to__nat(obj*);
obj* l_lean_parser_command_notation__spec_binder_has__view;
obj* l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1(obj*);
obj* l_string_trim(obj*);
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__tokens___spec__1___rarg(obj*, obj*);
obj* l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__1___closed__2;
obj* l_option_get___main___at_lean_parser_run___spec__2(obj*);
obj* l_lean_parser_command_reserve__notation_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_command_notation_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_command_notation__spec_precedence__offset_has__view;
obj* l_lean_parser_command_reserve__mixfix_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_command_notation_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens;
obj* l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__2;
obj* l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__3;
obj* l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_command_mixfix_parser_lean_parser_has__tokens;
obj* l_lean_parser_command_notation__spec_binders_has__view;
obj* l_lean_parser_command_notation__spec_transition_parser_lean_parser_has__view;
obj* l_lean_parser_term_parser___closed__1;
obj* l_lean_parser_command_mixfix_parser___closed__1;
obj* l_lean_parser_command_reserve__notation_parser___closed__1;
obj* l_lean_parser_command_notation__spec_binders_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_command_reserve__notation_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_command_notation__spec_rule_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_term_parser_lean_parser_has__tokens(obj*);
obj* l_lean_parser_command_notation__spec_precedence_has__view;
obj* l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_command_notation__spec_binder_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_command_mixfix_kind_has__view;
obj* l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_command_reserve__mixfix_parser___closed__1;
obj* l_lean_parser_command_notation__spec_mixfix__symbol_has__view;
extern "C" obj* lean_name_mk_numeral(obj*, obj*);
obj* l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27;
obj* l_lean_parser_command_notation__spec_parser(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__tokens___spec__2(obj*, obj*, obj*);
namespace lean {
uint32 uint32_of_nat(obj*);
}
extern obj* l_lean_parser_term__parser__m_lean_parser_monad__rec;
obj* l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_command_mixfix_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_command_notation__spec_action_parser_lean_parser_has__tokens;
obj* l_lean_parser_command_reserve__notation_has__view_x_27___lambda__1___closed__2;
obj* l___private_init_lean_parser_parsec_3__mk__string__result___rarg(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__4(obj*);
obj* l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__view;
obj* l_lean_parser_command_notation__spec_symbol__quote_parser___closed__1;
obj* l_lean_parser_command_reserve__notation_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_mixfix;
obj* l_lean_parser_command_notation__spec_precedence__lit;
obj* l_lean_parser_command_notation__spec_precedence__lit_view_to__nat___main(obj*);
obj* l_lean_parser_command_notation__spec_precedence__term_view_to__nat(obj*);
obj* l_lean_parser_command_notation__spec_symbol__quote_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_fold__action_has__view;
obj* l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__1___closed__2;
obj* l_lean_parser_command_notation__like_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__2;
obj* l_lean_parser_command_reserve__notation_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_command_notation__spec_mixfix__symbol_parser___closed__1;
obj* l_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__view;
obj* l_lean_parser_command_notation__spec_has__view;
namespace lean {
obj* nat_sub(obj*, obj*);
}
obj* l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_command_notation__spec_binder;
obj* l_lean_parser_command_notation__spec_quoted__symbol_parser(obj*, obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__2;
namespace lean {
obj* string_push(obj*, uint32);
}
obj* l_dlist_singleton___rarg(obj*, obj*);
obj* l_lean_parser_command_notation__spec_precedence__term_has__view;
obj* l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__4;
obj* l_lean_parser_command_reserve__mixfix_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_parsec__t_orelse__mk__res___rarg(obj*, obj*);
obj* l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__2;
obj* l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1(obj*);
obj* l_list_append___rarg(obj*, obj*);
obj* l_lean_parser_command_notation__spec_precedence__lit_has__view;
obj* l_lean_parser_command_notation__spec_action__kind_has__view;
obj* l_lean_parser_command_notation__spec_symbol__quote;
obj* l_option_map___rarg(obj*, obj*);
obj* l_lean_parser_command_notation__spec_scoped__action_has__view_x_27___lambda__1___closed__1;
extern obj* l_lean_parser_combinators_any__of___rarg___closed__1;
obj* l_lean_parser_command_notation__spec_action__kind_has__view_x_27;
extern obj* l_lean_parser_term__parser__m_monad__except;
obj* l_lean_parser_command_reserve__mixfix_has__view_x_27___lambda__1___closed__2;
obj* l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_substring_of__string(obj*);
obj* l_lean_parser_command_notation__like;
obj* l_lean_parser_command_notation__spec_notation__symbol_parser___closed__1;
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_command_notation__spec_quoted__symbol_parser___spec__1___rarg(obj*, obj*);
obj* l_lean_parser_command_notation_has__view;
obj* l_lean_parser_command_notation__spec_scoped__action_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_command_mixfix_kind_parser___closed__1;
obj* l_lean_parser_command_reserve__notation_parser_lean_parser_has__tokens;
obj* l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1___closed__3;
obj* l_lean_parser_command_notation__spec_transition_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_precedence__offset__op_has__view;
obj* l_lean_parser_ident_parser___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__4___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1___closed__2;
extern obj* l_lean_parser_term__parser__m_alternative;
extern obj* l_lean_parser_raw_view___rarg___lambda__3___closed__1;
obj* l_lean_parser_rec__t_recurse___at_lean_parser_term_parser_lean_parser_has__tokens___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_14; obj* x_15; 
x_6 = lean::apply_5(x_1, x_0, x_2, x_3, x_4, x_5);
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 x_11 = x_6;
} else {
 lean::dec(x_6);
 x_11 = lean::box(0);
}
x_12 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_12);
x_14 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_7);
if (lean::is_scalar(x_11)) {
 x_15 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_15 = x_11;
}
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_9);
return x_15;
}
}
obj* _init_l_lean_parser_term_parser_lean_parser_has__tokens___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = l_lean_parser_tokens___rarg(x_0);
return x_1;
}
}
obj* l_lean_parser_term_parser_lean_parser_has__tokens(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = l_lean_parser_term_parser_lean_parser_has__tokens___closed__1;
lean::inc(x_2);
return x_2;
}
}
obj* _init_l_lean_parser_term_parser_lean_parser_has__view___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("term");
return x_0;
}
}
obj* l_lean_parser_term_parser_lean_parser_has__view(obj* x_0) {
_start:
{
obj* x_2; obj* x_3; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_12; 
lean::inc(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_rec__t_recurse___at_lean_parser_term_parser_lean_parser_has__tokens___spec__1), 6, 1);
lean::closure_set(x_2, 0, x_0);
x_3 = l_lean_parser_term__parser__m_lean_parser_monad__rec;
lean::inc(x_3);
x_5 = l_lean_parser_combinators_recurse_view___rarg(x_0, x_3);
x_6 = l_lean_parser_term__parser__m_lean_parser_monad__parsec;
x_7 = l_lean_parser_term__parser__m_alternative;
x_8 = l_lean_parser_term_parser_lean_parser_has__view___closed__1;
lean::inc(x_8);
lean::inc(x_7);
lean::inc(x_6);
x_12 = l_lean_parser_combinators_label_view___rarg(x_6, x_7, x_2, x_8, x_5);
return x_12;
}
}
obj* _init_l_lean_parser_term_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("term");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_parser_term_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_14; obj* x_15; 
x_6 = l_lean_parser_rec__t_recurse___at_lean_parser_term_parser_lean_parser_has__tokens___spec__1(x_0, x_1, x_2, x_3, x_4, x_5);
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 x_11 = x_6;
} else {
 lean::dec(x_6);
 x_11 = lean::box(0);
}
x_12 = l_lean_parser_term_parser___closed__1;
lean::inc(x_12);
x_14 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_7, x_12);
if (lean::is_scalar(x_11)) {
 x_15 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_15 = x_11;
}
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_9);
return x_15;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__lit() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("precedence_lit");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(3);
x_4 = lean::mk_nat_obj(0u);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_1, x_5);
lean::dec(x_1);
if (x_6 == 0)
{
obj* x_8; 
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_0);
return x_8;
}
else
{
obj* x_9; obj* x_10; obj* x_12; obj* x_13; 
x_9 = l_lean_parser_number_has__view;
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
x_12 = lean::apply_1(x_10, x_0);
x_13 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_13, 0, x_12);
return x_13;
}
}
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("precedence_lit");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__1___closed__1;
lean::inc(x_5);
return x_5;
}
else
{
obj* x_7; obj* x_10; obj* x_12; obj* x_15; uint8 x_16; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::cnstr_get(x_7, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_7, 1);
lean::inc(x_12);
lean::dec(x_7);
x_15 = l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__1___closed__2;
x_16 = lean_name_dec_eq(x_10, x_15);
lean::dec(x_10);
if (x_16 == 0)
{
obj* x_19; 
lean::dec(x_12);
x_19 = l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__1___closed__1;
lean::inc(x_19);
return x_19;
}
else
{
if (lean::obj_tag(x_12) == 0)
{
obj* x_21; 
x_21 = l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__1___closed__1;
lean::inc(x_21);
return x_21;
}
else
{
obj* x_23; obj* x_25; 
x_23 = lean::cnstr_get(x_12, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_12, 1);
lean::inc(x_25);
lean::dec(x_12);
if (lean::obj_tag(x_25) == 0)
{
obj* x_28; 
x_28 = l_lean_parser_syntax_as__node___main(x_23);
if (lean::obj_tag(x_28) == 0)
{
obj* x_29; 
x_29 = l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__1___closed__1;
lean::inc(x_29);
return x_29;
}
else
{
obj* x_31; obj* x_34; obj* x_36; 
x_31 = lean::cnstr_get(x_28, 0);
lean::inc(x_31);
lean::dec(x_28);
x_34 = lean::cnstr_get(x_31, 0);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_31, 1);
lean::inc(x_36);
lean::dec(x_31);
switch (lean::obj_tag(x_34)) {
case 0:
{
obj* x_40; 
lean::dec(x_36);
x_40 = l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__1___closed__1;
lean::inc(x_40);
return x_40;
}
case 1:
{
obj* x_44; 
lean::dec(x_36);
lean::dec(x_34);
x_44 = l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__1___closed__1;
lean::inc(x_44);
return x_44;
}
default:
{
obj* x_46; obj* x_48; obj* x_51; uint8 x_52; 
x_46 = lean::cnstr_get(x_34, 0);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_34, 1);
lean::inc(x_48);
lean::dec(x_34);
x_51 = lean::box(0);
x_52 = lean_name_dec_eq(x_46, x_51);
lean::dec(x_46);
if (x_52 == 0)
{
obj* x_56; 
lean::dec(x_36);
lean::dec(x_48);
x_56 = l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__1___closed__1;
lean::inc(x_56);
return x_56;
}
else
{
if (lean::obj_tag(x_36) == 0)
{
obj* x_59; 
lean::dec(x_48);
x_59 = l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__1___closed__1;
lean::inc(x_59);
return x_59;
}
else
{
obj* x_61; obj* x_63; 
x_61 = lean::cnstr_get(x_36, 0);
lean::inc(x_61);
x_63 = lean::cnstr_get(x_36, 1);
lean::inc(x_63);
lean::dec(x_36);
if (lean::obj_tag(x_63) == 0)
{
x_1 = x_61;
x_2 = x_48;
goto lbl_3;
}
else
{
obj* x_69; 
lean::dec(x_61);
lean::dec(x_63);
lean::dec(x_48);
x_69 = l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__1___closed__1;
lean::inc(x_69);
return x_69;
}
}
}
}
}
}
}
else
{
obj* x_73; 
lean::dec(x_23);
lean::dec(x_25);
x_73 = l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__1___closed__1;
lean::inc(x_73);
return x_73;
}
}
}
}
lbl_3:
{
obj* x_75; uint8 x_76; 
x_75 = lean::mk_nat_obj(0u);
x_76 = lean::nat_dec_eq(x_2, x_75);
lean::dec(x_2);
if (x_76 == 0)
{
obj* x_78; 
x_78 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_78, 0, x_1);
return x_78;
}
else
{
obj* x_79; obj* x_80; obj* x_82; obj* x_83; 
x_79 = l_lean_parser_number_has__view;
x_80 = lean::cnstr_get(x_79, 0);
lean::inc(x_80);
x_82 = lean::apply_1(x_80, x_1);
x_83 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_83, 0, x_82);
return x_83;
}
}
}
}
obj* l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_16; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_lean_parser_number_has__view;
x_6 = lean::cnstr_get(x_5, 1);
lean::inc(x_6);
x_8 = lean::apply_1(x_6, x_2);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_1);
x_10 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__1;
lean::inc(x_10);
x_12 = l_lean_parser_syntax_mk__node(x_10, x_9);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_1);
x_14 = l_lean_parser_command_notation__spec_precedence__lit;
lean::inc(x_14);
x_16 = l_lean_parser_syntax_mk__node(x_14, x_13);
return x_16;
}
else
{
obj* x_17; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_27; 
x_17 = lean::cnstr_get(x_0, 0);
lean::inc(x_17);
lean::dec(x_0);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_17);
lean::cnstr_set(x_20, 1, x_1);
x_21 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__2;
lean::inc(x_21);
x_23 = l_lean_parser_syntax_mk__node(x_21, x_20);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_1);
x_25 = l_lean_parser_command_notation__spec_precedence__lit;
lean::inc(x_25);
x_27 = l_lean_parser_syntax_mk__node(x_25, x_24);
return x_27;
}
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__lit_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_parser_number_parser___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__1___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("number");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_parser_number_parser___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_7; obj* x_8; obj* x_10; obj* x_12; 
lean::dec(x_1);
lean::inc(x_2);
lean::inc(x_0);
x_7 = l_lean_parser_token(x_0, x_2, x_3);
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 x_12 = x_7;
} else {
 lean::dec(x_7);
 x_12 = lean::box(0);
}
if (lean::obj_tag(x_8) == 0)
{
obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_21; 
x_13 = lean::cnstr_get(x_8, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_8, 1);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_8, 2);
lean::inc(x_17);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 lean::cnstr_release(x_8, 2);
 x_19 = x_8;
} else {
 lean::dec(x_8);
 x_19 = lean::box(0);
}
lean::inc(x_13);
x_21 = l_lean_parser_try__view___at_lean_parser_number_parser___spec__1(x_13);
if (lean::obj_tag(x_21) == 0)
{
obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_30; obj* x_31; obj* x_33; obj* x_36; obj* x_38; obj* x_39; obj* x_41; obj* x_43; obj* x_44; obj* x_45; 
lean::dec(x_13);
lean::dec(x_19);
x_24 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_24, 0, x_2);
x_25 = lean::box(0);
x_26 = l_string_join___closed__1;
x_27 = l_lean_parser_number_parser___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__1___rarg___closed__1;
lean::inc(x_27);
lean::inc(x_26);
x_30 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_26, x_27, x_24, x_25, x_0, x_15, x_10);
x_31 = lean::cnstr_get(x_30, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_30, 1);
lean::inc(x_33);
lean::dec(x_30);
x_36 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_36);
x_38 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_36, x_31);
x_39 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_38);
lean::inc(x_36);
x_41 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_36, x_39);
lean::inc(x_27);
x_43 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_41, x_27);
x_44 = l_lean_parser_parsec__t_try__mk__res___rarg(x_43);
if (lean::is_scalar(x_12)) {
 x_45 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_45 = x_12;
}
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_33);
return x_45;
}
else
{
obj* x_49; obj* x_51; obj* x_52; obj* x_53; obj* x_55; obj* x_56; obj* x_58; obj* x_59; obj* x_60; 
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_21);
x_49 = l_lean_parser_finish__comment__block___closed__2;
lean::inc(x_49);
if (lean::is_scalar(x_19)) {
 x_51 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_51 = x_19;
}
lean::cnstr_set(x_51, 0, x_13);
lean::cnstr_set(x_51, 1, x_15);
lean::cnstr_set(x_51, 2, x_49);
x_52 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_51);
x_53 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_53);
x_55 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_53, x_52);
x_56 = l_lean_parser_number_parser___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__1___rarg___closed__1;
lean::inc(x_56);
x_58 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_55, x_56);
x_59 = l_lean_parser_parsec__t_try__mk__res___rarg(x_58);
if (lean::is_scalar(x_12)) {
 x_60 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_60 = x_12;
}
lean::cnstr_set(x_60, 0, x_59);
lean::cnstr_set(x_60, 1, x_10);
return x_60;
}
}
else
{
obj* x_63; uint8 x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_71; obj* x_72; obj* x_74; obj* x_75; obj* x_76; 
lean::dec(x_0);
lean::dec(x_2);
x_63 = lean::cnstr_get(x_8, 0);
lean::inc(x_63);
x_65 = lean::cnstr_get_scalar<uint8>(x_8, sizeof(void*)*1);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 x_66 = x_8;
} else {
 lean::dec(x_8);
 x_66 = lean::box(0);
}
if (lean::is_scalar(x_66)) {
 x_67 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_67 = x_66;
}
lean::cnstr_set(x_67, 0, x_63);
lean::cnstr_set_scalar(x_67, sizeof(void*)*1, x_65);
x_68 = x_67;
x_69 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_69);
x_71 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_69, x_68);
x_72 = l_lean_parser_number_parser___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__1___rarg___closed__1;
lean::inc(x_72);
x_74 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_71, x_72);
x_75 = l_lean_parser_parsec__t_try__mk__res___rarg(x_74);
if (lean::is_scalar(x_12)) {
 x_76 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_76 = x_12;
}
lean::cnstr_set(x_76, 0, x_75);
lean::cnstr_set(x_76, 1, x_10);
return x_76;
}
}
}
obj* l_lean_parser_number_parser___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_number_parser___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__1___rarg), 4, 0);
return x_2;
}
}
obj* l_lean_parser_symbol__or__ident___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_10; obj* x_11; obj* x_13; obj* x_15; 
lean::dec(x_3);
lean::dec(x_1);
lean::inc(x_4);
lean::inc(x_2);
x_10 = l_lean_parser_token(x_2, x_4, x_5);
x_11 = lean::cnstr_get(x_10, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_10, 1);
lean::inc(x_13);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 lean::cnstr_release(x_10, 1);
 x_15 = x_10;
} else {
 lean::dec(x_10);
 x_15 = lean::box(0);
}
if (lean::obj_tag(x_11) == 0)
{
obj* x_16; obj* x_18; obj* x_20; obj* x_22; obj* x_23; 
x_16 = lean::cnstr_get(x_11, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_11, 1);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_11, 2);
lean::inc(x_20);
if (lean::is_exclusive(x_11)) {
 lean::cnstr_release(x_11, 0);
 lean::cnstr_release(x_11, 1);
 lean::cnstr_release(x_11, 2);
 x_22 = x_11;
} else {
 lean::dec(x_11);
 x_22 = lean::box(0);
}
switch (lean::obj_tag(x_16)) {
case 0:
{
obj* x_25; obj* x_27; obj* x_30; 
x_25 = lean::cnstr_get(x_16, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_25, 1);
lean::inc(x_27);
lean::dec(x_25);
x_30 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_30, 0, x_27);
x_23 = x_30;
goto lbl_24;
}
case 1:
{
obj* x_31; obj* x_33; obj* x_36; obj* x_37; 
x_31 = lean::cnstr_get(x_16, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_31, 1);
lean::inc(x_33);
lean::dec(x_31);
x_36 = l_lean_parser_substring_to__string(x_33);
x_37 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_37, 0, x_36);
x_23 = x_37;
goto lbl_24;
}
default:
{
obj* x_38; 
x_38 = lean::box(0);
x_23 = x_38;
goto lbl_24;
}
}
lbl_24:
{
uint8 x_39; 
if (lean::obj_tag(x_23) == 0)
{
uint8 x_41; 
x_41 = 1;
x_39 = x_41;
goto lbl_40;
}
else
{
obj* x_42; uint8 x_45; 
x_42 = lean::cnstr_get(x_23, 0);
lean::inc(x_42);
lean::dec(x_23);
x_45 = lean::string_dec_eq(x_42, x_0);
lean::dec(x_42);
if (x_45 == 0)
{
uint8 x_47; 
x_47 = 1;
x_39 = x_47;
goto lbl_40;
}
else
{
uint8 x_48; 
x_48 = 0;
x_39 = x_48;
goto lbl_40;
}
}
lbl_40:
{
if (x_39 == 0)
{
obj* x_52; obj* x_54; obj* x_55; obj* x_56; obj* x_58; obj* x_59; obj* x_60; 
lean::dec(x_4);
lean::dec(x_0);
lean::dec(x_2);
x_52 = l_lean_parser_finish__comment__block___closed__2;
lean::inc(x_52);
if (lean::is_scalar(x_22)) {
 x_54 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_54 = x_22;
}
lean::cnstr_set(x_54, 0, x_16);
lean::cnstr_set(x_54, 1, x_18);
lean::cnstr_set(x_54, 2, x_52);
x_55 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_20, x_54);
x_56 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_56);
x_58 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_56, x_55);
x_59 = l_lean_parser_parsec__t_try__mk__res___rarg(x_58);
if (lean::is_scalar(x_15)) {
 x_60 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_60 = x_15;
}
lean::cnstr_set(x_60, 0, x_59);
lean::cnstr_set(x_60, 1, x_13);
return x_60;
}
else
{
obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_67; obj* x_68; obj* x_70; 
x_61 = l_string_quote(x_0);
x_62 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_62, 0, x_61);
x_63 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_63, 0, x_4);
x_64 = lean::box(0);
x_65 = l_string_join___closed__1;
lean::inc(x_65);
x_67 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_65, x_62, x_63, x_64, x_2, x_18, x_13);
x_68 = lean::cnstr_get(x_67, 0);
lean::inc(x_68);
x_70 = lean::cnstr_get(x_67, 1);
lean::inc(x_70);
lean::dec(x_67);
if (lean::obj_tag(x_68) == 0)
{
obj* x_73; obj* x_75; obj* x_78; obj* x_80; obj* x_81; obj* x_82; obj* x_84; obj* x_85; obj* x_86; 
x_73 = lean::cnstr_get(x_68, 1);
lean::inc(x_73);
x_75 = lean::cnstr_get(x_68, 2);
lean::inc(x_75);
lean::dec(x_68);
x_78 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_78);
if (lean::is_scalar(x_22)) {
 x_80 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_80 = x_22;
}
lean::cnstr_set(x_80, 0, x_16);
lean::cnstr_set(x_80, 1, x_73);
lean::cnstr_set(x_80, 2, x_78);
x_81 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_75, x_80);
x_82 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_20, x_81);
lean::inc(x_78);
x_84 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_78, x_82);
x_85 = l_lean_parser_parsec__t_try__mk__res___rarg(x_84);
if (lean::is_scalar(x_15)) {
 x_86 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_86 = x_15;
}
lean::cnstr_set(x_86, 0, x_85);
lean::cnstr_set(x_86, 1, x_70);
return x_86;
}
else
{
obj* x_89; uint8 x_91; obj* x_92; obj* x_93; obj* x_94; obj* x_95; obj* x_96; obj* x_98; obj* x_99; obj* x_100; 
lean::dec(x_16);
lean::dec(x_22);
x_89 = lean::cnstr_get(x_68, 0);
lean::inc(x_89);
x_91 = lean::cnstr_get_scalar<uint8>(x_68, sizeof(void*)*1);
if (lean::is_exclusive(x_68)) {
 lean::cnstr_release(x_68, 0);
 x_92 = x_68;
} else {
 lean::dec(x_68);
 x_92 = lean::box(0);
}
if (lean::is_scalar(x_92)) {
 x_93 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_93 = x_92;
}
lean::cnstr_set(x_93, 0, x_89);
lean::cnstr_set_scalar(x_93, sizeof(void*)*1, x_91);
x_94 = x_93;
x_95 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_20, x_94);
x_96 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_96);
x_98 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_96, x_95);
x_99 = l_lean_parser_parsec__t_try__mk__res___rarg(x_98);
if (lean::is_scalar(x_15)) {
 x_100 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_100 = x_15;
}
lean::cnstr_set(x_100, 0, x_99);
lean::cnstr_set(x_100, 1, x_70);
return x_100;
}
}
}
}
}
else
{
obj* x_104; uint8 x_106; obj* x_107; obj* x_108; obj* x_109; obj* x_110; obj* x_112; obj* x_113; obj* x_114; 
lean::dec(x_4);
lean::dec(x_0);
lean::dec(x_2);
x_104 = lean::cnstr_get(x_11, 0);
lean::inc(x_104);
x_106 = lean::cnstr_get_scalar<uint8>(x_11, sizeof(void*)*1);
if (lean::is_exclusive(x_11)) {
 lean::cnstr_release(x_11, 0);
 x_107 = x_11;
} else {
 lean::dec(x_11);
 x_107 = lean::box(0);
}
if (lean::is_scalar(x_107)) {
 x_108 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_108 = x_107;
}
lean::cnstr_set(x_108, 0, x_104);
lean::cnstr_set_scalar(x_108, sizeof(void*)*1, x_106);
x_109 = x_108;
x_110 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_110);
x_112 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_110, x_109);
x_113 = l_lean_parser_parsec__t_try__mk__res___rarg(x_112);
if (lean::is_scalar(x_15)) {
 x_114 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_114 = x_15;
}
lean::cnstr_set(x_114, 0, x_113);
lean::cnstr_set(x_114, 1, x_13);
return x_114;
}
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__4___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8) {
_start:
{
obj* x_12; obj* x_13; uint8 x_14; obj* x_15; obj* x_16; obj* x_17; 
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
x_12 = l_option_get__or__else___main___rarg(x_2, x_7);
x_13 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_0);
lean::cnstr_set(x_13, 2, x_1);
lean::cnstr_set(x_13, 3, x_3);
x_14 = 0;
x_15 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set_scalar(x_15, sizeof(void*)*1, x_14);
x_16 = x_15;
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_8);
return x_17;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__4(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__4___rarg), 9, 0);
return x_2;
}
}
obj* l_lean_parser_combinators_choice__aux___main___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_13; 
lean::dec(x_1);
x_8 = lean::box(0);
x_9 = l_lean_parser_combinators_choice__aux___main___rarg___closed__1;
x_10 = l_mjoin___rarg___closed__1;
lean::inc(x_10);
lean::inc(x_9);
x_13 = l_lean_parser_monad__parsec_error___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__4___rarg(x_9, x_10, x_8, x_8, x_2, x_3, x_4, x_5, x_6);
return x_13;
}
else
{
obj* x_14; obj* x_16; obj* x_18; obj* x_23; obj* x_24; obj* x_26; obj* x_28; obj* x_29; obj* x_30; 
x_14 = lean::cnstr_get(x_0, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_0, 1);
lean::inc(x_16);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_18 = x_0;
} else {
 lean::dec(x_0);
 x_18 = lean::box(0);
}
lean::inc(x_5);
lean::inc(x_4);
lean::inc(x_3);
lean::inc(x_2);
x_23 = lean::apply_5(x_14, x_2, x_3, x_4, x_5, x_6);
x_24 = lean::cnstr_get(x_23, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_23, 1);
lean::inc(x_26);
if (lean::is_exclusive(x_23)) {
 lean::cnstr_release(x_23, 0);
 lean::cnstr_release(x_23, 1);
 x_28 = x_23;
} else {
 lean::dec(x_23);
 x_28 = lean::box(0);
}
x_29 = lean::mk_nat_obj(1u);
x_30 = lean::nat_add(x_1, x_29);
if (lean::obj_tag(x_24) == 0)
{
obj* x_31; obj* x_33; obj* x_35; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_44; obj* x_45; 
x_31 = lean::cnstr_get(x_24, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_24, 1);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_24, 2);
lean::inc(x_35);
if (lean::is_exclusive(x_24)) {
 lean::cnstr_release(x_24, 0);
 lean::cnstr_release(x_24, 1);
 lean::cnstr_release(x_24, 2);
 x_37 = x_24;
} else {
 lean::dec(x_24);
 x_37 = lean::box(0);
}
x_38 = lean::box(0);
x_39 = lean_name_mk_numeral(x_38, x_1);
if (lean::is_scalar(x_18)) {
 x_40 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_40 = x_18;
}
lean::cnstr_set(x_40, 0, x_31);
lean::cnstr_set(x_40, 1, x_38);
x_41 = l_lean_parser_syntax_mk__node(x_39, x_40);
x_42 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_42);
if (lean::is_scalar(x_37)) {
 x_44 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_44 = x_37;
}
lean::cnstr_set(x_44, 0, x_41);
lean::cnstr_set(x_44, 1, x_33);
lean::cnstr_set(x_44, 2, x_42);
x_45 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_35, x_44);
if (lean::obj_tag(x_45) == 0)
{
obj* x_52; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_30);
lean::dec(x_16);
if (lean::is_scalar(x_28)) {
 x_52 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_52 = x_28;
}
lean::cnstr_set(x_52, 0, x_45);
lean::cnstr_set(x_52, 1, x_26);
return x_52;
}
else
{
obj* x_53; uint8 x_55; 
x_53 = lean::cnstr_get(x_45, 0);
lean::inc(x_53);
x_55 = lean::cnstr_get_scalar<uint8>(x_45, sizeof(void*)*1);
if (x_55 == 0)
{
obj* x_57; obj* x_58; obj* x_60; obj* x_63; obj* x_64; 
lean::dec(x_45);
x_57 = l_lean_parser_combinators_choice__aux___main___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__3(x_16, x_30, x_2, x_3, x_4, x_5, x_26);
x_58 = lean::cnstr_get(x_57, 0);
lean::inc(x_58);
x_60 = lean::cnstr_get(x_57, 1);
lean::inc(x_60);
lean::dec(x_57);
x_63 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_53, x_58);
if (lean::is_scalar(x_28)) {
 x_64 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_64 = x_28;
}
lean::cnstr_set(x_64, 0, x_63);
lean::cnstr_set(x_64, 1, x_60);
return x_64;
}
else
{
obj* x_72; 
lean::dec(x_5);
lean::dec(x_53);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_30);
lean::dec(x_16);
if (lean::is_scalar(x_28)) {
 x_72 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_72 = x_28;
}
lean::cnstr_set(x_72, 0, x_45);
lean::cnstr_set(x_72, 1, x_26);
return x_72;
}
}
}
else
{
obj* x_75; uint8 x_77; obj* x_78; 
lean::dec(x_1);
lean::dec(x_18);
x_75 = lean::cnstr_get(x_24, 0);
lean::inc(x_75);
x_77 = lean::cnstr_get_scalar<uint8>(x_24, sizeof(void*)*1);
if (lean::is_exclusive(x_24)) {
 lean::cnstr_release(x_24, 0);
 x_78 = x_24;
} else {
 lean::dec(x_24);
 x_78 = lean::box(0);
}
if (x_77 == 0)
{
obj* x_80; obj* x_81; obj* x_83; obj* x_86; obj* x_87; 
lean::dec(x_78);
x_80 = l_lean_parser_combinators_choice__aux___main___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__3(x_16, x_30, x_2, x_3, x_4, x_5, x_26);
x_81 = lean::cnstr_get(x_80, 0);
lean::inc(x_81);
x_83 = lean::cnstr_get(x_80, 1);
lean::inc(x_83);
lean::dec(x_80);
x_86 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_75, x_81);
if (lean::is_scalar(x_28)) {
 x_87 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_87 = x_28;
}
lean::cnstr_set(x_87, 0, x_86);
lean::cnstr_set(x_87, 1, x_83);
return x_87;
}
else
{
obj* x_94; obj* x_95; obj* x_96; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_30);
lean::dec(x_16);
if (lean::is_scalar(x_78)) {
 x_94 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_94 = x_78;
}
lean::cnstr_set(x_94, 0, x_75);
lean::cnstr_set_scalar(x_94, sizeof(void*)*1, x_77);
x_95 = x_94;
if (lean::is_scalar(x_28)) {
 x_96 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_96 = x_28;
}
lean::cnstr_set(x_96, 0, x_95);
lean::cnstr_set(x_96, 1, x_26);
return x_96;
}
}
}
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = l_lean_parser_list_cons_tokens___rarg(x_0, x_0);
x_2 = l_lean_parser_list_cons_tokens___rarg(x_0, x_1);
x_3 = l_lean_parser_tokens___rarg(x_2);
x_4 = l_lean_parser_list_cons_tokens___rarg(x_3, x_0);
x_5 = l_lean_parser_tokens___rarg(x_4);
return x_5;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_21; 
x_0 = lean::mk_string("max");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__or__ident___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__2), 6, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::box(0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_number_parser___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__1), 1, 0);
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_3);
x_6 = lean::mk_nat_obj(0u);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__3), 7, 2);
lean::closure_set(x_7, 0, x_5);
lean::closure_set(x_7, 1, x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_2);
x_9 = l_lean_parser_term__parser__m_monad;
x_10 = l_lean_parser_term__parser__m_monad__except;
x_11 = l_lean_parser_term__parser__m_lean_parser_monad__parsec;
x_12 = l_lean_parser_term__parser__m_alternative;
x_13 = l_lean_parser_command_notation__spec_precedence__lit;
x_14 = l_lean_parser_command_notation__spec_precedence__lit_has__view;
lean::inc(x_14);
lean::inc(x_13);
lean::inc(x_12);
lean::inc(x_11);
lean::inc(x_10);
lean::inc(x_9);
x_21 = l_lean_parser_combinators_node_view___rarg(x_9, x_10, x_11, x_12, x_13, x_8, x_14);
return x_21;
}
}
obj* l_list_mfoldl___main___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_12; obj* x_14; obj* x_15; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_0);
x_12 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_12);
x_14 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_14, 0, x_1);
lean::cnstr_set(x_14, 1, x_6);
lean::cnstr_set(x_14, 2, x_12);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_7);
return x_15;
}
else
{
obj* x_16; obj* x_18; obj* x_20; obj* x_21; obj* x_22; obj* x_27; obj* x_28; obj* x_30; 
x_16 = lean::cnstr_get(x_2, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_2, 1);
lean::inc(x_18);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_release(x_2, 0);
 lean::cnstr_release(x_2, 1);
 x_20 = x_2;
} else {
 lean::dec(x_2);
 x_20 = lean::box(0);
}
lean::inc(x_5);
lean::inc(x_4);
lean::inc(x_3);
x_27 = lean::apply_5(x_16, x_3, x_4, x_5, x_6, x_7);
x_28 = lean::cnstr_get(x_27, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_27, 1);
lean::inc(x_30);
lean::dec(x_27);
if (lean::obj_tag(x_28) == 0)
{
x_21 = x_28;
x_22 = x_30;
goto lbl_23;
}
else
{
obj* x_33; uint8 x_35; obj* x_36; 
x_33 = lean::cnstr_get(x_28, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get_scalar<uint8>(x_28, sizeof(void*)*1);
if (lean::is_exclusive(x_28)) {
 lean::cnstr_release(x_28, 0);
 x_36 = x_28;
} else {
 lean::dec(x_28);
 x_36 = lean::box(0);
}
if (lean::obj_tag(x_1) == 0)
{
if (x_35 == 0)
{
uint8 x_37; obj* x_38; obj* x_39; 
x_37 = 0;
if (lean::is_scalar(x_36)) {
 x_38 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_38 = x_36;
}
lean::cnstr_set(x_38, 0, x_33);
lean::cnstr_set_scalar(x_38, sizeof(void*)*1, x_37);
x_39 = x_38;
x_21 = x_39;
x_22 = x_30;
goto lbl_23;
}
else
{
obj* x_40; obj* x_41; 
if (lean::is_scalar(x_36)) {
 x_40 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_40 = x_36;
}
lean::cnstr_set(x_40, 0, x_33);
lean::cnstr_set_scalar(x_40, sizeof(void*)*1, x_35);
x_41 = x_40;
x_21 = x_41;
x_22 = x_30;
goto lbl_23;
}
}
else
{
obj* x_42; obj* x_44; obj* x_46; obj* x_47; obj* x_49; obj* x_51; obj* x_54; obj* x_56; obj* x_57; obj* x_58; 
x_42 = lean::cnstr_get(x_33, 3);
lean::inc(x_42);
x_44 = l_option_get___main___at_lean_parser_run___spec__2(x_42);
lean::inc(x_1);
x_46 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_46, 0, x_44);
lean::cnstr_set(x_46, 1, x_1);
x_47 = lean::cnstr_get(x_33, 0);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_33, 1);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_33, 2);
lean::inc(x_51);
lean::dec(x_33);
x_54 = l_list_reverse___rarg(x_46);
lean::inc(x_0);
x_56 = l_lean_parser_syntax_mk__node(x_0, x_54);
x_57 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_57, 0, x_56);
x_58 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_58, 0, x_47);
lean::cnstr_set(x_58, 1, x_49);
lean::cnstr_set(x_58, 2, x_51);
lean::cnstr_set(x_58, 3, x_57);
if (x_35 == 0)
{
uint8 x_59; obj* x_60; obj* x_61; 
x_59 = 0;
if (lean::is_scalar(x_36)) {
 x_60 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_60 = x_36;
}
lean::cnstr_set(x_60, 0, x_58);
lean::cnstr_set_scalar(x_60, sizeof(void*)*1, x_59);
x_61 = x_60;
x_21 = x_61;
x_22 = x_30;
goto lbl_23;
}
else
{
obj* x_62; obj* x_63; 
if (lean::is_scalar(x_36)) {
 x_62 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_62 = x_36;
}
lean::cnstr_set(x_62, 0, x_58);
lean::cnstr_set_scalar(x_62, sizeof(void*)*1, x_35);
x_63 = x_62;
x_21 = x_63;
x_22 = x_30;
goto lbl_23;
}
}
}
lbl_23:
{
if (lean::obj_tag(x_21) == 0)
{
obj* x_64; obj* x_66; obj* x_68; obj* x_70; obj* x_71; obj* x_72; obj* x_74; obj* x_75; 
x_64 = lean::cnstr_get(x_21, 0);
lean::inc(x_64);
x_66 = lean::cnstr_get(x_21, 1);
lean::inc(x_66);
x_68 = lean::cnstr_get(x_21, 2);
lean::inc(x_68);
if (lean::is_exclusive(x_21)) {
 lean::cnstr_release(x_21, 0);
 lean::cnstr_release(x_21, 1);
 lean::cnstr_release(x_21, 2);
 x_70 = x_21;
} else {
 lean::dec(x_21);
 x_70 = lean::box(0);
}
if (lean::is_scalar(x_20)) {
 x_71 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_71 = x_20;
}
lean::cnstr_set(x_71, 0, x_64);
lean::cnstr_set(x_71, 1, x_1);
x_72 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_72);
if (lean::is_scalar(x_70)) {
 x_74 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_74 = x_70;
}
lean::cnstr_set(x_74, 0, x_71);
lean::cnstr_set(x_74, 1, x_66);
lean::cnstr_set(x_74, 2, x_72);
x_75 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_68, x_74);
if (lean::obj_tag(x_75) == 0)
{
obj* x_76; obj* x_78; obj* x_80; obj* x_83; obj* x_84; obj* x_86; obj* x_88; obj* x_89; obj* x_90; 
x_76 = lean::cnstr_get(x_75, 0);
lean::inc(x_76);
x_78 = lean::cnstr_get(x_75, 1);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_75, 2);
lean::inc(x_80);
lean::dec(x_75);
x_83 = l_list_mfoldl___main___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__2(x_0, x_76, x_18, x_3, x_4, x_5, x_78, x_22);
x_84 = lean::cnstr_get(x_83, 0);
lean::inc(x_84);
x_86 = lean::cnstr_get(x_83, 1);
lean::inc(x_86);
if (lean::is_exclusive(x_83)) {
 lean::cnstr_release(x_83, 0);
 lean::cnstr_release(x_83, 1);
 x_88 = x_83;
} else {
 lean::dec(x_83);
 x_88 = lean::box(0);
}
x_89 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_80, x_84);
if (lean::is_scalar(x_88)) {
 x_90 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_90 = x_88;
}
lean::cnstr_set(x_90, 0, x_89);
lean::cnstr_set(x_90, 1, x_86);
return x_90;
}
else
{
obj* x_96; uint8 x_98; obj* x_99; obj* x_100; obj* x_101; obj* x_102; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_18);
x_96 = lean::cnstr_get(x_75, 0);
lean::inc(x_96);
x_98 = lean::cnstr_get_scalar<uint8>(x_75, sizeof(void*)*1);
if (lean::is_exclusive(x_75)) {
 lean::cnstr_release(x_75, 0);
 x_99 = x_75;
} else {
 lean::dec(x_75);
 x_99 = lean::box(0);
}
if (lean::is_scalar(x_99)) {
 x_100 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_100 = x_99;
}
lean::cnstr_set(x_100, 0, x_96);
lean::cnstr_set_scalar(x_100, sizeof(void*)*1, x_98);
x_101 = x_100;
x_102 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_102, 0, x_101);
lean::cnstr_set(x_102, 1, x_22);
return x_102;
}
}
else
{
obj* x_110; uint8 x_112; obj* x_113; obj* x_114; obj* x_115; obj* x_116; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_18);
lean::dec(x_20);
x_110 = lean::cnstr_get(x_21, 0);
lean::inc(x_110);
x_112 = lean::cnstr_get_scalar<uint8>(x_21, sizeof(void*)*1);
if (lean::is_exclusive(x_21)) {
 lean::cnstr_release(x_21, 0);
 x_113 = x_21;
} else {
 lean::dec(x_21);
 x_113 = lean::box(0);
}
if (lean::is_scalar(x_113)) {
 x_114 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_114 = x_113;
}
lean::cnstr_set(x_114, 0, x_110);
lean::cnstr_set_scalar(x_114, sizeof(void*)*1, x_112);
x_115 = x_114;
x_116 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_116, 0, x_115);
lean::cnstr_set(x_116, 1, x_22);
return x_116;
}
}
}
}
}
obj* l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_14; 
x_7 = lean::box(0);
lean::inc(x_0);
x_9 = l_list_mfoldl___main___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__2(x_0, x_7, x_1, x_2, x_3, x_4, x_5, x_6);
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 lean::cnstr_release(x_9, 1);
 x_14 = x_9;
} else {
 lean::dec(x_9);
 x_14 = lean::box(0);
}
if (lean::obj_tag(x_10) == 0)
{
obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_26; obj* x_27; obj* x_28; 
x_15 = lean::cnstr_get(x_10, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_10, 1);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_10, 2);
lean::inc(x_19);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 lean::cnstr_release(x_10, 1);
 lean::cnstr_release(x_10, 2);
 x_21 = x_10;
} else {
 lean::dec(x_10);
 x_21 = lean::box(0);
}
x_22 = l_list_reverse___rarg(x_15);
x_23 = l_lean_parser_syntax_mk__node(x_0, x_22);
x_24 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_24);
if (lean::is_scalar(x_21)) {
 x_26 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_26 = x_21;
}
lean::cnstr_set(x_26, 0, x_23);
lean::cnstr_set(x_26, 1, x_17);
lean::cnstr_set(x_26, 2, x_24);
x_27 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_26);
if (lean::is_scalar(x_14)) {
 x_28 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_28 = x_14;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_12);
return x_28;
}
else
{
obj* x_30; uint8 x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; 
lean::dec(x_0);
x_30 = lean::cnstr_get(x_10, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get_scalar<uint8>(x_10, sizeof(void*)*1);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 x_33 = x_10;
} else {
 lean::dec(x_10);
 x_33 = lean::box(0);
}
if (lean::is_scalar(x_33)) {
 x_34 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_34 = x_33;
}
lean::cnstr_set(x_34, 0, x_30);
lean::cnstr_set_scalar(x_34, sizeof(void*)*1, x_32);
x_35 = x_34;
if (lean::is_scalar(x_14)) {
 x_36 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_36 = x_14;
}
lean::cnstr_set(x_36, 0, x_35);
lean::cnstr_set(x_36, 1, x_12);
return x_36;
}
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__lit_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::mk_string("max");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__or__ident___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__2), 6, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::box(0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_number_parser___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__1), 1, 0);
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_3);
x_6 = lean::mk_nat_obj(0u);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__3), 7, 2);
lean::closure_set(x_7, 0, x_5);
lean::closure_set(x_7, 1, x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_2);
return x_8;
}
}
obj* l_lean_parser_command_notation__spec_precedence__lit_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_9; 
x_5 = l_lean_parser_command_notation__spec_precedence__lit;
x_6 = l_lean_parser_command_notation__spec_precedence__lit_parser___closed__1;
lean::inc(x_6);
lean::inc(x_5);
x_9 = l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(x_5, x_6, x_0, x_1, x_2, x_3, x_4);
return x_9;
}
}
obj* l_lean_parser_command_notation__spec_precedence__lit_view_to__nat___main(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; obj* x_4; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = l_lean_parser_number_view_to__nat___main(x_1);
return x_4;
}
else
{
obj* x_6; 
lean::dec(x_0);
x_6 = l_lean_parser_max__prec;
lean::inc(x_6);
return x_6;
}
}
}
obj* l_lean_parser_command_notation__spec_precedence__lit_view_to__nat(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_command_notation__spec_precedence__lit_view_to__nat___main(x_0);
return x_1;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__offset__op() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("precedence_offset_op");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(3);
x_4 = lean::mk_nat_obj(0u);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_1, x_5);
lean::dec(x_1);
if (x_6 == 0)
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_8; obj* x_11; obj* x_12; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
lean::dec(x_0);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_8);
x_12 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_12, 0, x_11);
return x_12;
}
case 3:
{
obj* x_13; 
x_13 = l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__1;
lean::inc(x_13);
return x_13;
}
default:
{
obj* x_16; 
lean::dec(x_0);
x_16 = l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__1;
lean::inc(x_16);
return x_16;
}
}
}
else
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_18; obj* x_21; obj* x_22; 
x_18 = lean::cnstr_get(x_0, 0);
lean::inc(x_18);
lean::dec(x_0);
x_21 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_21, 0, x_18);
x_22 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_22, 0, x_21);
return x_22;
}
case 3:
{
obj* x_23; 
x_23 = l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__2;
lean::inc(x_23);
return x_23;
}
default:
{
obj* x_26; 
lean::dec(x_0);
x_26 = l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__2;
lean::inc(x_26);
return x_26;
}
}
}
}
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("precedence_offset_op");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__3;
lean::inc(x_5);
return x_5;
}
else
{
obj* x_7; obj* x_10; obj* x_12; obj* x_15; uint8 x_16; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::cnstr_get(x_7, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_7, 1);
lean::inc(x_12);
lean::dec(x_7);
x_15 = l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__4;
x_16 = lean_name_dec_eq(x_10, x_15);
lean::dec(x_10);
if (x_16 == 0)
{
obj* x_19; 
lean::dec(x_12);
x_19 = l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__3;
lean::inc(x_19);
return x_19;
}
else
{
if (lean::obj_tag(x_12) == 0)
{
obj* x_21; 
x_21 = l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__3;
lean::inc(x_21);
return x_21;
}
else
{
obj* x_23; obj* x_25; 
x_23 = lean::cnstr_get(x_12, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_12, 1);
lean::inc(x_25);
lean::dec(x_12);
if (lean::obj_tag(x_25) == 0)
{
obj* x_28; 
x_28 = l_lean_parser_syntax_as__node___main(x_23);
if (lean::obj_tag(x_28) == 0)
{
obj* x_29; 
x_29 = l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__3;
lean::inc(x_29);
return x_29;
}
else
{
obj* x_31; obj* x_34; obj* x_36; 
x_31 = lean::cnstr_get(x_28, 0);
lean::inc(x_31);
lean::dec(x_28);
x_34 = lean::cnstr_get(x_31, 0);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_31, 1);
lean::inc(x_36);
lean::dec(x_31);
switch (lean::obj_tag(x_34)) {
case 0:
{
obj* x_40; 
lean::dec(x_36);
x_40 = l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__3;
lean::inc(x_40);
return x_40;
}
case 1:
{
obj* x_44; 
lean::dec(x_36);
lean::dec(x_34);
x_44 = l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__3;
lean::inc(x_44);
return x_44;
}
default:
{
obj* x_46; obj* x_48; obj* x_51; uint8 x_52; 
x_46 = lean::cnstr_get(x_34, 0);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_34, 1);
lean::inc(x_48);
lean::dec(x_34);
x_51 = lean::box(0);
x_52 = lean_name_dec_eq(x_46, x_51);
lean::dec(x_46);
if (x_52 == 0)
{
obj* x_56; 
lean::dec(x_36);
lean::dec(x_48);
x_56 = l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__3;
lean::inc(x_56);
return x_56;
}
else
{
if (lean::obj_tag(x_36) == 0)
{
obj* x_59; 
lean::dec(x_48);
x_59 = l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__3;
lean::inc(x_59);
return x_59;
}
else
{
obj* x_61; obj* x_63; 
x_61 = lean::cnstr_get(x_36, 0);
lean::inc(x_61);
x_63 = lean::cnstr_get(x_36, 1);
lean::inc(x_63);
lean::dec(x_36);
if (lean::obj_tag(x_63) == 0)
{
x_1 = x_61;
x_2 = x_48;
goto lbl_3;
}
else
{
obj* x_69; 
lean::dec(x_61);
lean::dec(x_63);
lean::dec(x_48);
x_69 = l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__3;
lean::inc(x_69);
return x_69;
}
}
}
}
}
}
}
else
{
obj* x_73; 
lean::dec(x_23);
lean::dec(x_25);
x_73 = l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__3;
lean::inc(x_73);
return x_73;
}
}
}
}
lbl_3:
{
obj* x_75; uint8 x_76; 
x_75 = lean::mk_nat_obj(0u);
x_76 = lean::nat_dec_eq(x_2, x_75);
lean::dec(x_2);
if (x_76 == 0)
{
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_78; obj* x_81; obj* x_82; 
x_78 = lean::cnstr_get(x_1, 0);
lean::inc(x_78);
lean::dec(x_1);
x_81 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_81, 0, x_78);
x_82 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_82, 0, x_81);
return x_82;
}
case 3:
{
obj* x_83; 
x_83 = l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__1;
lean::inc(x_83);
return x_83;
}
default:
{
obj* x_86; 
lean::dec(x_1);
x_86 = l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__1;
lean::inc(x_86);
return x_86;
}
}
}
else
{
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_88; obj* x_91; obj* x_92; 
x_88 = lean::cnstr_get(x_1, 0);
lean::inc(x_88);
lean::dec(x_1);
x_91 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_91, 0, x_88);
x_92 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_92, 0, x_91);
return x_92;
}
case 3:
{
obj* x_93; 
x_93 = l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__2;
lean::inc(x_93);
return x_93;
}
default:
{
obj* x_96; 
lean::dec(x_1);
x_96 = l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__2;
lean::inc(x_96);
return x_96;
}
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_13; obj* x_14; obj* x_15; obj* x_17; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
lean::inc(x_5);
x_7 = l_option_map___rarg(x_5, x_2);
x_8 = lean::box(3);
x_9 = l_option_get__or__else___main___rarg(x_7, x_8);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_1);
x_11 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__1;
lean::inc(x_11);
x_13 = l_lean_parser_syntax_mk__node(x_11, x_10);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_1);
x_15 = l_lean_parser_command_notation__spec_precedence__offset__op;
lean::inc(x_15);
x_17 = l_lean_parser_syntax_mk__node(x_15, x_14);
return x_17;
}
else
{
obj* x_18; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_29; obj* x_30; obj* x_31; obj* x_33; 
x_18 = lean::cnstr_get(x_0, 0);
lean::inc(x_18);
lean::dec(x_0);
x_21 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
lean::inc(x_21);
x_23 = l_option_map___rarg(x_21, x_18);
x_24 = lean::box(3);
x_25 = l_option_get__or__else___main___rarg(x_23, x_24);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_1);
x_27 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__2;
lean::inc(x_27);
x_29 = l_lean_parser_syntax_mk__node(x_27, x_26);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_1);
x_31 = l_lean_parser_command_notation__spec_precedence__offset__op;
lean::inc(x_31);
x_33 = l_lean_parser_syntax_mk__node(x_31, x_30);
return x_33;
}
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__offset__op_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__offset() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("precedence_offset");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_0 = l_lean_parser_number_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_1, x_3);
return x_4;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(0);
x_4 = lean::box(3);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; 
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_7; obj* x_10; 
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
lean::dec(x_1);
x_10 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_10, 0, x_7);
x_5 = x_10;
goto lbl_6;
}
case 3:
{
obj* x_11; 
x_11 = lean::box(0);
x_5 = x_11;
goto lbl_6;
}
default:
{
obj* x_13; 
lean::dec(x_1);
x_13 = lean::box(0);
x_5 = x_13;
goto lbl_6;
}
}
lbl_6:
{
obj* x_14; obj* x_15; 
if (lean::obj_tag(x_0) == 0)
{
obj* x_17; 
x_17 = lean::box(3);
x_14 = x_0;
x_15 = x_17;
goto lbl_16;
}
else
{
obj* x_18; obj* x_20; 
x_18 = lean::cnstr_get(x_0, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_0, 1);
lean::inc(x_20);
lean::dec(x_0);
x_14 = x_20;
x_15 = x_18;
goto lbl_16;
}
lbl_16:
{
obj* x_23; obj* x_24; obj* x_26; obj* x_27; obj* x_28; 
x_23 = l_lean_parser_command_notation__spec_precedence__lit_has__view;
x_24 = lean::cnstr_get(x_23, 0);
lean::inc(x_24);
x_26 = lean::apply_1(x_24, x_15);
if (lean::obj_tag(x_14) == 0)
{
obj* x_30; 
x_30 = lean::box(3);
x_27 = x_14;
x_28 = x_30;
goto lbl_29;
}
else
{
obj* x_31; obj* x_33; 
x_31 = lean::cnstr_get(x_14, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_14, 1);
lean::inc(x_33);
lean::dec(x_14);
x_27 = x_33;
x_28 = x_31;
goto lbl_29;
}
lbl_29:
{
obj* x_36; obj* x_37; obj* x_39; 
x_36 = l_lean_parser_command_notation__spec_precedence__offset__op_has__view;
x_37 = lean::cnstr_get(x_36, 0);
lean::inc(x_37);
x_39 = lean::apply_1(x_37, x_28);
if (lean::obj_tag(x_27) == 0)
{
if (lean::obj_tag(x_27) == 0)
{
obj* x_40; obj* x_41; obj* x_43; 
x_40 = lean::box(0);
x_41 = l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__1___closed__1;
lean::inc(x_41);
x_43 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_43, 0, x_5);
lean::cnstr_set(x_43, 1, x_26);
lean::cnstr_set(x_43, 2, x_39);
lean::cnstr_set(x_43, 3, x_41);
lean::cnstr_set(x_43, 4, x_40);
return x_43;
}
else
{
obj* x_44; 
x_44 = lean::cnstr_get(x_27, 0);
lean::inc(x_44);
lean::dec(x_27);
switch (lean::obj_tag(x_44)) {
case 0:
{
obj* x_47; obj* x_50; obj* x_51; obj* x_53; 
x_47 = lean::cnstr_get(x_44, 0);
lean::inc(x_47);
lean::dec(x_44);
x_50 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_50, 0, x_47);
x_51 = l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__1___closed__1;
lean::inc(x_51);
x_53 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_53, 0, x_5);
lean::cnstr_set(x_53, 1, x_26);
lean::cnstr_set(x_53, 2, x_39);
lean::cnstr_set(x_53, 3, x_51);
lean::cnstr_set(x_53, 4, x_50);
return x_53;
}
case 3:
{
obj* x_54; obj* x_55; obj* x_57; 
x_54 = lean::box(0);
x_55 = l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__1___closed__1;
lean::inc(x_55);
x_57 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_57, 0, x_5);
lean::cnstr_set(x_57, 1, x_26);
lean::cnstr_set(x_57, 2, x_39);
lean::cnstr_set(x_57, 3, x_55);
lean::cnstr_set(x_57, 4, x_54);
return x_57;
}
default:
{
obj* x_59; obj* x_60; obj* x_62; 
lean::dec(x_44);
x_59 = lean::box(0);
x_60 = l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__1___closed__1;
lean::inc(x_60);
x_62 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_62, 0, x_5);
lean::cnstr_set(x_62, 1, x_26);
lean::cnstr_set(x_62, 2, x_39);
lean::cnstr_set(x_62, 3, x_60);
lean::cnstr_set(x_62, 4, x_59);
return x_62;
}
}
}
}
else
{
obj* x_63; obj* x_65; obj* x_68; obj* x_69; obj* x_71; 
x_63 = lean::cnstr_get(x_27, 0);
lean::inc(x_63);
x_65 = lean::cnstr_get(x_27, 1);
lean::inc(x_65);
lean::dec(x_27);
x_68 = l_lean_parser_number_has__view;
x_69 = lean::cnstr_get(x_68, 0);
lean::inc(x_69);
x_71 = lean::apply_1(x_69, x_63);
if (lean::obj_tag(x_65) == 0)
{
obj* x_72; obj* x_73; 
x_72 = lean::box(0);
x_73 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_73, 0, x_5);
lean::cnstr_set(x_73, 1, x_26);
lean::cnstr_set(x_73, 2, x_39);
lean::cnstr_set(x_73, 3, x_71);
lean::cnstr_set(x_73, 4, x_72);
return x_73;
}
else
{
obj* x_74; 
x_74 = lean::cnstr_get(x_65, 0);
lean::inc(x_74);
lean::dec(x_65);
switch (lean::obj_tag(x_74)) {
case 0:
{
obj* x_77; obj* x_80; obj* x_81; 
x_77 = lean::cnstr_get(x_74, 0);
lean::inc(x_77);
lean::dec(x_74);
x_80 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_80, 0, x_77);
x_81 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_81, 0, x_5);
lean::cnstr_set(x_81, 1, x_26);
lean::cnstr_set(x_81, 2, x_39);
lean::cnstr_set(x_81, 3, x_71);
lean::cnstr_set(x_81, 4, x_80);
return x_81;
}
case 3:
{
obj* x_82; obj* x_83; 
x_82 = lean::box(0);
x_83 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_83, 0, x_5);
lean::cnstr_set(x_83, 1, x_26);
lean::cnstr_set(x_83, 2, x_39);
lean::cnstr_set(x_83, 3, x_71);
lean::cnstr_set(x_83, 4, x_82);
return x_83;
}
default:
{
obj* x_85; obj* x_86; 
lean::dec(x_74);
x_85 = lean::box(0);
x_86 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_86, 0, x_5);
lean::cnstr_set(x_86, 1, x_26);
lean::cnstr_set(x_86, 2, x_39);
lean::cnstr_set(x_86, 3, x_71);
lean::cnstr_set(x_86, 4, x_85);
return x_86;
}
}
}
}
}
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__1___closed__2;
lean::inc(x_5);
return x_5;
}
else
{
obj* x_7; obj* x_10; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::dec(x_7);
if (lean::obj_tag(x_10) == 0)
{
obj* x_13; 
x_13 = lean::box(3);
x_1 = x_10;
x_2 = x_13;
goto lbl_3;
}
else
{
obj* x_14; obj* x_16; 
x_14 = lean::cnstr_get(x_10, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_10, 1);
lean::inc(x_16);
lean::dec(x_10);
x_1 = x_16;
x_2 = x_14;
goto lbl_3;
}
}
lbl_3:
{
obj* x_19; 
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_21; obj* x_24; 
x_21 = lean::cnstr_get(x_2, 0);
lean::inc(x_21);
lean::dec(x_2);
x_24 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_24, 0, x_21);
x_19 = x_24;
goto lbl_20;
}
case 3:
{
obj* x_25; 
x_25 = lean::box(0);
x_19 = x_25;
goto lbl_20;
}
default:
{
obj* x_27; 
lean::dec(x_2);
x_27 = lean::box(0);
x_19 = x_27;
goto lbl_20;
}
}
lbl_20:
{
obj* x_28; obj* x_29; 
if (lean::obj_tag(x_1) == 0)
{
obj* x_31; 
x_31 = lean::box(3);
x_28 = x_1;
x_29 = x_31;
goto lbl_30;
}
else
{
obj* x_32; obj* x_34; 
x_32 = lean::cnstr_get(x_1, 0);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_1, 1);
lean::inc(x_34);
lean::dec(x_1);
x_28 = x_34;
x_29 = x_32;
goto lbl_30;
}
lbl_30:
{
obj* x_37; obj* x_38; obj* x_40; obj* x_41; obj* x_42; 
x_37 = l_lean_parser_command_notation__spec_precedence__lit_has__view;
x_38 = lean::cnstr_get(x_37, 0);
lean::inc(x_38);
x_40 = lean::apply_1(x_38, x_29);
if (lean::obj_tag(x_28) == 0)
{
obj* x_44; 
x_44 = lean::box(3);
x_41 = x_28;
x_42 = x_44;
goto lbl_43;
}
else
{
obj* x_45; obj* x_47; 
x_45 = lean::cnstr_get(x_28, 0);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_28, 1);
lean::inc(x_47);
lean::dec(x_28);
x_41 = x_47;
x_42 = x_45;
goto lbl_43;
}
lbl_43:
{
obj* x_50; obj* x_51; obj* x_53; 
x_50 = l_lean_parser_command_notation__spec_precedence__offset__op_has__view;
x_51 = lean::cnstr_get(x_50, 0);
lean::inc(x_51);
x_53 = lean::apply_1(x_51, x_42);
if (lean::obj_tag(x_41) == 0)
{
if (lean::obj_tag(x_41) == 0)
{
obj* x_54; obj* x_55; obj* x_57; 
x_54 = lean::box(0);
x_55 = l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__1___closed__1;
lean::inc(x_55);
x_57 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_57, 0, x_19);
lean::cnstr_set(x_57, 1, x_40);
lean::cnstr_set(x_57, 2, x_53);
lean::cnstr_set(x_57, 3, x_55);
lean::cnstr_set(x_57, 4, x_54);
return x_57;
}
else
{
obj* x_58; 
x_58 = lean::cnstr_get(x_41, 0);
lean::inc(x_58);
lean::dec(x_41);
switch (lean::obj_tag(x_58)) {
case 0:
{
obj* x_61; obj* x_64; obj* x_65; obj* x_67; 
x_61 = lean::cnstr_get(x_58, 0);
lean::inc(x_61);
lean::dec(x_58);
x_64 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_64, 0, x_61);
x_65 = l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__1___closed__1;
lean::inc(x_65);
x_67 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_67, 0, x_19);
lean::cnstr_set(x_67, 1, x_40);
lean::cnstr_set(x_67, 2, x_53);
lean::cnstr_set(x_67, 3, x_65);
lean::cnstr_set(x_67, 4, x_64);
return x_67;
}
case 3:
{
obj* x_68; obj* x_69; obj* x_71; 
x_68 = lean::box(0);
x_69 = l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__1___closed__1;
lean::inc(x_69);
x_71 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_71, 0, x_19);
lean::cnstr_set(x_71, 1, x_40);
lean::cnstr_set(x_71, 2, x_53);
lean::cnstr_set(x_71, 3, x_69);
lean::cnstr_set(x_71, 4, x_68);
return x_71;
}
default:
{
obj* x_73; obj* x_74; obj* x_76; 
lean::dec(x_58);
x_73 = lean::box(0);
x_74 = l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__1___closed__1;
lean::inc(x_74);
x_76 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_76, 0, x_19);
lean::cnstr_set(x_76, 1, x_40);
lean::cnstr_set(x_76, 2, x_53);
lean::cnstr_set(x_76, 3, x_74);
lean::cnstr_set(x_76, 4, x_73);
return x_76;
}
}
}
}
else
{
obj* x_77; obj* x_79; obj* x_82; obj* x_83; obj* x_85; 
x_77 = lean::cnstr_get(x_41, 0);
lean::inc(x_77);
x_79 = lean::cnstr_get(x_41, 1);
lean::inc(x_79);
lean::dec(x_41);
x_82 = l_lean_parser_number_has__view;
x_83 = lean::cnstr_get(x_82, 0);
lean::inc(x_83);
x_85 = lean::apply_1(x_83, x_77);
if (lean::obj_tag(x_79) == 0)
{
obj* x_86; obj* x_87; 
x_86 = lean::box(0);
x_87 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_87, 0, x_19);
lean::cnstr_set(x_87, 1, x_40);
lean::cnstr_set(x_87, 2, x_53);
lean::cnstr_set(x_87, 3, x_85);
lean::cnstr_set(x_87, 4, x_86);
return x_87;
}
else
{
obj* x_88; 
x_88 = lean::cnstr_get(x_79, 0);
lean::inc(x_88);
lean::dec(x_79);
switch (lean::obj_tag(x_88)) {
case 0:
{
obj* x_91; obj* x_94; obj* x_95; 
x_91 = lean::cnstr_get(x_88, 0);
lean::inc(x_91);
lean::dec(x_88);
x_94 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_94, 0, x_91);
x_95 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_95, 0, x_19);
lean::cnstr_set(x_95, 1, x_40);
lean::cnstr_set(x_95, 2, x_53);
lean::cnstr_set(x_95, 3, x_85);
lean::cnstr_set(x_95, 4, x_94);
return x_95;
}
case 3:
{
obj* x_96; obj* x_97; 
x_96 = lean::box(0);
x_97 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_97, 0, x_19);
lean::cnstr_set(x_97, 1, x_40);
lean::cnstr_set(x_97, 2, x_53);
lean::cnstr_set(x_97, 3, x_85);
lean::cnstr_set(x_97, 4, x_96);
return x_97;
}
default:
{
obj* x_99; obj* x_100; 
lean::dec(x_88);
x_99 = lean::box(0);
x_100 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_100, 0, x_19);
lean::cnstr_set(x_100, 1, x_40);
lean::cnstr_set(x_100, 2, x_53);
lean::cnstr_set(x_100, 3, x_85);
lean::cnstr_set(x_100, 4, x_99);
return x_100;
}
}
}
}
}
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_12; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_20; obj* x_21; obj* x_22; obj* x_24; obj* x_25; obj* x_26; obj* x_28; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_40; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 3);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 4);
lean::inc(x_9);
lean::dec(x_0);
x_12 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
lean::inc(x_12);
x_14 = l_option_map___rarg(x_12, x_1);
x_15 = lean::box(3);
x_16 = l_option_get__or__else___main___rarg(x_14, x_15);
x_17 = l_lean_parser_command_notation__spec_precedence__lit_has__view;
x_18 = lean::cnstr_get(x_17, 1);
lean::inc(x_18);
x_20 = lean::apply_1(x_18, x_3);
x_21 = l_lean_parser_command_notation__spec_precedence__offset__op_has__view;
x_22 = lean::cnstr_get(x_21, 1);
lean::inc(x_22);
x_24 = lean::apply_1(x_22, x_5);
x_25 = l_lean_parser_number_has__view;
x_26 = lean::cnstr_get(x_25, 1);
lean::inc(x_26);
x_28 = lean::apply_1(x_26, x_7);
lean::inc(x_12);
x_30 = l_option_map___rarg(x_12, x_9);
x_31 = l_option_get__or__else___main___rarg(x_30, x_15);
x_32 = lean::box(0);
x_33 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_33, 0, x_31);
lean::cnstr_set(x_33, 1, x_32);
x_34 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_34, 0, x_28);
lean::cnstr_set(x_34, 1, x_33);
x_35 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_35, 0, x_24);
lean::cnstr_set(x_35, 1, x_34);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_20);
lean::cnstr_set(x_36, 1, x_35);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_16);
lean::cnstr_set(x_37, 1, x_36);
x_38 = l_lean_parser_command_notation__spec_precedence__offset;
lean::inc(x_38);
x_40 = l_lean_parser_syntax_mk__node(x_38, x_37);
return x_40;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__offset_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__term() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("precedence_term");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(3);
x_4 = lean::mk_nat_obj(0u);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_1, x_5);
lean::dec(x_1);
if (x_6 == 0)
{
obj* x_8; obj* x_9; obj* x_11; obj* x_12; 
x_8 = l_lean_parser_command_notation__spec_precedence__offset_has__view;
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::apply_1(x_9, x_0);
x_12 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_12, 0, x_11);
return x_12;
}
else
{
obj* x_13; obj* x_14; obj* x_16; obj* x_17; 
x_13 = l_lean_parser_command_notation__spec_precedence__lit_has__view;
x_14 = lean::cnstr_get(x_13, 0);
lean::inc(x_14);
x_16 = lean::apply_1(x_14, x_0);
x_17 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_17, 0, x_16);
return x_17;
}
}
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("precedence_term");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__1___closed__1;
lean::inc(x_5);
return x_5;
}
else
{
obj* x_7; obj* x_10; obj* x_12; obj* x_15; uint8 x_16; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::cnstr_get(x_7, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_7, 1);
lean::inc(x_12);
lean::dec(x_7);
x_15 = l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__1___closed__2;
x_16 = lean_name_dec_eq(x_10, x_15);
lean::dec(x_10);
if (x_16 == 0)
{
obj* x_19; 
lean::dec(x_12);
x_19 = l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__1___closed__1;
lean::inc(x_19);
return x_19;
}
else
{
if (lean::obj_tag(x_12) == 0)
{
obj* x_21; 
x_21 = l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__1___closed__1;
lean::inc(x_21);
return x_21;
}
else
{
obj* x_23; obj* x_25; 
x_23 = lean::cnstr_get(x_12, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_12, 1);
lean::inc(x_25);
lean::dec(x_12);
if (lean::obj_tag(x_25) == 0)
{
obj* x_28; 
x_28 = l_lean_parser_syntax_as__node___main(x_23);
if (lean::obj_tag(x_28) == 0)
{
obj* x_29; 
x_29 = l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__1___closed__1;
lean::inc(x_29);
return x_29;
}
else
{
obj* x_31; obj* x_34; obj* x_36; 
x_31 = lean::cnstr_get(x_28, 0);
lean::inc(x_31);
lean::dec(x_28);
x_34 = lean::cnstr_get(x_31, 0);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_31, 1);
lean::inc(x_36);
lean::dec(x_31);
switch (lean::obj_tag(x_34)) {
case 0:
{
obj* x_40; 
lean::dec(x_36);
x_40 = l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__1___closed__1;
lean::inc(x_40);
return x_40;
}
case 1:
{
obj* x_44; 
lean::dec(x_36);
lean::dec(x_34);
x_44 = l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__1___closed__1;
lean::inc(x_44);
return x_44;
}
default:
{
obj* x_46; obj* x_48; obj* x_51; uint8 x_52; 
x_46 = lean::cnstr_get(x_34, 0);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_34, 1);
lean::inc(x_48);
lean::dec(x_34);
x_51 = lean::box(0);
x_52 = lean_name_dec_eq(x_46, x_51);
lean::dec(x_46);
if (x_52 == 0)
{
obj* x_56; 
lean::dec(x_36);
lean::dec(x_48);
x_56 = l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__1___closed__1;
lean::inc(x_56);
return x_56;
}
else
{
if (lean::obj_tag(x_36) == 0)
{
obj* x_59; 
lean::dec(x_48);
x_59 = l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__1___closed__1;
lean::inc(x_59);
return x_59;
}
else
{
obj* x_61; obj* x_63; 
x_61 = lean::cnstr_get(x_36, 0);
lean::inc(x_61);
x_63 = lean::cnstr_get(x_36, 1);
lean::inc(x_63);
lean::dec(x_36);
if (lean::obj_tag(x_63) == 0)
{
x_1 = x_61;
x_2 = x_48;
goto lbl_3;
}
else
{
obj* x_69; 
lean::dec(x_61);
lean::dec(x_63);
lean::dec(x_48);
x_69 = l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__1___closed__1;
lean::inc(x_69);
return x_69;
}
}
}
}
}
}
}
else
{
obj* x_73; 
lean::dec(x_23);
lean::dec(x_25);
x_73 = l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__1___closed__1;
lean::inc(x_73);
return x_73;
}
}
}
}
lbl_3:
{
obj* x_75; uint8 x_76; 
x_75 = lean::mk_nat_obj(0u);
x_76 = lean::nat_dec_eq(x_2, x_75);
lean::dec(x_2);
if (x_76 == 0)
{
obj* x_78; obj* x_79; obj* x_81; obj* x_82; 
x_78 = l_lean_parser_command_notation__spec_precedence__offset_has__view;
x_79 = lean::cnstr_get(x_78, 0);
lean::inc(x_79);
x_81 = lean::apply_1(x_79, x_1);
x_82 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_82, 0, x_81);
return x_82;
}
else
{
obj* x_83; obj* x_84; obj* x_86; obj* x_87; 
x_83 = l_lean_parser_command_notation__spec_precedence__lit_has__view;
x_84 = lean::cnstr_get(x_83, 0);
lean::inc(x_84);
x_86 = lean::apply_1(x_84, x_1);
x_87 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_87, 0, x_86);
return x_87;
}
}
}
}
obj* l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_16; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_lean_parser_command_notation__spec_precedence__lit_has__view;
x_6 = lean::cnstr_get(x_5, 1);
lean::inc(x_6);
x_8 = lean::apply_1(x_6, x_2);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_1);
x_10 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__1;
lean::inc(x_10);
x_12 = l_lean_parser_syntax_mk__node(x_10, x_9);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_1);
x_14 = l_lean_parser_command_notation__spec_precedence__term;
lean::inc(x_14);
x_16 = l_lean_parser_syntax_mk__node(x_14, x_13);
return x_16;
}
else
{
obj* x_17; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_27; obj* x_28; obj* x_29; obj* x_31; 
x_17 = lean::cnstr_get(x_0, 0);
lean::inc(x_17);
lean::dec(x_0);
x_20 = l_lean_parser_command_notation__spec_precedence__offset_has__view;
x_21 = lean::cnstr_get(x_20, 1);
lean::inc(x_21);
x_23 = lean::apply_1(x_21, x_17);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_1);
x_25 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__2;
lean::inc(x_25);
x_27 = l_lean_parser_syntax_mk__node(x_25, x_24);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_1);
x_29 = l_lean_parser_command_notation__spec_precedence__term;
lean::inc(x_29);
x_31 = l_lean_parser_syntax_mk__node(x_29, x_28);
return x_31;
}
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__term_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__term_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_notation__spec_precedence__term_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_13; obj* x_14; obj* x_16; obj* x_18; obj* x_20; 
lean::dec(x_5);
lean::dec(x_3);
lean::dec(x_1);
lean::inc(x_6);
lean::inc(x_4);
x_13 = l_lean_parser_token(x_4, x_6, x_7);
x_14 = lean::cnstr_get(x_13, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_13, 1);
lean::inc(x_16);
if (lean::is_exclusive(x_13)) {
 lean::cnstr_release(x_13, 0);
 lean::cnstr_release(x_13, 1);
 x_18 = x_13;
} else {
 lean::dec(x_13);
 x_18 = lean::box(0);
}
lean::inc(x_0);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_20, 0, x_0);
if (lean::obj_tag(x_14) == 0)
{
obj* x_21; obj* x_23; obj* x_25; obj* x_27; obj* x_28; 
x_21 = lean::cnstr_get(x_14, 0);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_14, 1);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_14, 2);
lean::inc(x_25);
if (lean::is_exclusive(x_14)) {
 lean::cnstr_release(x_14, 0);
 lean::cnstr_release(x_14, 1);
 lean::cnstr_release(x_14, 2);
 x_27 = x_14;
} else {
 lean::dec(x_14);
 x_27 = lean::box(0);
}
switch (lean::obj_tag(x_21)) {
case 0:
{
obj* x_31; obj* x_33; uint8 x_36; 
lean::dec(x_18);
x_31 = lean::cnstr_get(x_21, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_31, 1);
lean::inc(x_33);
lean::dec(x_31);
x_36 = lean::string_dec_eq(x_0, x_33);
lean::dec(x_0);
if (x_36 == 0)
{
obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_43; obj* x_45; 
x_38 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_38, 0, x_6);
x_39 = lean::box(0);
x_40 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_33, x_2, x_38, x_39, x_4, x_23, x_16);
x_41 = lean::cnstr_get(x_40, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_40, 1);
lean::inc(x_43);
if (lean::is_exclusive(x_40)) {
 lean::cnstr_release(x_40, 0);
 lean::cnstr_release(x_40, 1);
 x_45 = x_40;
} else {
 lean::dec(x_40);
 x_45 = lean::box(0);
}
if (lean::obj_tag(x_41) == 0)
{
obj* x_46; obj* x_48; obj* x_51; obj* x_53; obj* x_54; obj* x_55; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_46 = lean::cnstr_get(x_41, 1);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_41, 2);
lean::inc(x_48);
lean::dec(x_41);
x_51 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_51);
if (lean::is_scalar(x_27)) {
 x_53 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_53 = x_27;
}
lean::cnstr_set(x_53, 0, x_21);
lean::cnstr_set(x_53, 1, x_46);
lean::cnstr_set(x_53, 2, x_51);
x_54 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_48, x_53);
x_55 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_25, x_54);
lean::inc(x_51);
x_57 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_51, x_55);
x_58 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_57, x_20);
x_59 = l_lean_parser_parsec__t_try__mk__res___rarg(x_58);
if (lean::is_scalar(x_45)) {
 x_60 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_60 = x_45;
}
lean::cnstr_set(x_60, 0, x_59);
lean::cnstr_set(x_60, 1, x_43);
return x_60;
}
else
{
obj* x_63; uint8 x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_72; obj* x_73; obj* x_74; obj* x_75; 
lean::dec(x_27);
lean::dec(x_21);
x_63 = lean::cnstr_get(x_41, 0);
lean::inc(x_63);
x_65 = lean::cnstr_get_scalar<uint8>(x_41, sizeof(void*)*1);
if (lean::is_exclusive(x_41)) {
 lean::cnstr_release(x_41, 0);
 x_66 = x_41;
} else {
 lean::dec(x_41);
 x_66 = lean::box(0);
}
if (lean::is_scalar(x_66)) {
 x_67 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_67 = x_66;
}
lean::cnstr_set(x_67, 0, x_63);
lean::cnstr_set_scalar(x_67, sizeof(void*)*1, x_65);
x_68 = x_67;
x_69 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_25, x_68);
x_70 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_70);
x_72 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_70, x_69);
x_73 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_72, x_20);
x_74 = l_lean_parser_parsec__t_try__mk__res___rarg(x_73);
if (lean::is_scalar(x_45)) {
 x_75 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_75 = x_45;
}
lean::cnstr_set(x_75, 0, x_74);
lean::cnstr_set(x_75, 1, x_43);
return x_75;
}
}
else
{
obj* x_80; obj* x_82; obj* x_83; obj* x_84; obj* x_86; obj* x_87; obj* x_88; obj* x_89; 
lean::dec(x_4);
lean::dec(x_6);
lean::dec(x_2);
lean::dec(x_33);
x_80 = l_lean_parser_finish__comment__block___closed__2;
lean::inc(x_80);
if (lean::is_scalar(x_27)) {
 x_82 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_82 = x_27;
}
lean::cnstr_set(x_82, 0, x_21);
lean::cnstr_set(x_82, 1, x_23);
lean::cnstr_set(x_82, 2, x_80);
x_83 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_25, x_82);
x_84 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_84);
x_86 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_84, x_83);
x_87 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_86, x_20);
x_88 = l_lean_parser_parsec__t_try__mk__res___rarg(x_87);
x_89 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_89, 0, x_88);
lean::cnstr_set(x_89, 1, x_16);
return x_89;
}
}
case 3:
{
obj* x_92; 
lean::dec(x_27);
lean::dec(x_0);
x_92 = lean::box(0);
x_28 = x_92;
goto lbl_29;
}
default:
{
obj* x_96; 
lean::dec(x_27);
lean::dec(x_0);
lean::dec(x_21);
x_96 = lean::box(0);
x_28 = x_96;
goto lbl_29;
}
}
lbl_29:
{
obj* x_98; obj* x_99; obj* x_100; obj* x_102; obj* x_103; obj* x_105; obj* x_108; obj* x_109; obj* x_111; obj* x_112; obj* x_113; obj* x_114; 
lean::dec(x_28);
x_98 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_98, 0, x_6);
x_99 = lean::box(0);
x_100 = l_string_join___closed__1;
lean::inc(x_100);
x_102 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_100, x_2, x_98, x_99, x_4, x_23, x_16);
x_103 = lean::cnstr_get(x_102, 0);
lean::inc(x_103);
x_105 = lean::cnstr_get(x_102, 1);
lean::inc(x_105);
lean::dec(x_102);
x_108 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_25, x_103);
x_109 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_109);
x_111 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_109, x_108);
x_112 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_111, x_20);
x_113 = l_lean_parser_parsec__t_try__mk__res___rarg(x_112);
if (lean::is_scalar(x_18)) {
 x_114 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_114 = x_18;
}
lean::cnstr_set(x_114, 0, x_113);
lean::cnstr_set(x_114, 1, x_105);
return x_114;
}
}
else
{
obj* x_119; uint8 x_121; obj* x_122; obj* x_123; obj* x_124; obj* x_125; obj* x_127; obj* x_128; obj* x_129; obj* x_130; 
lean::dec(x_4);
lean::dec(x_6);
lean::dec(x_0);
lean::dec(x_2);
x_119 = lean::cnstr_get(x_14, 0);
lean::inc(x_119);
x_121 = lean::cnstr_get_scalar<uint8>(x_14, sizeof(void*)*1);
if (lean::is_exclusive(x_14)) {
 lean::cnstr_release(x_14, 0);
 x_122 = x_14;
} else {
 lean::dec(x_14);
 x_122 = lean::box(0);
}
if (lean::is_scalar(x_122)) {
 x_123 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_123 = x_122;
}
lean::cnstr_set(x_123, 0, x_119);
lean::cnstr_set_scalar(x_123, sizeof(void*)*1, x_121);
x_124 = x_123;
x_125 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_125);
x_127 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_125, x_124);
x_128 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_127, x_20);
x_129 = l_lean_parser_parsec__t_try__mk__res___rarg(x_128);
if (lean::is_scalar(x_18)) {
 x_130 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_130 = x_18;
}
lean::cnstr_set(x_130, 0, x_129);
lean::cnstr_set(x_130, 1, x_16);
return x_130;
}
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
x_0 = lean::mk_string("(");
x_1 = lean::mk_nat_obj(0u);
x_2 = l_lean_parser_symbol_tokens___rarg(x_0, x_1);
x_3 = lean::mk_string(" + ");
x_4 = l_lean_parser_symbol_tokens___rarg(x_3, x_1);
x_5 = lean::mk_string(" - ");
x_6 = l_lean_parser_symbol_tokens___rarg(x_5, x_1);
x_7 = lean::box(0);
x_8 = l_lean_parser_list_cons_tokens___rarg(x_6, x_7);
x_9 = l_lean_parser_list_cons_tokens___rarg(x_4, x_8);
x_10 = l_lean_parser_tokens___rarg(x_9);
x_11 = l_lean_parser_list_cons_tokens___rarg(x_10, x_7);
x_12 = l_lean_parser_tokens___rarg(x_11);
x_13 = lean::mk_string(")");
x_14 = l_lean_parser_symbol_tokens___rarg(x_13, x_1);
x_15 = l_lean_parser_list_cons_tokens___rarg(x_14, x_7);
x_16 = l_lean_parser_list_cons_tokens___rarg(x_7, x_15);
x_17 = l_lean_parser_list_cons_tokens___rarg(x_12, x_16);
x_18 = l_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens;
lean::inc(x_18);
x_20 = l_lean_parser_list_cons_tokens___rarg(x_18, x_17);
x_21 = l_lean_parser_list_cons_tokens___rarg(x_2, x_20);
x_22 = l_lean_parser_tokens___rarg(x_21);
x_23 = l_lean_parser_list_cons_tokens___rarg(x_22, x_7);
lean::inc(x_18);
x_25 = l_lean_parser_list_cons_tokens___rarg(x_18, x_23);
x_26 = l_lean_parser_tokens___rarg(x_25);
x_27 = l_lean_parser_list_cons_tokens___rarg(x_26, x_7);
x_28 = l_lean_parser_tokens___rarg(x_27);
return x_28;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_35; obj* x_36; obj* x_37; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_56; 
x_0 = lean::mk_string("(");
x_1 = l_string_trim(x_0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_5, 0, x_1);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::mk_string(" + ");
x_7 = l_string_trim(x_6);
lean::inc(x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_9, 0, x_7);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_10, 0, x_7);
lean::closure_set(x_10, 1, x_4);
lean::closure_set(x_10, 2, x_9);
x_11 = lean::mk_string(" - ");
x_12 = l_string_trim(x_11);
lean::inc(x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_14, 0, x_12);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_15, 0, x_12);
lean::closure_set(x_15, 1, x_4);
lean::closure_set(x_15, 2, x_14);
x_16 = lean::box(0);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_16);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_10);
lean::cnstr_set(x_18, 1, x_17);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__3), 7, 2);
lean::closure_set(x_19, 0, x_18);
lean::closure_set(x_19, 1, x_4);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_16);
x_21 = l_lean_parser_command_notation__spec_precedence__offset__op;
lean::inc(x_21);
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1), 7, 2);
lean::closure_set(x_23, 0, x_21);
lean::closure_set(x_23, 1, x_20);
x_24 = lean::mk_string(")");
x_25 = l_string_trim(x_24);
lean::inc(x_25);
x_27 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_27, 0, x_25);
x_28 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_28, 0, x_25);
lean::closure_set(x_28, 1, x_4);
lean::closure_set(x_28, 2, x_27);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_28);
lean::cnstr_set(x_29, 1, x_16);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_number_parser___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__1), 1, 0);
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_29);
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_23);
lean::cnstr_set(x_32, 1, x_31);
x_33 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_precedence__lit_parser), 5, 0);
lean::inc(x_33);
x_35 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_35, 0, x_33);
lean::cnstr_set(x_35, 1, x_32);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_5);
lean::cnstr_set(x_36, 1, x_35);
x_37 = l_lean_parser_command_notation__spec_precedence__offset;
lean::inc(x_37);
x_39 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1), 7, 2);
lean::closure_set(x_39, 0, x_37);
lean::closure_set(x_39, 1, x_36);
x_40 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_40, 0, x_39);
lean::cnstr_set(x_40, 1, x_16);
x_41 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_41, 0, x_33);
lean::cnstr_set(x_41, 1, x_40);
x_42 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__3), 7, 2);
lean::closure_set(x_42, 0, x_41);
lean::closure_set(x_42, 1, x_4);
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_42);
lean::cnstr_set(x_43, 1, x_16);
x_44 = l_lean_parser_term__parser__m_monad;
x_45 = l_lean_parser_term__parser__m_monad__except;
x_46 = l_lean_parser_term__parser__m_lean_parser_monad__parsec;
x_47 = l_lean_parser_term__parser__m_alternative;
x_48 = l_lean_parser_command_notation__spec_precedence__term;
x_49 = l_lean_parser_command_notation__spec_precedence__term_has__view;
lean::inc(x_49);
lean::inc(x_48);
lean::inc(x_47);
lean::inc(x_46);
lean::inc(x_45);
lean::inc(x_44);
x_56 = l_lean_parser_combinators_node_view___rarg(x_44, x_45, x_46, x_47, x_48, x_43, x_49);
return x_56;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence__term_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_35; obj* x_36; obj* x_37; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
x_0 = lean::mk_string("(");
x_1 = l_string_trim(x_0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_5, 0, x_1);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::mk_string(" + ");
x_7 = l_string_trim(x_6);
lean::inc(x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_9, 0, x_7);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_10, 0, x_7);
lean::closure_set(x_10, 1, x_4);
lean::closure_set(x_10, 2, x_9);
x_11 = lean::mk_string(" - ");
x_12 = l_string_trim(x_11);
lean::inc(x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_14, 0, x_12);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_15, 0, x_12);
lean::closure_set(x_15, 1, x_4);
lean::closure_set(x_15, 2, x_14);
x_16 = lean::box(0);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_16);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_10);
lean::cnstr_set(x_18, 1, x_17);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__3), 7, 2);
lean::closure_set(x_19, 0, x_18);
lean::closure_set(x_19, 1, x_4);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_16);
x_21 = l_lean_parser_command_notation__spec_precedence__offset__op;
lean::inc(x_21);
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1), 7, 2);
lean::closure_set(x_23, 0, x_21);
lean::closure_set(x_23, 1, x_20);
x_24 = lean::mk_string(")");
x_25 = l_string_trim(x_24);
lean::inc(x_25);
x_27 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_27, 0, x_25);
x_28 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_28, 0, x_25);
lean::closure_set(x_28, 1, x_4);
lean::closure_set(x_28, 2, x_27);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_28);
lean::cnstr_set(x_29, 1, x_16);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_number_parser___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__1), 1, 0);
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_29);
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_23);
lean::cnstr_set(x_32, 1, x_31);
x_33 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_precedence__lit_parser), 5, 0);
lean::inc(x_33);
x_35 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_35, 0, x_33);
lean::cnstr_set(x_35, 1, x_32);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_5);
lean::cnstr_set(x_36, 1, x_35);
x_37 = l_lean_parser_command_notation__spec_precedence__offset;
lean::inc(x_37);
x_39 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1), 7, 2);
lean::closure_set(x_39, 0, x_37);
lean::closure_set(x_39, 1, x_36);
x_40 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_40, 0, x_39);
lean::cnstr_set(x_40, 1, x_16);
x_41 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_41, 0, x_33);
lean::cnstr_set(x_41, 1, x_40);
x_42 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__3), 7, 2);
lean::closure_set(x_42, 0, x_41);
lean::closure_set(x_42, 1, x_4);
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_42);
lean::cnstr_set(x_43, 1, x_16);
return x_43;
}
}
obj* l_lean_parser_command_notation__spec_precedence__term_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_9; 
x_5 = l_lean_parser_command_notation__spec_precedence__term;
x_6 = l_lean_parser_command_notation__spec_precedence__term_parser___closed__1;
lean::inc(x_6);
lean::inc(x_5);
x_9 = l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(x_5, x_6, x_0, x_1, x_2, x_3, x_4);
return x_9;
}
}
obj* l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; obj* x_4; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = l_lean_parser_command_notation__spec_precedence__lit_view_to__nat___main(x_1);
return x_4;
}
else
{
obj* x_5; obj* x_8; 
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
lean::dec(x_0);
x_8 = lean::cnstr_get(x_5, 2);
lean::inc(x_8);
if (lean::obj_tag(x_8) == 0)
{
obj* x_11; obj* x_13; obj* x_14; obj* x_17; obj* x_18; 
lean::dec(x_8);
x_11 = lean::cnstr_get(x_5, 1);
lean::inc(x_11);
x_13 = l_lean_parser_command_notation__spec_precedence__lit_view_to__nat___main(x_11);
x_14 = lean::cnstr_get(x_5, 3);
lean::inc(x_14);
lean::dec(x_5);
x_17 = l_lean_parser_number_view_to__nat___main(x_14);
x_18 = lean::nat_add(x_13, x_17);
lean::dec(x_17);
lean::dec(x_13);
return x_18;
}
else
{
obj* x_22; obj* x_24; obj* x_25; obj* x_28; obj* x_29; 
lean::dec(x_8);
x_22 = lean::cnstr_get(x_5, 1);
lean::inc(x_22);
x_24 = l_lean_parser_command_notation__spec_precedence__lit_view_to__nat___main(x_22);
x_25 = lean::cnstr_get(x_5, 3);
lean::inc(x_25);
lean::dec(x_5);
x_28 = l_lean_parser_number_view_to__nat___main(x_25);
x_29 = lean::nat_sub(x_24, x_28);
lean::dec(x_28);
lean::dec(x_24);
return x_29;
}
}
}
}
obj* l_lean_parser_command_notation__spec_precedence__term_view_to__nat(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_0);
return x_1;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("precedence");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_0 = l_lean_parser_command_notation__spec_precedence__term_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_1, x_3);
return x_4;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = l_lean_parser_command_notation__spec_precedence__term_has__view;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::box(3);
x_5 = lean::apply_1(x_2, x_4);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_5);
return x_6;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(0);
x_4 = lean::box(3);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_5; obj* x_8; 
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
lean::dec(x_1);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_5);
if (lean::obj_tag(x_0) == 0)
{
obj* x_9; obj* x_11; 
x_9 = l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1___closed__1;
lean::inc(x_9);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_8);
lean::cnstr_set(x_11, 1, x_9);
return x_11;
}
else
{
obj* x_12; obj* x_15; obj* x_16; obj* x_18; obj* x_19; 
x_12 = lean::cnstr_get(x_0, 0);
lean::inc(x_12);
lean::dec(x_0);
x_15 = l_lean_parser_command_notation__spec_precedence__term_has__view;
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
x_18 = lean::apply_1(x_16, x_12);
x_19 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_19, 0, x_8);
lean::cnstr_set(x_19, 1, x_18);
return x_19;
}
}
case 3:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_20; 
x_20 = l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1___closed__2;
lean::inc(x_20);
return x_20;
}
else
{
obj* x_22; obj* x_25; obj* x_26; obj* x_27; obj* x_29; obj* x_30; 
x_22 = lean::cnstr_get(x_0, 0);
lean::inc(x_22);
lean::dec(x_0);
x_25 = lean::box(0);
x_26 = l_lean_parser_command_notation__spec_precedence__term_has__view;
x_27 = lean::cnstr_get(x_26, 0);
lean::inc(x_27);
x_29 = lean::apply_1(x_27, x_22);
x_30 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_30, 0, x_25);
lean::cnstr_set(x_30, 1, x_29);
return x_30;
}
}
default:
{
lean::dec(x_1);
if (lean::obj_tag(x_0) == 0)
{
obj* x_32; 
x_32 = l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1___closed__2;
lean::inc(x_32);
return x_32;
}
else
{
obj* x_34; obj* x_37; obj* x_38; obj* x_39; obj* x_41; obj* x_42; 
x_34 = lean::cnstr_get(x_0, 0);
lean::inc(x_34);
lean::dec(x_0);
x_37 = lean::box(0);
x_38 = l_lean_parser_command_notation__spec_precedence__term_has__view;
x_39 = lean::cnstr_get(x_38, 0);
lean::inc(x_39);
x_41 = lean::apply_1(x_39, x_34);
x_42 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_42, 0, x_37);
lean::cnstr_set(x_42, 1, x_41);
return x_42;
}
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1___closed__3;
lean::inc(x_5);
return x_5;
}
else
{
obj* x_7; obj* x_10; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::dec(x_7);
if (lean::obj_tag(x_10) == 0)
{
obj* x_13; 
x_13 = lean::box(3);
x_1 = x_10;
x_2 = x_13;
goto lbl_3;
}
else
{
obj* x_14; obj* x_16; 
x_14 = lean::cnstr_get(x_10, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_10, 1);
lean::inc(x_16);
lean::dec(x_10);
x_1 = x_16;
x_2 = x_14;
goto lbl_3;
}
}
lbl_3:
{
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_19; obj* x_22; 
x_19 = lean::cnstr_get(x_2, 0);
lean::inc(x_19);
lean::dec(x_2);
x_22 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_22, 0, x_19);
if (lean::obj_tag(x_1) == 0)
{
obj* x_23; obj* x_25; 
x_23 = l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1___closed__1;
lean::inc(x_23);
x_25 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_25, 0, x_22);
lean::cnstr_set(x_25, 1, x_23);
return x_25;
}
else
{
obj* x_26; obj* x_29; obj* x_30; obj* x_32; obj* x_33; 
x_26 = lean::cnstr_get(x_1, 0);
lean::inc(x_26);
lean::dec(x_1);
x_29 = l_lean_parser_command_notation__spec_precedence__term_has__view;
x_30 = lean::cnstr_get(x_29, 0);
lean::inc(x_30);
x_32 = lean::apply_1(x_30, x_26);
x_33 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_33, 0, x_22);
lean::cnstr_set(x_33, 1, x_32);
return x_33;
}
}
case 3:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_34; 
x_34 = l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1___closed__2;
lean::inc(x_34);
return x_34;
}
else
{
obj* x_36; obj* x_39; obj* x_40; obj* x_41; obj* x_43; obj* x_44; 
x_36 = lean::cnstr_get(x_1, 0);
lean::inc(x_36);
lean::dec(x_1);
x_39 = lean::box(0);
x_40 = l_lean_parser_command_notation__spec_precedence__term_has__view;
x_41 = lean::cnstr_get(x_40, 0);
lean::inc(x_41);
x_43 = lean::apply_1(x_41, x_36);
x_44 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_44, 0, x_39);
lean::cnstr_set(x_44, 1, x_43);
return x_44;
}
}
default:
{
lean::dec(x_2);
if (lean::obj_tag(x_1) == 0)
{
obj* x_46; 
x_46 = l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1___closed__2;
lean::inc(x_46);
return x_46;
}
else
{
obj* x_48; obj* x_51; obj* x_52; obj* x_53; obj* x_55; obj* x_56; 
x_48 = lean::cnstr_get(x_1, 0);
lean::inc(x_48);
lean::dec(x_1);
x_51 = lean::box(0);
x_52 = l_lean_parser_command_notation__spec_precedence__term_has__view;
x_53 = lean::cnstr_get(x_52, 0);
lean::inc(x_53);
x_55 = lean::apply_1(x_53, x_48);
x_56 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_56, 0, x_51);
lean::cnstr_set(x_56, 1, x_55);
return x_56;
}
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_20; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
lean::inc(x_6);
x_8 = l_option_map___rarg(x_6, x_1);
x_9 = lean::box(3);
x_10 = l_option_get__or__else___main___rarg(x_8, x_9);
x_11 = l_lean_parser_command_notation__spec_precedence__term_has__view;
x_12 = lean::cnstr_get(x_11, 1);
lean::inc(x_12);
x_14 = lean::apply_1(x_12, x_3);
x_15 = lean::box(0);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_14);
lean::cnstr_set(x_16, 1, x_15);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_10);
lean::cnstr_set(x_17, 1, x_16);
x_18 = l_lean_parser_command_notation__spec_precedence;
lean::inc(x_18);
x_20 = l_lean_parser_syntax_mk__node(x_18, x_17);
return x_20;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_notation__spec_precedence_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::mk_string(":");
x_1 = lean::mk_nat_obj(0u);
x_2 = l_lean_parser_symbol_tokens___rarg(x_0, x_1);
x_3 = lean::box(0);
x_4 = l_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens;
lean::inc(x_4);
x_6 = l_lean_parser_list_cons_tokens___rarg(x_4, x_3);
x_7 = l_lean_parser_list_cons_tokens___rarg(x_2, x_6);
x_8 = l_lean_parser_tokens___rarg(x_7);
return x_8;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_22; 
x_0 = lean::mk_string(":");
x_1 = l_string_trim(x_0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_5, 0, x_1);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::box(0);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_precedence__term_parser), 5, 0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_5);
lean::cnstr_set(x_9, 1, x_8);
x_10 = l_lean_parser_term__parser__m_monad;
x_11 = l_lean_parser_term__parser__m_monad__except;
x_12 = l_lean_parser_term__parser__m_lean_parser_monad__parsec;
x_13 = l_lean_parser_term__parser__m_alternative;
x_14 = l_lean_parser_command_notation__spec_precedence;
x_15 = l_lean_parser_command_notation__spec_precedence_has__view;
lean::inc(x_15);
lean::inc(x_14);
lean::inc(x_13);
lean::inc(x_12);
lean::inc(x_11);
lean::inc(x_10);
x_22 = l_lean_parser_combinators_node_view___rarg(x_10, x_11, x_12, x_13, x_14, x_9, x_15);
return x_22;
}
}
obj* _init_l_lean_parser_command_notation__spec_precedence_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_0 = lean::mk_string(":");
x_1 = l_string_trim(x_0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_5, 0, x_1);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::box(0);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_precedence__term_parser), 5, 0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_5);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
obj* l_lean_parser_command_notation__spec_precedence_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_9; 
x_5 = l_lean_parser_command_notation__spec_precedence;
x_6 = l_lean_parser_command_notation__spec_precedence_parser___closed__1;
lean::inc(x_6);
lean::inc(x_5);
x_9 = l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(x_5, x_6, x_0, x_1, x_2, x_3, x_4);
return x_9;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__tokens___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint32 x_9; uint8 x_10; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = 96;
x_10 = x_8 == x_9;
if (x_10 == 0)
{
obj* x_11; obj* x_12; obj* x_14; obj* x_15; 
x_11 = lean::mk_nat_obj(1u);
x_12 = lean::nat_sub(x_0, x_11);
lean::dec(x_0);
x_14 = lean::string_push(x_1, x_8);
x_15 = lean::string_iterator_next(x_2);
x_0 = x_12;
x_1 = x_14;
x_2 = x_15;
goto _start;
}
else
{
obj* x_18; 
lean::dec(x_0);
x_18 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_18;
}
}
}
else
{
obj* x_20; 
lean::dec(x_0);
x_20 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_20;
}
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__tokens___spec__1___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_5; obj* x_6; 
x_2 = lean::string_iterator_remaining(x_0);
x_3 = l_string_join___closed__1;
lean::inc(x_3);
x_5 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__tokens___spec__2(x_2, x_3, x_0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__tokens___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while___at_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__tokens___spec__1___rarg), 2, 0);
return x_6;
}
}
obj* _init_l_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
return x_0;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__view___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint32 x_9; uint8 x_10; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = 96;
x_10 = x_8 == x_9;
if (x_10 == 0)
{
obj* x_11; obj* x_12; obj* x_14; obj* x_15; 
x_11 = lean::mk_nat_obj(1u);
x_12 = lean::nat_sub(x_0, x_11);
lean::dec(x_0);
x_14 = lean::string_push(x_1, x_8);
x_15 = lean::string_iterator_next(x_2);
x_0 = x_12;
x_1 = x_14;
x_2 = x_15;
goto _start;
}
else
{
obj* x_18; 
lean::dec(x_0);
x_18 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_18;
}
}
}
else
{
obj* x_20; 
lean::dec(x_0);
x_20 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_20;
}
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__view___spec__1___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_5; obj* x_6; 
x_2 = lean::string_iterator_remaining(x_0);
x_3 = l_string_join___closed__1;
lean::inc(x_3);
x_5 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__view___spec__2(x_2, x_3, x_0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__view___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while___at_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__view___spec__1___rarg), 2, 0);
return x_6;
}
}
obj* _init_l_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; uint8 x_4; obj* x_8; 
x_0 = l_lean_parser_term__parser__m_monad;
x_1 = l_lean_parser_term__parser__m_lean_parser_monad__parsec;
x_2 = l_lean_parser_term__parser__m_lean_parser_monad__basic__parser;
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while___at_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__view___spec__1), 3, 0);
x_4 = 0;
lean::inc(x_2);
lean::inc(x_1);
lean::inc(x_0);
x_8 = l_lean_parser_raw_view___rarg(x_0, x_1, x_2, lean::box(0), x_3, x_4);
return x_8;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_command_notation__spec_quoted__symbol_parser___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint32 x_9; uint8 x_10; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = 96;
x_10 = x_8 == x_9;
if (x_10 == 0)
{
obj* x_11; obj* x_12; obj* x_14; obj* x_15; 
x_11 = lean::mk_nat_obj(1u);
x_12 = lean::nat_sub(x_0, x_11);
lean::dec(x_0);
x_14 = lean::string_push(x_1, x_8);
x_15 = lean::string_iterator_next(x_2);
x_0 = x_12;
x_1 = x_14;
x_2 = x_15;
goto _start;
}
else
{
obj* x_18; 
lean::dec(x_0);
x_18 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_18;
}
}
}
else
{
obj* x_20; 
lean::dec(x_0);
x_20 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_20;
}
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_command_notation__spec_quoted__symbol_parser___spec__1___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_5; obj* x_6; 
x_2 = lean::string_iterator_remaining(x_0);
x_3 = l_string_join___closed__1;
lean::inc(x_3);
x_5 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_command_notation__spec_quoted__symbol_parser___spec__2(x_2, x_3, x_0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_command_notation__spec_quoted__symbol_parser___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while___at_lean_parser_command_notation__spec_quoted__symbol_parser___spec__1___rarg), 2, 0);
return x_6;
}
}
obj* l_lean_parser_command_notation__spec_quoted__symbol_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_9; obj* x_10; obj* x_12; obj* x_14; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
lean::inc(x_3);
x_9 = l_lean_parser_monad__parsec_take__while___at_lean_parser_command_notation__spec_quoted__symbol_parser___spec__1___rarg(x_3, x_4);
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 lean::cnstr_release(x_9, 1);
 x_14 = x_9;
} else {
 lean::dec(x_9);
 x_14 = lean::box(0);
}
if (lean::obj_tag(x_10) == 0)
{
obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_22; obj* x_24; obj* x_25; obj* x_26; obj* x_28; obj* x_29; 
x_15 = lean::cnstr_get(x_10, 1);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_10, 2);
lean::inc(x_17);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 lean::cnstr_release(x_10, 1);
 lean::cnstr_release(x_10, 2);
 x_19 = x_10;
} else {
 lean::dec(x_10);
 x_19 = lean::box(0);
}
lean::inc(x_15);
x_21 = l_lean_parser_mk__raw__res(x_3, x_15);
x_22 = l_lean_parser_finish__comment__block___closed__2;
lean::inc(x_22);
if (lean::is_scalar(x_19)) {
 x_24 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_24 = x_19;
}
lean::cnstr_set(x_24, 0, x_21);
lean::cnstr_set(x_24, 1, x_15);
lean::cnstr_set(x_24, 2, x_22);
x_25 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_24);
x_26 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_26);
x_28 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_26, x_25);
if (lean::is_scalar(x_14)) {
 x_29 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_29 = x_14;
}
lean::cnstr_set(x_29, 0, x_28);
lean::cnstr_set(x_29, 1, x_12);
return x_29;
}
else
{
obj* x_31; uint8 x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_39; obj* x_40; 
lean::dec(x_3);
x_31 = lean::cnstr_get(x_10, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get_scalar<uint8>(x_10, sizeof(void*)*1);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 x_34 = x_10;
} else {
 lean::dec(x_10);
 x_34 = lean::box(0);
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_31);
lean::cnstr_set_scalar(x_35, sizeof(void*)*1, x_33);
x_36 = x_35;
x_37 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_37);
x_39 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_37, x_36);
if (lean::is_scalar(x_14)) {
 x_40 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_40 = x_14;
}
lean::cnstr_set(x_40, 0, x_39);
lean::cnstr_set(x_40, 1, x_12);
return x_40;
}
}
}
obj* _init_l_lean_parser_command_notation__spec_symbol__quote() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("symbol_quote");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* _init_l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; 
x_0 = l_lean_parser_command_notation__spec_precedence_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_1, x_3);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(0);
x_4 = lean::box(3);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; 
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_7; obj* x_10; 
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
lean::dec(x_1);
x_10 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_10, 0, x_7);
x_5 = x_10;
goto lbl_6;
}
case 3:
{
obj* x_11; 
x_11 = lean::box(0);
x_5 = x_11;
goto lbl_6;
}
default:
{
obj* x_13; 
lean::dec(x_1);
x_13 = lean::box(0);
x_5 = x_13;
goto lbl_6;
}
}
lbl_6:
{
obj* x_14; obj* x_15; 
if (lean::obj_tag(x_0) == 0)
{
obj* x_17; 
x_17 = lean::box(3);
x_14 = x_0;
x_15 = x_17;
goto lbl_16;
}
else
{
obj* x_18; obj* x_20; 
x_18 = lean::cnstr_get(x_0, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_0, 1);
lean::inc(x_20);
lean::dec(x_0);
x_14 = x_20;
x_15 = x_18;
goto lbl_16;
}
lbl_16:
{
obj* x_23; 
switch (lean::obj_tag(x_15)) {
case 0:
{
obj* x_25; obj* x_28; 
x_25 = lean::cnstr_get(x_15, 0);
lean::inc(x_25);
lean::dec(x_15);
x_28 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_28, 0, x_25);
x_23 = x_28;
goto lbl_24;
}
case 3:
{
obj* x_29; 
x_29 = lean::box(0);
x_23 = x_29;
goto lbl_24;
}
default:
{
obj* x_31; 
lean::dec(x_15);
x_31 = lean::box(0);
x_23 = x_31;
goto lbl_24;
}
}
lbl_24:
{
obj* x_32; obj* x_34; obj* x_35; 
if (lean::obj_tag(x_14) == 0)
{
obj* x_37; 
x_37 = lean::box(0);
if (lean::obj_tag(x_14) == 0)
{
x_32 = x_37;
goto lbl_33;
}
else
{
obj* x_38; 
x_38 = lean::cnstr_get(x_14, 0);
lean::inc(x_38);
lean::dec(x_14);
x_34 = x_37;
x_35 = x_38;
goto lbl_36;
}
}
else
{
obj* x_41; obj* x_43; 
x_41 = lean::cnstr_get(x_14, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_14, 1);
lean::inc(x_43);
lean::dec(x_14);
switch (lean::obj_tag(x_41)) {
case 0:
{
obj* x_46; obj* x_49; 
x_46 = lean::cnstr_get(x_41, 0);
lean::inc(x_46);
lean::dec(x_41);
x_49 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_49, 0, x_46);
if (lean::obj_tag(x_43) == 0)
{
x_32 = x_49;
goto lbl_33;
}
else
{
obj* x_50; 
x_50 = lean::cnstr_get(x_43, 0);
lean::inc(x_50);
lean::dec(x_43);
x_34 = x_49;
x_35 = x_50;
goto lbl_36;
}
}
case 3:
{
obj* x_53; 
x_53 = lean::box(0);
if (lean::obj_tag(x_43) == 0)
{
x_32 = x_53;
goto lbl_33;
}
else
{
obj* x_54; 
x_54 = lean::cnstr_get(x_43, 0);
lean::inc(x_54);
lean::dec(x_43);
x_34 = x_53;
x_35 = x_54;
goto lbl_36;
}
}
default:
{
obj* x_58; 
lean::dec(x_41);
x_58 = lean::box(0);
if (lean::obj_tag(x_43) == 0)
{
x_32 = x_58;
goto lbl_33;
}
else
{
obj* x_59; 
x_59 = lean::cnstr_get(x_43, 0);
lean::inc(x_59);
lean::dec(x_43);
x_34 = x_58;
x_35 = x_59;
goto lbl_36;
}
}
}
}
lbl_33:
{
obj* x_62; obj* x_63; 
x_62 = lean::box(3);
x_63 = l_lean_parser_syntax_as__node___main(x_62);
if (lean::obj_tag(x_63) == 0)
{
obj* x_64; obj* x_66; 
x_64 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_64);
x_66 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_66, 0, x_5);
lean::cnstr_set(x_66, 1, x_23);
lean::cnstr_set(x_66, 2, x_32);
lean::cnstr_set(x_66, 3, x_64);
return x_66;
}
else
{
obj* x_67; obj* x_69; obj* x_70; 
x_67 = lean::cnstr_get(x_63, 0);
lean::inc(x_67);
if (lean::is_exclusive(x_63)) {
 lean::cnstr_release(x_63, 0);
 x_69 = x_63;
} else {
 lean::dec(x_63);
 x_69 = lean::box(0);
}
x_70 = lean::cnstr_get(x_67, 1);
lean::inc(x_70);
lean::dec(x_67);
if (lean::obj_tag(x_70) == 0)
{
obj* x_74; obj* x_75; 
lean::dec(x_69);
x_74 = lean::box(0);
x_75 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_75, 0, x_5);
lean::cnstr_set(x_75, 1, x_23);
lean::cnstr_set(x_75, 2, x_32);
lean::cnstr_set(x_75, 3, x_74);
return x_75;
}
else
{
obj* x_76; obj* x_78; 
x_76 = lean::cnstr_get(x_70, 0);
lean::inc(x_76);
x_78 = lean::cnstr_get(x_70, 1);
lean::inc(x_78);
lean::dec(x_70);
if (lean::obj_tag(x_78) == 0)
{
obj* x_81; obj* x_82; obj* x_84; obj* x_85; obj* x_86; 
x_81 = l_lean_parser_command_notation__spec_precedence_has__view;
x_82 = lean::cnstr_get(x_81, 0);
lean::inc(x_82);
x_84 = lean::apply_1(x_82, x_76);
if (lean::is_scalar(x_69)) {
 x_85 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_85 = x_69;
}
lean::cnstr_set(x_85, 0, x_84);
x_86 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_86, 0, x_5);
lean::cnstr_set(x_86, 1, x_23);
lean::cnstr_set(x_86, 2, x_32);
lean::cnstr_set(x_86, 3, x_85);
return x_86;
}
else
{
obj* x_90; obj* x_92; 
lean::dec(x_78);
lean::dec(x_76);
lean::dec(x_69);
x_90 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_90);
x_92 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_92, 0, x_5);
lean::cnstr_set(x_92, 1, x_23);
lean::cnstr_set(x_92, 2, x_32);
lean::cnstr_set(x_92, 3, x_90);
return x_92;
}
}
}
}
lbl_36:
{
obj* x_93; 
x_93 = l_lean_parser_syntax_as__node___main(x_35);
if (lean::obj_tag(x_93) == 0)
{
obj* x_94; obj* x_96; 
x_94 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_94);
x_96 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_96, 0, x_5);
lean::cnstr_set(x_96, 1, x_23);
lean::cnstr_set(x_96, 2, x_34);
lean::cnstr_set(x_96, 3, x_94);
return x_96;
}
else
{
obj* x_97; obj* x_99; obj* x_100; 
x_97 = lean::cnstr_get(x_93, 0);
lean::inc(x_97);
if (lean::is_exclusive(x_93)) {
 lean::cnstr_release(x_93, 0);
 x_99 = x_93;
} else {
 lean::dec(x_93);
 x_99 = lean::box(0);
}
x_100 = lean::cnstr_get(x_97, 1);
lean::inc(x_100);
lean::dec(x_97);
if (lean::obj_tag(x_100) == 0)
{
obj* x_104; obj* x_105; 
lean::dec(x_99);
x_104 = lean::box(0);
x_105 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_105, 0, x_5);
lean::cnstr_set(x_105, 1, x_23);
lean::cnstr_set(x_105, 2, x_34);
lean::cnstr_set(x_105, 3, x_104);
return x_105;
}
else
{
obj* x_106; obj* x_108; 
x_106 = lean::cnstr_get(x_100, 0);
lean::inc(x_106);
x_108 = lean::cnstr_get(x_100, 1);
lean::inc(x_108);
lean::dec(x_100);
if (lean::obj_tag(x_108) == 0)
{
obj* x_111; obj* x_112; obj* x_114; obj* x_115; obj* x_116; 
x_111 = l_lean_parser_command_notation__spec_precedence_has__view;
x_112 = lean::cnstr_get(x_111, 0);
lean::inc(x_112);
x_114 = lean::apply_1(x_112, x_106);
if (lean::is_scalar(x_99)) {
 x_115 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_115 = x_99;
}
lean::cnstr_set(x_115, 0, x_114);
x_116 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_116, 0, x_5);
lean::cnstr_set(x_116, 1, x_23);
lean::cnstr_set(x_116, 2, x_34);
lean::cnstr_set(x_116, 3, x_115);
return x_116;
}
else
{
obj* x_120; obj* x_122; 
lean::dec(x_108);
lean::dec(x_106);
lean::dec(x_99);
x_120 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_120);
x_122 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_122, 0, x_5);
lean::cnstr_set(x_122, 1, x_23);
lean::cnstr_set(x_122, 2, x_34);
lean::cnstr_set(x_122, 3, x_120);
return x_122;
}
}
}
}
}
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__2;
lean::inc(x_5);
return x_5;
}
else
{
obj* x_7; obj* x_10; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::dec(x_7);
if (lean::obj_tag(x_10) == 0)
{
obj* x_13; 
x_13 = lean::box(3);
x_1 = x_10;
x_2 = x_13;
goto lbl_3;
}
else
{
obj* x_14; obj* x_16; 
x_14 = lean::cnstr_get(x_10, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_10, 1);
lean::inc(x_16);
lean::dec(x_10);
x_1 = x_16;
x_2 = x_14;
goto lbl_3;
}
}
lbl_3:
{
obj* x_19; 
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_21; obj* x_24; 
x_21 = lean::cnstr_get(x_2, 0);
lean::inc(x_21);
lean::dec(x_2);
x_24 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_24, 0, x_21);
x_19 = x_24;
goto lbl_20;
}
case 3:
{
obj* x_25; 
x_25 = lean::box(0);
x_19 = x_25;
goto lbl_20;
}
default:
{
obj* x_27; 
lean::dec(x_2);
x_27 = lean::box(0);
x_19 = x_27;
goto lbl_20;
}
}
lbl_20:
{
obj* x_28; obj* x_29; 
if (lean::obj_tag(x_1) == 0)
{
obj* x_31; 
x_31 = lean::box(3);
x_28 = x_1;
x_29 = x_31;
goto lbl_30;
}
else
{
obj* x_32; obj* x_34; 
x_32 = lean::cnstr_get(x_1, 0);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_1, 1);
lean::inc(x_34);
lean::dec(x_1);
x_28 = x_34;
x_29 = x_32;
goto lbl_30;
}
lbl_30:
{
obj* x_37; 
switch (lean::obj_tag(x_29)) {
case 0:
{
obj* x_39; obj* x_42; 
x_39 = lean::cnstr_get(x_29, 0);
lean::inc(x_39);
lean::dec(x_29);
x_42 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_42, 0, x_39);
x_37 = x_42;
goto lbl_38;
}
case 3:
{
obj* x_43; 
x_43 = lean::box(0);
x_37 = x_43;
goto lbl_38;
}
default:
{
obj* x_45; 
lean::dec(x_29);
x_45 = lean::box(0);
x_37 = x_45;
goto lbl_38;
}
}
lbl_38:
{
obj* x_46; obj* x_48; obj* x_49; 
if (lean::obj_tag(x_28) == 0)
{
obj* x_51; 
x_51 = lean::box(0);
if (lean::obj_tag(x_28) == 0)
{
x_46 = x_51;
goto lbl_47;
}
else
{
obj* x_52; 
x_52 = lean::cnstr_get(x_28, 0);
lean::inc(x_52);
lean::dec(x_28);
x_48 = x_51;
x_49 = x_52;
goto lbl_50;
}
}
else
{
obj* x_55; obj* x_57; 
x_55 = lean::cnstr_get(x_28, 0);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_28, 1);
lean::inc(x_57);
lean::dec(x_28);
switch (lean::obj_tag(x_55)) {
case 0:
{
obj* x_60; obj* x_63; 
x_60 = lean::cnstr_get(x_55, 0);
lean::inc(x_60);
lean::dec(x_55);
x_63 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_63, 0, x_60);
if (lean::obj_tag(x_57) == 0)
{
x_46 = x_63;
goto lbl_47;
}
else
{
obj* x_64; 
x_64 = lean::cnstr_get(x_57, 0);
lean::inc(x_64);
lean::dec(x_57);
x_48 = x_63;
x_49 = x_64;
goto lbl_50;
}
}
case 3:
{
obj* x_67; 
x_67 = lean::box(0);
if (lean::obj_tag(x_57) == 0)
{
x_46 = x_67;
goto lbl_47;
}
else
{
obj* x_68; 
x_68 = lean::cnstr_get(x_57, 0);
lean::inc(x_68);
lean::dec(x_57);
x_48 = x_67;
x_49 = x_68;
goto lbl_50;
}
}
default:
{
obj* x_72; 
lean::dec(x_55);
x_72 = lean::box(0);
if (lean::obj_tag(x_57) == 0)
{
x_46 = x_72;
goto lbl_47;
}
else
{
obj* x_73; 
x_73 = lean::cnstr_get(x_57, 0);
lean::inc(x_73);
lean::dec(x_57);
x_48 = x_72;
x_49 = x_73;
goto lbl_50;
}
}
}
}
lbl_47:
{
obj* x_76; obj* x_77; 
x_76 = lean::box(3);
x_77 = l_lean_parser_syntax_as__node___main(x_76);
if (lean::obj_tag(x_77) == 0)
{
obj* x_78; obj* x_80; 
x_78 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_78);
x_80 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_80, 0, x_19);
lean::cnstr_set(x_80, 1, x_37);
lean::cnstr_set(x_80, 2, x_46);
lean::cnstr_set(x_80, 3, x_78);
return x_80;
}
else
{
obj* x_81; obj* x_83; obj* x_84; 
x_81 = lean::cnstr_get(x_77, 0);
lean::inc(x_81);
if (lean::is_exclusive(x_77)) {
 lean::cnstr_release(x_77, 0);
 x_83 = x_77;
} else {
 lean::dec(x_77);
 x_83 = lean::box(0);
}
x_84 = lean::cnstr_get(x_81, 1);
lean::inc(x_84);
lean::dec(x_81);
if (lean::obj_tag(x_84) == 0)
{
obj* x_88; obj* x_89; 
lean::dec(x_83);
x_88 = lean::box(0);
x_89 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_89, 0, x_19);
lean::cnstr_set(x_89, 1, x_37);
lean::cnstr_set(x_89, 2, x_46);
lean::cnstr_set(x_89, 3, x_88);
return x_89;
}
else
{
obj* x_90; obj* x_92; 
x_90 = lean::cnstr_get(x_84, 0);
lean::inc(x_90);
x_92 = lean::cnstr_get(x_84, 1);
lean::inc(x_92);
lean::dec(x_84);
if (lean::obj_tag(x_92) == 0)
{
obj* x_95; obj* x_96; obj* x_98; obj* x_99; obj* x_100; 
x_95 = l_lean_parser_command_notation__spec_precedence_has__view;
x_96 = lean::cnstr_get(x_95, 0);
lean::inc(x_96);
x_98 = lean::apply_1(x_96, x_90);
if (lean::is_scalar(x_83)) {
 x_99 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_99 = x_83;
}
lean::cnstr_set(x_99, 0, x_98);
x_100 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_100, 0, x_19);
lean::cnstr_set(x_100, 1, x_37);
lean::cnstr_set(x_100, 2, x_46);
lean::cnstr_set(x_100, 3, x_99);
return x_100;
}
else
{
obj* x_104; obj* x_106; 
lean::dec(x_83);
lean::dec(x_92);
lean::dec(x_90);
x_104 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_104);
x_106 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_106, 0, x_19);
lean::cnstr_set(x_106, 1, x_37);
lean::cnstr_set(x_106, 2, x_46);
lean::cnstr_set(x_106, 3, x_104);
return x_106;
}
}
}
}
lbl_50:
{
obj* x_107; 
x_107 = l_lean_parser_syntax_as__node___main(x_49);
if (lean::obj_tag(x_107) == 0)
{
obj* x_108; obj* x_110; 
x_108 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_108);
x_110 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_110, 0, x_19);
lean::cnstr_set(x_110, 1, x_37);
lean::cnstr_set(x_110, 2, x_48);
lean::cnstr_set(x_110, 3, x_108);
return x_110;
}
else
{
obj* x_111; obj* x_113; obj* x_114; 
x_111 = lean::cnstr_get(x_107, 0);
lean::inc(x_111);
if (lean::is_exclusive(x_107)) {
 lean::cnstr_release(x_107, 0);
 x_113 = x_107;
} else {
 lean::dec(x_107);
 x_113 = lean::box(0);
}
x_114 = lean::cnstr_get(x_111, 1);
lean::inc(x_114);
lean::dec(x_111);
if (lean::obj_tag(x_114) == 0)
{
obj* x_118; obj* x_119; 
lean::dec(x_113);
x_118 = lean::box(0);
x_119 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_119, 0, x_19);
lean::cnstr_set(x_119, 1, x_37);
lean::cnstr_set(x_119, 2, x_48);
lean::cnstr_set(x_119, 3, x_118);
return x_119;
}
else
{
obj* x_120; obj* x_122; 
x_120 = lean::cnstr_get(x_114, 0);
lean::inc(x_120);
x_122 = lean::cnstr_get(x_114, 1);
lean::inc(x_122);
lean::dec(x_114);
if (lean::obj_tag(x_122) == 0)
{
obj* x_125; obj* x_126; obj* x_128; obj* x_129; obj* x_130; 
x_125 = l_lean_parser_command_notation__spec_precedence_has__view;
x_126 = lean::cnstr_get(x_125, 0);
lean::inc(x_126);
x_128 = lean::apply_1(x_126, x_120);
if (lean::is_scalar(x_113)) {
 x_129 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_129 = x_113;
}
lean::cnstr_set(x_129, 0, x_128);
x_130 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_130, 0, x_19);
lean::cnstr_set(x_130, 1, x_37);
lean::cnstr_set(x_130, 2, x_48);
lean::cnstr_set(x_130, 3, x_129);
return x_130;
}
else
{
obj* x_134; obj* x_136; 
lean::dec(x_113);
lean::dec(x_122);
lean::dec(x_120);
x_134 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_134);
x_136 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_136, 0, x_19);
lean::cnstr_set(x_136, 1, x_37);
lean::cnstr_set(x_136, 2, x_48);
lean::cnstr_set(x_136, 3, x_134);
return x_136;
}
}
}
}
}
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_7; obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_16; obj* x_17; obj* x_19; obj* x_20; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 3);
lean::inc(x_7);
lean::dec(x_0);
x_10 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
lean::inc(x_10);
x_12 = l_option_map___rarg(x_10, x_1);
x_13 = lean::box(3);
x_14 = l_option_get__or__else___main___rarg(x_12, x_13);
lean::inc(x_10);
x_16 = l_option_map___rarg(x_10, x_3);
x_17 = l_option_get__or__else___main___rarg(x_16, x_13);
lean::inc(x_10);
x_19 = l_option_map___rarg(x_10, x_5);
x_20 = l_option_get__or__else___main___rarg(x_19, x_13);
if (lean::obj_tag(x_7) == 0)
{
obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_28; 
x_21 = l_lean_parser_detail__ident_has__view_x_27___lambda__2___closed__1;
lean::inc(x_21);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_20);
lean::cnstr_set(x_23, 1, x_21);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_17);
lean::cnstr_set(x_24, 1, x_23);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_14);
lean::cnstr_set(x_25, 1, x_24);
x_26 = l_lean_parser_command_notation__spec_symbol__quote;
lean::inc(x_26);
x_28 = l_lean_parser_syntax_mk__node(x_26, x_25);
return x_28;
}
else
{
obj* x_29; obj* x_32; obj* x_33; obj* x_34; obj* x_36; obj* x_37; obj* x_38; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_47; 
x_29 = lean::cnstr_get(x_7, 0);
lean::inc(x_29);
lean::dec(x_7);
x_32 = lean::box(0);
x_33 = l_lean_parser_command_notation__spec_precedence_has__view;
x_34 = lean::cnstr_get(x_33, 1);
lean::inc(x_34);
x_36 = lean::apply_1(x_34, x_29);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_32);
x_38 = l_lean_parser_no__kind;
lean::inc(x_38);
x_40 = l_lean_parser_syntax_mk__node(x_38, x_37);
x_41 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_41, 0, x_40);
lean::cnstr_set(x_41, 1, x_32);
x_42 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_42, 0, x_20);
lean::cnstr_set(x_42, 1, x_41);
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_17);
lean::cnstr_set(x_43, 1, x_42);
x_44 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_44, 0, x_14);
lean::cnstr_set(x_44, 1, x_43);
x_45 = l_lean_parser_command_notation__spec_symbol__quote;
lean::inc(x_45);
x_47 = l_lean_parser_syntax_mk__node(x_45, x_44);
return x_47;
}
}
}
obj* _init_l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_notation__spec_symbol__quote_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* l_reader__t_lift___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; 
lean::dec(x_1);
x_5 = lean::apply_2(x_0, x_2, x_3);
return x_5;
}
}
obj* l_reader__t_lift___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__1___rarg), 4, 0);
return x_2;
}
}
obj* l_reader__t_lift___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; 
lean::dec(x_1);
x_6 = lean::apply_3(x_0, x_2, x_3, x_4);
return x_6;
}
}
obj* l_reader__t_lift___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__2(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__2___rarg), 5, 0);
return x_2;
}
}
obj* l_reader__t_lift___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__3___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_7; 
lean::dec(x_1);
x_7 = lean::apply_4(x_0, x_2, x_3, x_4, x_5);
return x_7;
}
}
obj* l_reader__t_lift___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__3(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__3___rarg), 6, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_str__core___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
uint8 x_11; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::inc(x_0);
x_11 = l_string_is__empty(x_0);
if (x_11 == 0)
{
obj* x_12; obj* x_14; obj* x_16; 
x_12 = lean::string_length(x_0);
lean::inc(x_0);
x_14 = lean::string_mk_iterator(x_0);
lean::inc(x_5);
x_16 = l___private_init_lean_parser_parsec_1__str__aux___main(x_12, x_14, x_5);
if (lean::obj_tag(x_16) == 0)
{
obj* x_18; obj* x_19; obj* x_21; uint8 x_22; obj* x_23; obj* x_24; obj* x_25; 
lean::dec(x_0);
x_18 = lean::box(0);
x_19 = l_string_join___closed__1;
lean::inc(x_19);
x_21 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_21, 0, x_5);
lean::cnstr_set(x_21, 1, x_19);
lean::cnstr_set(x_21, 2, x_1);
lean::cnstr_set(x_21, 3, x_18);
x_22 = 0;
x_23 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set_scalar(x_23, sizeof(void*)*1, x_22);
x_24 = x_23;
x_25 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_6);
return x_25;
}
else
{
obj* x_28; obj* x_31; obj* x_32; obj* x_33; 
lean::dec(x_5);
lean::dec(x_1);
x_28 = lean::cnstr_get(x_16, 0);
lean::inc(x_28);
lean::dec(x_16);
x_31 = lean::box(0);
x_32 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_32, 0, x_0);
lean::cnstr_set(x_32, 1, x_28);
lean::cnstr_set(x_32, 2, x_31);
x_33 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_33, 0, x_32);
lean::cnstr_set(x_33, 1, x_6);
return x_33;
}
}
else
{
obj* x_36; obj* x_37; obj* x_40; obj* x_41; 
lean::dec(x_1);
lean::dec(x_0);
x_36 = l_string_join___closed__1;
x_37 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_37);
lean::inc(x_36);
x_40 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_40, 0, x_36);
lean::cnstr_set(x_40, 1, x_5);
lean::cnstr_set(x_40, 2, x_37);
x_41 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_41, 0, x_40);
lean::cnstr_set(x_41, 1, x_6);
return x_41;
}
}
}
obj* l_reader__t_bind___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__5___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_10; obj* x_11; obj* x_13; obj* x_15; 
lean::inc(x_4);
lean::inc(x_3);
lean::inc(x_2);
x_10 = lean::apply_5(x_0, x_2, x_3, x_4, x_5, x_6);
x_11 = lean::cnstr_get(x_10, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_10, 1);
lean::inc(x_13);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 lean::cnstr_release(x_10, 1);
 x_15 = x_10;
} else {
 lean::dec(x_10);
 x_15 = lean::box(0);
}
if (lean::obj_tag(x_11) == 0)
{
obj* x_16; obj* x_18; obj* x_20; obj* x_23; obj* x_24; obj* x_26; obj* x_29; obj* x_30; 
x_16 = lean::cnstr_get(x_11, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_11, 1);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_11, 2);
lean::inc(x_20);
lean::dec(x_11);
x_23 = lean::apply_6(x_1, x_16, x_2, x_3, x_4, x_18, x_13);
x_24 = lean::cnstr_get(x_23, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_23, 1);
lean::inc(x_26);
lean::dec(x_23);
x_29 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_20, x_24);
if (lean::is_scalar(x_15)) {
 x_30 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_30 = x_15;
}
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_26);
return x_30;
}
else
{
obj* x_35; uint8 x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_2);
x_35 = lean::cnstr_get(x_11, 0);
lean::inc(x_35);
x_37 = lean::cnstr_get_scalar<uint8>(x_11, sizeof(void*)*1);
if (lean::is_exclusive(x_11)) {
 lean::cnstr_release(x_11, 0);
 x_38 = x_11;
} else {
 lean::dec(x_11);
 x_38 = lean::box(0);
}
if (lean::is_scalar(x_38)) {
 x_39 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_39 = x_38;
}
lean::cnstr_set(x_39, 0, x_35);
lean::cnstr_set_scalar(x_39, sizeof(void*)*1, x_37);
x_40 = x_39;
if (lean::is_scalar(x_15)) {
 x_41 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_41 = x_15;
}
lean::cnstr_set(x_41, 0, x_40);
lean::cnstr_set(x_41, 1, x_13);
return x_41;
}
}
}
obj* l_reader__t_bind___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__5(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__5___rarg), 7, 0);
return x_4;
}
}
obj* l_lean_parser_with__trailing___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__6(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_9; obj* x_10; obj* x_12; obj* x_14; 
lean::dec(x_3);
lean::dec(x_1);
lean::inc(x_4);
x_9 = l_lean_parser_whitespace(x_2, x_4, x_5);
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 lean::cnstr_release(x_9, 1);
 x_14 = x_9;
} else {
 lean::dec(x_9);
 x_14 = lean::box(0);
}
if (lean::obj_tag(x_10) == 0)
{
obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_22; obj* x_24; obj* x_25; obj* x_26; obj* x_28; 
x_15 = lean::cnstr_get(x_10, 1);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_10, 2);
lean::inc(x_17);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 lean::cnstr_release(x_10, 1);
 lean::cnstr_release(x_10, 2);
 x_19 = x_10;
} else {
 lean::dec(x_10);
 x_19 = lean::box(0);
}
lean::inc(x_15);
x_21 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_21, 0, x_4);
lean::cnstr_set(x_21, 1, x_15);
x_22 = l_lean_parser_finish__comment__block___closed__2;
lean::inc(x_22);
if (lean::is_scalar(x_19)) {
 x_24 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_24 = x_19;
}
lean::cnstr_set(x_24, 0, x_21);
lean::cnstr_set(x_24, 1, x_15);
lean::cnstr_set(x_24, 2, x_22);
x_25 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_24);
x_26 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_26);
x_28 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_26, x_25);
if (lean::obj_tag(x_28) == 0)
{
obj* x_29; obj* x_31; obj* x_33; obj* x_35; obj* x_36; obj* x_38; obj* x_39; obj* x_40; 
x_29 = lean::cnstr_get(x_28, 0);
lean::inc(x_29);
x_31 = lean::cnstr_get(x_28, 1);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_28, 2);
lean::inc(x_33);
if (lean::is_exclusive(x_28)) {
 lean::cnstr_release(x_28, 0);
 lean::cnstr_release(x_28, 1);
 lean::cnstr_release(x_28, 2);
 x_35 = x_28;
} else {
 lean::dec(x_28);
 x_35 = lean::box(0);
}
x_36 = l___private_init_lean_parser_token_3__update__trailing___main(x_29, x_0);
lean::inc(x_26);
if (lean::is_scalar(x_35)) {
 x_38 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_38 = x_35;
}
lean::cnstr_set(x_38, 0, x_36);
lean::cnstr_set(x_38, 1, x_31);
lean::cnstr_set(x_38, 2, x_26);
x_39 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_33, x_38);
if (lean::is_scalar(x_14)) {
 x_40 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_40 = x_14;
}
lean::cnstr_set(x_40, 0, x_39);
lean::cnstr_set(x_40, 1, x_12);
return x_40;
}
else
{
obj* x_42; uint8 x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; 
lean::dec(x_0);
x_42 = lean::cnstr_get(x_28, 0);
lean::inc(x_42);
x_44 = lean::cnstr_get_scalar<uint8>(x_28, sizeof(void*)*1);
if (lean::is_exclusive(x_28)) {
 lean::cnstr_release(x_28, 0);
 x_45 = x_28;
} else {
 lean::dec(x_28);
 x_45 = lean::box(0);
}
if (lean::is_scalar(x_45)) {
 x_46 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_46 = x_45;
}
lean::cnstr_set(x_46, 0, x_42);
lean::cnstr_set_scalar(x_46, sizeof(void*)*1, x_44);
x_47 = x_46;
if (lean::is_scalar(x_14)) {
 x_48 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_48 = x_14;
}
lean::cnstr_set(x_48, 0, x_47);
lean::cnstr_set(x_48, 1, x_12);
return x_48;
}
}
else
{
obj* x_50; uint8 x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_58; 
lean::dec(x_4);
x_50 = lean::cnstr_get(x_10, 0);
lean::inc(x_50);
x_52 = lean::cnstr_get_scalar<uint8>(x_10, sizeof(void*)*1);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 x_53 = x_10;
} else {
 lean::dec(x_10);
 x_53 = lean::box(0);
}
if (lean::is_scalar(x_53)) {
 x_54 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_54 = x_53;
}
lean::cnstr_set(x_54, 0, x_50);
lean::cnstr_set_scalar(x_54, sizeof(void*)*1, x_52);
x_55 = x_54;
x_56 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_56);
x_58 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_56, x_55);
if (lean::obj_tag(x_58) == 0)
{
obj* x_59; obj* x_61; obj* x_63; obj* x_65; obj* x_66; obj* x_68; obj* x_69; obj* x_70; 
x_59 = lean::cnstr_get(x_58, 0);
lean::inc(x_59);
x_61 = lean::cnstr_get(x_58, 1);
lean::inc(x_61);
x_63 = lean::cnstr_get(x_58, 2);
lean::inc(x_63);
if (lean::is_exclusive(x_58)) {
 lean::cnstr_release(x_58, 0);
 lean::cnstr_release(x_58, 1);
 lean::cnstr_release(x_58, 2);
 x_65 = x_58;
} else {
 lean::dec(x_58);
 x_65 = lean::box(0);
}
x_66 = l___private_init_lean_parser_token_3__update__trailing___main(x_59, x_0);
lean::inc(x_56);
if (lean::is_scalar(x_65)) {
 x_68 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_68 = x_65;
}
lean::cnstr_set(x_68, 0, x_66);
lean::cnstr_set(x_68, 1, x_61);
lean::cnstr_set(x_68, 2, x_56);
x_69 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_63, x_68);
if (lean::is_scalar(x_14)) {
 x_70 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_70 = x_14;
}
lean::cnstr_set(x_70, 0, x_69);
lean::cnstr_set(x_70, 1, x_12);
return x_70;
}
else
{
obj* x_72; uint8 x_74; obj* x_75; obj* x_76; obj* x_77; obj* x_78; 
lean::dec(x_0);
x_72 = lean::cnstr_get(x_58, 0);
lean::inc(x_72);
x_74 = lean::cnstr_get_scalar<uint8>(x_58, sizeof(void*)*1);
if (lean::is_exclusive(x_58)) {
 lean::cnstr_release(x_58, 0);
 x_75 = x_58;
} else {
 lean::dec(x_58);
 x_75 = lean::box(0);
}
if (lean::is_scalar(x_75)) {
 x_76 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_76 = x_75;
}
lean::cnstr_set(x_76, 0, x_72);
lean::cnstr_set_scalar(x_76, sizeof(void*)*1, x_74);
x_77 = x_76;
if (lean::is_scalar(x_14)) {
 x_78 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_78 = x_14;
}
lean::cnstr_set(x_78, 0, x_77);
lean::cnstr_set(x_78, 1, x_12);
return x_78;
}
}
}
}
obj* l_lean_parser_combinators_optional___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__7(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_14; obj* x_15; obj* x_17; 
x_9 = lean::box(0);
lean::inc(x_4);
x_14 = lean::apply_5(x_0, x_1, x_2, x_3, x_4, x_5);
x_15 = lean::cnstr_get(x_14, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
lean::dec(x_14);
if (lean::obj_tag(x_15) == 0)
{
if (lean::obj_tag(x_15) == 0)
{
obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_27; obj* x_28; obj* x_30; obj* x_31; 
x_20 = lean::cnstr_get(x_15, 0);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_15, 1);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_15, 2);
lean::inc(x_24);
if (lean::is_exclusive(x_15)) {
 lean::cnstr_release(x_15, 0);
 lean::cnstr_release(x_15, 1);
 lean::cnstr_release(x_15, 2);
 x_26 = x_15;
} else {
 lean::dec(x_15);
 x_26 = lean::box(0);
}
x_27 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_27, 0, x_20);
x_28 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_28);
if (lean::is_scalar(x_26)) {
 x_30 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_30 = x_26;
}
lean::cnstr_set(x_30, 0, x_27);
lean::cnstr_set(x_30, 1, x_22);
lean::cnstr_set(x_30, 2, x_28);
x_31 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_24, x_30);
x_10 = x_31;
x_11 = x_17;
goto lbl_12;
}
else
{
obj* x_32; uint8 x_34; obj* x_35; obj* x_36; obj* x_37; 
x_32 = lean::cnstr_get(x_15, 0);
lean::inc(x_32);
x_34 = lean::cnstr_get_scalar<uint8>(x_15, sizeof(void*)*1);
if (lean::is_exclusive(x_15)) {
 lean::cnstr_release(x_15, 0);
 x_35 = x_15;
} else {
 lean::dec(x_15);
 x_35 = lean::box(0);
}
if (lean::is_scalar(x_35)) {
 x_36 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_36 = x_35;
}
lean::cnstr_set(x_36, 0, x_32);
lean::cnstr_set_scalar(x_36, sizeof(void*)*1, x_34);
x_37 = x_36;
x_10 = x_37;
x_11 = x_17;
goto lbl_12;
}
}
else
{
obj* x_38; uint8 x_40; obj* x_41; obj* x_42; obj* x_44; obj* x_46; obj* x_48; obj* x_51; obj* x_52; obj* x_53; obj* x_55; obj* x_56; obj* x_57; 
x_38 = lean::cnstr_get(x_15, 0);
lean::inc(x_38);
x_40 = lean::cnstr_get_scalar<uint8>(x_15, sizeof(void*)*1);
if (lean::is_exclusive(x_15)) {
 lean::cnstr_release(x_15, 0);
 x_41 = x_15;
} else {
 lean::dec(x_15);
 x_41 = lean::box(0);
}
x_42 = lean::cnstr_get(x_38, 0);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_38, 1);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_38, 2);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_38, 3);
lean::inc(x_48);
lean::dec(x_38);
x_51 = l_option_get___main___at_lean_parser_run___spec__2(x_48);
x_52 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_9);
x_53 = l_lean_parser_no__kind;
lean::inc(x_53);
x_55 = l_lean_parser_syntax_mk__node(x_53, x_52);
x_56 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_56, 0, x_55);
x_57 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_57, 0, x_42);
lean::cnstr_set(x_57, 1, x_44);
lean::cnstr_set(x_57, 2, x_46);
lean::cnstr_set(x_57, 3, x_56);
if (x_40 == 0)
{
uint8 x_58; obj* x_59; obj* x_60; 
x_58 = 0;
if (lean::is_scalar(x_41)) {
 x_59 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_59 = x_41;
}
lean::cnstr_set(x_59, 0, x_57);
lean::cnstr_set_scalar(x_59, sizeof(void*)*1, x_58);
x_60 = x_59;
x_10 = x_60;
x_11 = x_17;
goto lbl_12;
}
else
{
obj* x_61; obj* x_62; 
if (lean::is_scalar(x_41)) {
 x_61 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_61 = x_41;
}
lean::cnstr_set(x_61, 0, x_57);
lean::cnstr_set_scalar(x_61, sizeof(void*)*1, x_40);
x_62 = x_61;
x_10 = x_62;
x_11 = x_17;
goto lbl_12;
}
}
lbl_8:
{
if (lean::obj_tag(x_6) == 0)
{
obj* x_63; obj* x_65; obj* x_67; obj* x_69; 
x_63 = lean::cnstr_get(x_6, 0);
lean::inc(x_63);
x_65 = lean::cnstr_get(x_6, 1);
lean::inc(x_65);
x_67 = lean::cnstr_get(x_6, 2);
lean::inc(x_67);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 lean::cnstr_release(x_6, 2);
 x_69 = x_6;
} else {
 lean::dec(x_6);
 x_69 = lean::box(0);
}
if (lean::obj_tag(x_63) == 0)
{
obj* x_70; obj* x_71; obj* x_74; obj* x_75; obj* x_76; 
x_70 = l_lean_parser_combinators_many___rarg___closed__1;
x_71 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_71);
lean::inc(x_70);
if (lean::is_scalar(x_69)) {
 x_74 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_74 = x_69;
}
lean::cnstr_set(x_74, 0, x_70);
lean::cnstr_set(x_74, 1, x_65);
lean::cnstr_set(x_74, 2, x_71);
x_75 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_67, x_74);
x_76 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_76, 0, x_75);
lean::cnstr_set(x_76, 1, x_7);
return x_76;
}
else
{
obj* x_77; obj* x_80; obj* x_81; obj* x_82; obj* x_84; obj* x_85; obj* x_87; obj* x_88; obj* x_89; 
x_77 = lean::cnstr_get(x_63, 0);
lean::inc(x_77);
lean::dec(x_63);
x_80 = lean::box(0);
x_81 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_81, 0, x_77);
lean::cnstr_set(x_81, 1, x_80);
x_82 = l_lean_parser_no__kind;
lean::inc(x_82);
x_84 = l_lean_parser_syntax_mk__node(x_82, x_81);
x_85 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_85);
if (lean::is_scalar(x_69)) {
 x_87 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_87 = x_69;
}
lean::cnstr_set(x_87, 0, x_84);
lean::cnstr_set(x_87, 1, x_65);
lean::cnstr_set(x_87, 2, x_85);
x_88 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_67, x_87);
x_89 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_89, 0, x_88);
lean::cnstr_set(x_89, 1, x_7);
return x_89;
}
}
else
{
obj* x_90; uint8 x_92; obj* x_93; obj* x_94; obj* x_95; obj* x_96; 
x_90 = lean::cnstr_get(x_6, 0);
lean::inc(x_90);
x_92 = lean::cnstr_get_scalar<uint8>(x_6, sizeof(void*)*1);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 x_93 = x_6;
} else {
 lean::dec(x_6);
 x_93 = lean::box(0);
}
if (lean::is_scalar(x_93)) {
 x_94 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_94 = x_93;
}
lean::cnstr_set(x_94, 0, x_90);
lean::cnstr_set_scalar(x_94, sizeof(void*)*1, x_92);
x_95 = x_94;
x_96 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_96, 0, x_95);
lean::cnstr_set(x_96, 1, x_7);
return x_96;
}
}
lbl_12:
{
if (lean::obj_tag(x_10) == 0)
{
lean::dec(x_4);
x_6 = x_10;
x_7 = x_11;
goto lbl_8;
}
else
{
obj* x_98; uint8 x_100; 
x_98 = lean::cnstr_get(x_10, 0);
lean::inc(x_98);
x_100 = lean::cnstr_get_scalar<uint8>(x_10, sizeof(void*)*1);
if (x_100 == 0)
{
obj* x_102; obj* x_105; obj* x_107; obj* x_108; obj* x_109; 
lean::dec(x_10);
x_102 = lean::cnstr_get(x_98, 2);
lean::inc(x_102);
lean::dec(x_98);
x_105 = l_mjoin___rarg___closed__1;
lean::inc(x_105);
x_107 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_107, 0, x_102);
lean::closure_set(x_107, 1, x_105);
x_108 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_108, 0, x_107);
x_109 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_109, 0, x_9);
lean::cnstr_set(x_109, 1, x_4);
lean::cnstr_set(x_109, 2, x_108);
x_6 = x_109;
x_7 = x_11;
goto lbl_8;
}
else
{
lean::dec(x_4);
lean::dec(x_98);
x_6 = x_10;
x_7 = x_11;
goto lbl_8;
}
}
}
}
}
obj* _init_l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = l_lean_parser_command_notation__spec_precedence_parser_lean_parser_has__tokens;
lean::inc(x_1);
x_3 = l_lean_parser_tokens___rarg(x_1);
x_4 = l_lean_parser_list_cons_tokens___rarg(x_3, x_0);
x_5 = l_lean_parser_list_cons_tokens___rarg(x_0, x_4);
x_6 = l_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__tokens;
lean::inc(x_6);
x_8 = l_lean_parser_list_cons_tokens___rarg(x_6, x_5);
x_9 = l_lean_parser_list_cons_tokens___rarg(x_0, x_8);
x_10 = l_lean_parser_tokens___rarg(x_9);
return x_10;
}
}
obj* _init_l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__view___lambda__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("`");
return x_0;
}
}
obj* l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__view___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_14; 
x_7 = l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__view___lambda__1___closed__1;
lean::inc(x_7);
x_9 = l_lean_parser_monad__parsec_str__core___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__4(x_7, x_0, x_2, x_3, x_4, x_5, x_6);
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 lean::cnstr_release(x_9, 1);
 x_14 = x_9;
} else {
 lean::dec(x_9);
 x_14 = lean::box(0);
}
if (lean::obj_tag(x_10) == 0)
{
obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_22; obj* x_24; obj* x_25; obj* x_26; 
x_15 = lean::cnstr_get(x_10, 1);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_10, 2);
lean::inc(x_17);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 lean::cnstr_release(x_10, 1);
 lean::cnstr_release(x_10, 2);
 x_19 = x_10;
} else {
 lean::dec(x_10);
 x_19 = lean::box(0);
}
lean::inc(x_15);
x_21 = l_lean_parser_mk__raw__res(x_1, x_15);
x_22 = l_lean_parser_finish__comment__block___closed__2;
lean::inc(x_22);
if (lean::is_scalar(x_19)) {
 x_24 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_24 = x_19;
}
lean::cnstr_set(x_24, 0, x_21);
lean::cnstr_set(x_24, 1, x_15);
lean::cnstr_set(x_24, 2, x_22);
x_25 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_24);
if (lean::is_scalar(x_14)) {
 x_26 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_26 = x_14;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_12);
return x_26;
}
else
{
obj* x_28; uint8 x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
lean::dec(x_1);
x_28 = lean::cnstr_get(x_10, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get_scalar<uint8>(x_10, sizeof(void*)*1);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 x_31 = x_10;
} else {
 lean::dec(x_10);
 x_31 = lean::box(0);
}
if (lean::is_scalar(x_31)) {
 x_32 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_32 = x_31;
}
lean::cnstr_set(x_32, 0, x_28);
lean::cnstr_set_scalar(x_32, sizeof(void*)*1, x_30);
x_33 = x_32;
if (lean::is_scalar(x_14)) {
 x_34 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_34 = x_14;
}
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_12);
return x_34;
}
}
}
obj* l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__view___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; obj* x_12; obj* x_13; obj* x_15; obj* x_17; 
x_7 = l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__view___lambda__1___closed__1;
lean::inc(x_4);
lean::inc(x_3);
lean::inc(x_2);
lean::inc(x_7);
x_12 = l_lean_parser_monad__parsec_str__core___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__4(x_7, x_0, x_2, x_3, x_4, x_5, x_6);
x_13 = lean::cnstr_get(x_12, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_12, 1);
lean::inc(x_15);
if (lean::is_exclusive(x_12)) {
 lean::cnstr_release(x_12, 0);
 lean::cnstr_release(x_12, 1);
 x_17 = x_12;
} else {
 lean::dec(x_12);
 x_17 = lean::box(0);
}
if (lean::obj_tag(x_13) == 0)
{
obj* x_18; obj* x_20; obj* x_24; obj* x_25; obj* x_26; obj* x_28; obj* x_31; obj* x_33; obj* x_34; obj* x_35; 
x_18 = lean::cnstr_get(x_13, 1);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_13, 2);
lean::inc(x_20);
lean::dec(x_13);
lean::inc(x_18);
x_24 = l_lean_parser_mk__raw__res(x_1, x_18);
x_25 = l_lean_parser_with__trailing___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__6(x_24, x_2, x_3, x_4, x_18, x_15);
x_26 = lean::cnstr_get(x_25, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_25, 1);
lean::inc(x_28);
lean::dec(x_25);
x_31 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_31);
x_33 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_31, x_26);
x_34 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_20, x_33);
if (lean::is_scalar(x_17)) {
 x_35 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_35 = x_17;
}
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_28);
return x_35;
}
else
{
obj* x_40; uint8 x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_2);
x_40 = lean::cnstr_get(x_13, 0);
lean::inc(x_40);
x_42 = lean::cnstr_get_scalar<uint8>(x_13, sizeof(void*)*1);
if (lean::is_exclusive(x_13)) {
 lean::cnstr_release(x_13, 0);
 x_43 = x_13;
} else {
 lean::dec(x_13);
 x_43 = lean::box(0);
}
if (lean::is_scalar(x_43)) {
 x_44 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_44 = x_43;
}
lean::cnstr_set(x_44, 0, x_40);
lean::cnstr_set_scalar(x_44, sizeof(void*)*1, x_42);
x_45 = x_44;
if (lean::is_scalar(x_17)) {
 x_46 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_46 = x_17;
}
lean::cnstr_set(x_46, 0, x_45);
lean::cnstr_set(x_46, 1, x_15);
return x_46;
}
}
}
obj* _init_l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_8; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_33; 
x_0 = lean::mk_string("`");
x_1 = l_string_quote(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_2, 0, x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_with__trailing___rarg___lambda__1), 2, 0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__1___rarg), 4, 1);
lean::closure_set(x_4, 0, x_3);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__2___rarg), 5, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__3___rarg), 6, 1);
lean::closure_set(x_6, 0, x_5);
lean::inc(x_2);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__view___lambda__1), 7, 1);
lean::closure_set(x_8, 0, x_2);
lean::inc(x_6);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__5___rarg), 7, 2);
lean::closure_set(x_10, 0, x_6);
lean::closure_set(x_10, 1, x_8);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__view___lambda__2), 7, 1);
lean::closure_set(x_11, 0, x_2);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__5___rarg), 7, 2);
lean::closure_set(x_12, 0, x_6);
lean::closure_set(x_12, 1, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_precedence_parser), 5, 0);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__7), 6, 1);
lean::closure_set(x_14, 0, x_13);
x_15 = lean::box(0);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_14);
lean::cnstr_set(x_16, 1, x_15);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_12);
lean::cnstr_set(x_17, 1, x_16);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_quoted__symbol_parser), 5, 0);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_17);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_10);
lean::cnstr_set(x_20, 1, x_19);
x_21 = l_lean_parser_term__parser__m_monad;
x_22 = l_lean_parser_term__parser__m_monad__except;
x_23 = l_lean_parser_term__parser__m_lean_parser_monad__parsec;
x_24 = l_lean_parser_term__parser__m_alternative;
x_25 = l_lean_parser_command_notation__spec_symbol__quote;
x_26 = l_lean_parser_command_notation__spec_symbol__quote_has__view;
lean::inc(x_26);
lean::inc(x_25);
lean::inc(x_24);
lean::inc(x_23);
lean::inc(x_22);
lean::inc(x_21);
x_33 = l_lean_parser_combinators_node_view___rarg(x_21, x_22, x_23, x_24, x_25, x_20, x_26);
return x_33;
}
}
obj* _init_l_lean_parser_command_notation__spec_symbol__quote_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_8; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_0 = lean::mk_string("`");
x_1 = l_string_quote(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_2, 0, x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_with__trailing___rarg___lambda__1), 2, 0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__1___rarg), 4, 1);
lean::closure_set(x_4, 0, x_3);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__2___rarg), 5, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__3___rarg), 6, 1);
lean::closure_set(x_6, 0, x_5);
lean::inc(x_2);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__view___lambda__1), 7, 1);
lean::closure_set(x_8, 0, x_2);
lean::inc(x_6);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__5___rarg), 7, 2);
lean::closure_set(x_10, 0, x_6);
lean::closure_set(x_10, 1, x_8);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__view___lambda__2), 7, 1);
lean::closure_set(x_11, 0, x_2);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__5___rarg), 7, 2);
lean::closure_set(x_12, 0, x_6);
lean::closure_set(x_12, 1, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_precedence_parser), 5, 0);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__7), 6, 1);
lean::closure_set(x_14, 0, x_13);
x_15 = lean::box(0);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_14);
lean::cnstr_set(x_16, 1, x_15);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_12);
lean::cnstr_set(x_17, 1, x_16);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_quoted__symbol_parser), 5, 0);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_17);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_10);
lean::cnstr_set(x_20, 1, x_19);
return x_20;
}
}
obj* l_lean_parser_command_notation__spec_symbol__quote_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_9; 
x_5 = l_lean_parser_command_notation__spec_symbol__quote;
x_6 = l_lean_parser_command_notation__spec_symbol__quote_parser___closed__1;
lean::inc(x_6);
lean::inc(x_5);
x_9 = l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(x_5, x_6, x_0, x_1, x_2, x_3, x_4);
return x_9;
}
}
obj* _init_l_lean_parser_command_notation__spec_unquoted__symbol_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("symbol");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_parser_command_notation__spec_unquoted__symbol_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_7; obj* x_8; obj* x_10; obj* x_12; 
lean::inc(x_3);
lean::inc(x_1);
x_7 = l_lean_parser_token(x_1, x_3, x_4);
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 x_12 = x_7;
} else {
 lean::dec(x_7);
 x_12 = lean::box(0);
}
if (lean::obj_tag(x_8) == 0)
{
obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_20; 
x_13 = lean::cnstr_get(x_8, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_8, 1);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_8, 2);
lean::inc(x_17);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 lean::cnstr_release(x_8, 2);
 x_19 = x_8;
} else {
 lean::dec(x_8);
 x_19 = lean::box(0);
}
switch (lean::obj_tag(x_13)) {
case 0:
{
obj* x_27; obj* x_29; obj* x_30; obj* x_32; obj* x_33; obj* x_35; obj* x_36; obj* x_37; 
lean::dec(x_12);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
x_27 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_27);
if (lean::is_scalar(x_19)) {
 x_29 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_29 = x_19;
}
lean::cnstr_set(x_29, 0, x_13);
lean::cnstr_set(x_29, 1, x_15);
lean::cnstr_set(x_29, 2, x_27);
x_30 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_29);
lean::inc(x_27);
x_32 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_27, x_30);
x_33 = l_lean_parser_command_notation__spec_unquoted__symbol_parser___closed__1;
lean::inc(x_33);
x_35 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_32, x_33);
x_36 = l_lean_parser_parsec__t_try__mk__res___rarg(x_35);
x_37 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_10);
return x_37;
}
case 3:
{
obj* x_39; 
lean::dec(x_19);
x_39 = lean::box(0);
x_20 = x_39;
goto lbl_21;
}
default:
{
obj* x_42; 
lean::dec(x_13);
lean::dec(x_19);
x_42 = lean::box(0);
x_20 = x_42;
goto lbl_21;
}
}
lbl_21:
{
obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_50; obj* x_51; obj* x_53; obj* x_56; obj* x_57; obj* x_59; obj* x_61; obj* x_62; obj* x_63; 
lean::dec(x_20);
x_44 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_44, 0, x_3);
x_45 = lean::box(0);
x_46 = l_string_join___closed__1;
x_47 = l_lean_parser_command_notation__spec_unquoted__symbol_parser___closed__1;
lean::inc(x_47);
lean::inc(x_46);
x_50 = l_lean_parser_monad__parsec_error___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__4___rarg(x_46, x_47, x_44, x_45, x_0, x_1, x_2, x_15, x_10);
x_51 = lean::cnstr_get(x_50, 0);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_50, 1);
lean::inc(x_53);
lean::dec(x_50);
x_56 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_51);
x_57 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_57);
x_59 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_57, x_56);
lean::inc(x_47);
x_61 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_59, x_47);
x_62 = l_lean_parser_parsec__t_try__mk__res___rarg(x_61);
if (lean::is_scalar(x_12)) {
 x_63 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_63 = x_12;
}
lean::cnstr_set(x_63, 0, x_62);
lean::cnstr_set(x_63, 1, x_53);
return x_63;
}
}
else
{
obj* x_68; uint8 x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_76; obj* x_77; obj* x_79; obj* x_80; obj* x_81; 
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
x_68 = lean::cnstr_get(x_8, 0);
lean::inc(x_68);
x_70 = lean::cnstr_get_scalar<uint8>(x_8, sizeof(void*)*1);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 x_71 = x_8;
} else {
 lean::dec(x_8);
 x_71 = lean::box(0);
}
if (lean::is_scalar(x_71)) {
 x_72 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_72 = x_71;
}
lean::cnstr_set(x_72, 0, x_68);
lean::cnstr_set_scalar(x_72, sizeof(void*)*1, x_70);
x_73 = x_72;
x_74 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_74);
x_76 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_74, x_73);
x_77 = l_lean_parser_command_notation__spec_unquoted__symbol_parser___closed__1;
lean::inc(x_77);
x_79 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_76, x_77);
x_80 = l_lean_parser_parsec__t_try__mk__res___rarg(x_79);
if (lean::is_scalar(x_12)) {
 x_81 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_81 = x_12;
}
lean::cnstr_set(x_81, 0, x_80);
lean::cnstr_set(x_81, 1, x_10);
return x_81;
}
}
}
obj* _init_l_lean_parser_command_notation__spec_unquoted__symbol_tokens() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
return x_0;
}
}
obj* _init_l_lean_parser_command_notation__spec_unquoted__symbol_view() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_raw_view___rarg___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_raw_view___rarg___lambda__3), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_notation__spec_notation__symbol() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("notation_symbol");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* _init_l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_0 = l_lean_parser_command_notation__spec_symbol__quote_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_1, x_3);
return x_4;
}
}
obj* _init_l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("notation_symbol");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; 
x_2 = l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__1___closed__1;
lean::inc(x_2);
return x_2;
}
else
{
obj* x_4; obj* x_7; obj* x_9; obj* x_12; uint8 x_13; 
x_4 = lean::cnstr_get(x_1, 0);
lean::inc(x_4);
lean::dec(x_1);
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_4, 1);
lean::inc(x_9);
lean::dec(x_4);
x_12 = l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__1___closed__2;
x_13 = lean_name_dec_eq(x_7, x_12);
lean::dec(x_7);
if (x_13 == 0)
{
obj* x_16; 
lean::dec(x_9);
x_16 = l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__1___closed__1;
lean::inc(x_16);
return x_16;
}
else
{
if (lean::obj_tag(x_9) == 0)
{
obj* x_18; 
x_18 = l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__1___closed__1;
lean::inc(x_18);
return x_18;
}
else
{
obj* x_20; obj* x_22; 
x_20 = lean::cnstr_get(x_9, 0);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_9, 1);
lean::inc(x_22);
lean::dec(x_9);
if (lean::obj_tag(x_22) == 0)
{
obj* x_25; 
x_25 = l_lean_parser_syntax_as__node___main(x_20);
if (lean::obj_tag(x_25) == 0)
{
obj* x_26; 
x_26 = l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__1___closed__1;
lean::inc(x_26);
return x_26;
}
else
{
obj* x_28; obj* x_31; obj* x_33; 
x_28 = lean::cnstr_get(x_25, 0);
lean::inc(x_28);
lean::dec(x_25);
x_31 = lean::cnstr_get(x_28, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_28, 1);
lean::inc(x_33);
lean::dec(x_28);
switch (lean::obj_tag(x_31)) {
case 0:
{
obj* x_37; 
lean::dec(x_33);
x_37 = l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__1___closed__1;
lean::inc(x_37);
return x_37;
}
case 1:
{
obj* x_41; 
lean::dec(x_31);
lean::dec(x_33);
x_41 = l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__1___closed__1;
lean::inc(x_41);
return x_41;
}
default:
{
obj* x_43; obj* x_46; uint8 x_47; 
x_43 = lean::cnstr_get(x_31, 0);
lean::inc(x_43);
lean::dec(x_31);
x_46 = lean::box(0);
x_47 = lean_name_dec_eq(x_43, x_46);
lean::dec(x_43);
if (x_47 == 0)
{
obj* x_50; 
lean::dec(x_33);
x_50 = l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__1___closed__1;
lean::inc(x_50);
return x_50;
}
else
{
if (lean::obj_tag(x_33) == 0)
{
obj* x_52; 
x_52 = l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__1___closed__1;
lean::inc(x_52);
return x_52;
}
else
{
obj* x_54; obj* x_56; 
x_54 = lean::cnstr_get(x_33, 0);
lean::inc(x_54);
x_56 = lean::cnstr_get(x_33, 1);
lean::inc(x_56);
lean::dec(x_33);
if (lean::obj_tag(x_56) == 0)
{
obj* x_59; obj* x_60; obj* x_62; 
x_59 = l_lean_parser_command_notation__spec_symbol__quote_has__view;
x_60 = lean::cnstr_get(x_59, 0);
lean::inc(x_60);
x_62 = lean::apply_1(x_60, x_54);
return x_62;
}
else
{
obj* x_65; 
lean::dec(x_54);
lean::dec(x_56);
x_65 = l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__1___closed__1;
lean::inc(x_65);
return x_65;
}
}
}
}
}
}
}
else
{
obj* x_69; 
lean::dec(x_20);
lean::dec(x_22);
x_69 = l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__1___closed__1;
lean::inc(x_69);
return x_69;
}
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_5; obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_13; 
x_1 = lean::box(0);
x_2 = l_lean_parser_command_notation__spec_symbol__quote_has__view;
x_3 = lean::cnstr_get(x_2, 1);
lean::inc(x_3);
x_5 = lean::apply_1(x_3, x_0);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_1);
x_7 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__1;
lean::inc(x_7);
x_9 = l_lean_parser_syntax_mk__node(x_7, x_6);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_1);
x_11 = l_lean_parser_command_notation__spec_notation__symbol;
lean::inc(x_11);
x_13 = l_lean_parser_syntax_mk__node(x_11, x_10);
return x_13;
}
}
obj* _init_l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_notation__spec_notation__symbol_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_parser_command_notation__spec_notation__symbol_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens;
lean::inc(x_1);
x_3 = l_lean_parser_list_cons_tokens___rarg(x_1, x_0);
x_4 = l_lean_parser_tokens___rarg(x_3);
x_5 = l_lean_parser_list_cons_tokens___rarg(x_4, x_0);
x_6 = l_lean_parser_tokens___rarg(x_5);
return x_6;
}
}
obj* _init_l_lean_parser_command_notation__spec_notation__symbol_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_18; 
x_0 = lean::box(0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_symbol__quote_parser), 5, 0);
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_1);
lean::cnstr_set(x_2, 1, x_0);
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__3), 7, 2);
lean::closure_set(x_4, 0, x_2);
lean::closure_set(x_4, 1, x_3);
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_0);
x_6 = l_lean_parser_term__parser__m_monad;
x_7 = l_lean_parser_term__parser__m_monad__except;
x_8 = l_lean_parser_term__parser__m_lean_parser_monad__parsec;
x_9 = l_lean_parser_term__parser__m_alternative;
x_10 = l_lean_parser_command_notation__spec_notation__symbol;
x_11 = l_lean_parser_command_notation__spec_notation__symbol_has__view;
lean::inc(x_11);
lean::inc(x_10);
lean::inc(x_9);
lean::inc(x_8);
lean::inc(x_7);
lean::inc(x_6);
x_18 = l_lean_parser_combinators_node_view___rarg(x_6, x_7, x_8, x_9, x_10, x_5, x_11);
return x_18;
}
}
obj* _init_l_lean_parser_command_notation__spec_notation__symbol_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_symbol__quote_parser), 5, 0);
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_1);
lean::cnstr_set(x_2, 1, x_0);
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__3), 7, 2);
lean::closure_set(x_4, 0, x_2);
lean::closure_set(x_4, 1, x_3);
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_0);
return x_5;
}
}
obj* l_lean_parser_command_notation__spec_notation__symbol_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_9; 
x_5 = l_lean_parser_command_notation__spec_notation__symbol;
x_6 = l_lean_parser_command_notation__spec_notation__symbol_parser___closed__1;
lean::inc(x_6);
lean::inc(x_5);
x_9 = l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(x_5, x_6, x_0, x_1, x_2, x_3, x_4);
return x_9;
}
}
obj* _init_l_lean_parser_command_notation__spec_mixfix__symbol() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("mixfix_symbol");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* _init_l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(3);
x_4 = lean::mk_nat_obj(0u);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_1, x_5);
lean::dec(x_1);
if (x_6 == 0)
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_8; obj* x_11; obj* x_12; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
lean::dec(x_0);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_8);
x_12 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_12, 0, x_11);
return x_12;
}
case 3:
{
obj* x_13; 
x_13 = l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__1;
lean::inc(x_13);
return x_13;
}
default:
{
obj* x_16; 
lean::dec(x_0);
x_16 = l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__1;
lean::inc(x_16);
return x_16;
}
}
}
else
{
obj* x_18; obj* x_19; obj* x_21; obj* x_22; 
x_18 = l_lean_parser_command_notation__spec_symbol__quote_has__view;
x_19 = lean::cnstr_get(x_18, 0);
lean::inc(x_19);
x_21 = lean::apply_1(x_19, x_0);
x_22 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_22, 0, x_21);
return x_22;
}
}
}
}
obj* _init_l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("mixfix_symbol");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__2;
lean::inc(x_5);
return x_5;
}
else
{
obj* x_7; obj* x_10; obj* x_12; obj* x_15; uint8 x_16; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::cnstr_get(x_7, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_7, 1);
lean::inc(x_12);
lean::dec(x_7);
x_15 = l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__3;
x_16 = lean_name_dec_eq(x_10, x_15);
lean::dec(x_10);
if (x_16 == 0)
{
obj* x_19; 
lean::dec(x_12);
x_19 = l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__2;
lean::inc(x_19);
return x_19;
}
else
{
if (lean::obj_tag(x_12) == 0)
{
obj* x_21; 
x_21 = l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__2;
lean::inc(x_21);
return x_21;
}
else
{
obj* x_23; obj* x_25; 
x_23 = lean::cnstr_get(x_12, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_12, 1);
lean::inc(x_25);
lean::dec(x_12);
if (lean::obj_tag(x_25) == 0)
{
obj* x_28; 
x_28 = l_lean_parser_syntax_as__node___main(x_23);
if (lean::obj_tag(x_28) == 0)
{
obj* x_29; 
x_29 = l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__2;
lean::inc(x_29);
return x_29;
}
else
{
obj* x_31; obj* x_34; obj* x_36; 
x_31 = lean::cnstr_get(x_28, 0);
lean::inc(x_31);
lean::dec(x_28);
x_34 = lean::cnstr_get(x_31, 0);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_31, 1);
lean::inc(x_36);
lean::dec(x_31);
switch (lean::obj_tag(x_34)) {
case 0:
{
obj* x_40; 
lean::dec(x_36);
x_40 = l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__2;
lean::inc(x_40);
return x_40;
}
case 1:
{
obj* x_44; 
lean::dec(x_36);
lean::dec(x_34);
x_44 = l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__2;
lean::inc(x_44);
return x_44;
}
default:
{
obj* x_46; obj* x_48; obj* x_51; uint8 x_52; 
x_46 = lean::cnstr_get(x_34, 0);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_34, 1);
lean::inc(x_48);
lean::dec(x_34);
x_51 = lean::box(0);
x_52 = lean_name_dec_eq(x_46, x_51);
lean::dec(x_46);
if (x_52 == 0)
{
obj* x_56; 
lean::dec(x_36);
lean::dec(x_48);
x_56 = l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__2;
lean::inc(x_56);
return x_56;
}
else
{
if (lean::obj_tag(x_36) == 0)
{
obj* x_59; 
lean::dec(x_48);
x_59 = l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__2;
lean::inc(x_59);
return x_59;
}
else
{
obj* x_61; obj* x_63; 
x_61 = lean::cnstr_get(x_36, 0);
lean::inc(x_61);
x_63 = lean::cnstr_get(x_36, 1);
lean::inc(x_63);
lean::dec(x_36);
if (lean::obj_tag(x_63) == 0)
{
x_1 = x_61;
x_2 = x_48;
goto lbl_3;
}
else
{
obj* x_69; 
lean::dec(x_61);
lean::dec(x_63);
lean::dec(x_48);
x_69 = l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__2;
lean::inc(x_69);
return x_69;
}
}
}
}
}
}
}
else
{
obj* x_73; 
lean::dec(x_23);
lean::dec(x_25);
x_73 = l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__2;
lean::inc(x_73);
return x_73;
}
}
}
}
lbl_3:
{
obj* x_75; uint8 x_76; 
x_75 = lean::mk_nat_obj(0u);
x_76 = lean::nat_dec_eq(x_2, x_75);
lean::dec(x_2);
if (x_76 == 0)
{
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_78; obj* x_81; obj* x_82; 
x_78 = lean::cnstr_get(x_1, 0);
lean::inc(x_78);
lean::dec(x_1);
x_81 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_81, 0, x_78);
x_82 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_82, 0, x_81);
return x_82;
}
case 3:
{
obj* x_83; 
x_83 = l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__1;
lean::inc(x_83);
return x_83;
}
default:
{
obj* x_86; 
lean::dec(x_1);
x_86 = l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__1;
lean::inc(x_86);
return x_86;
}
}
}
else
{
obj* x_88; obj* x_89; obj* x_91; obj* x_92; 
x_88 = l_lean_parser_command_notation__spec_symbol__quote_has__view;
x_89 = lean::cnstr_get(x_88, 0);
lean::inc(x_89);
x_91 = lean::apply_1(x_89, x_1);
x_92 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_92, 0, x_91);
return x_92;
}
}
}
}
obj* l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_16; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_lean_parser_command_notation__spec_symbol__quote_has__view;
x_6 = lean::cnstr_get(x_5, 1);
lean::inc(x_6);
x_8 = lean::apply_1(x_6, x_2);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_1);
x_10 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__1;
lean::inc(x_10);
x_12 = l_lean_parser_syntax_mk__node(x_10, x_9);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_1);
x_14 = l_lean_parser_command_notation__spec_mixfix__symbol;
lean::inc(x_14);
x_16 = l_lean_parser_syntax_mk__node(x_14, x_13);
return x_16;
}
else
{
obj* x_17; obj* x_20; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_28; obj* x_29; obj* x_30; obj* x_32; 
x_17 = lean::cnstr_get(x_0, 0);
lean::inc(x_17);
lean::dec(x_0);
x_20 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
lean::inc(x_20);
x_22 = l_option_map___rarg(x_20, x_17);
x_23 = lean::box(3);
x_24 = l_option_get__or__else___main___rarg(x_22, x_23);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_1);
x_26 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__2;
lean::inc(x_26);
x_28 = l_lean_parser_syntax_mk__node(x_26, x_25);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_28);
lean::cnstr_set(x_29, 1, x_1);
x_30 = l_lean_parser_command_notation__spec_mixfix__symbol;
lean::inc(x_30);
x_32 = l_lean_parser_syntax_mk__node(x_30, x_29);
return x_32;
}
}
}
obj* _init_l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_notation__spec_mixfix__symbol_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_parser_command_notation__spec_mixfix__symbol_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_0 = lean::box(0);
x_1 = l_lean_parser_command_notation__spec_unquoted__symbol_tokens;
lean::inc(x_1);
x_3 = l_lean_parser_list_cons_tokens___rarg(x_1, x_0);
x_4 = l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens;
lean::inc(x_4);
x_6 = l_lean_parser_list_cons_tokens___rarg(x_4, x_3);
x_7 = l_lean_parser_tokens___rarg(x_6);
x_8 = l_lean_parser_list_cons_tokens___rarg(x_7, x_0);
x_9 = l_lean_parser_tokens___rarg(x_8);
return x_9;
}
}
obj* _init_l_lean_parser_command_notation__spec_mixfix__symbol_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_20; 
x_0 = lean::box(0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_unquoted__symbol_parser), 5, 0);
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_1);
lean::cnstr_set(x_2, 1, x_0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_symbol__quote_parser), 5, 0);
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__3), 7, 2);
lean::closure_set(x_6, 0, x_4);
lean::closure_set(x_6, 1, x_5);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_0);
x_8 = l_lean_parser_term__parser__m_monad;
x_9 = l_lean_parser_term__parser__m_monad__except;
x_10 = l_lean_parser_term__parser__m_lean_parser_monad__parsec;
x_11 = l_lean_parser_term__parser__m_alternative;
x_12 = l_lean_parser_command_notation__spec_mixfix__symbol;
x_13 = l_lean_parser_command_notation__spec_mixfix__symbol_has__view;
lean::inc(x_13);
lean::inc(x_12);
lean::inc(x_11);
lean::inc(x_10);
lean::inc(x_9);
lean::inc(x_8);
x_20 = l_lean_parser_combinators_node_view___rarg(x_8, x_9, x_10, x_11, x_12, x_7, x_13);
return x_20;
}
}
obj* _init_l_lean_parser_command_notation__spec_mixfix__symbol_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_unquoted__symbol_parser), 5, 0);
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_1);
lean::cnstr_set(x_2, 1, x_0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_symbol__quote_parser), 5, 0);
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__3), 7, 2);
lean::closure_set(x_6, 0, x_4);
lean::closure_set(x_6, 1, x_5);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_0);
return x_7;
}
}
obj* l_lean_parser_command_notation__spec_mixfix__symbol_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_9; 
x_5 = l_lean_parser_command_notation__spec_mixfix__symbol;
x_6 = l_lean_parser_command_notation__spec_mixfix__symbol_parser___closed__1;
lean::inc(x_6);
lean::inc(x_5);
x_9 = l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(x_5, x_6, x_0, x_1, x_2, x_3, x_4);
return x_9;
}
}
obj* _init_l_lean_parser_command_notation__spec_fold__action__folder() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("fold_action_folder");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* _init_l_lean_parser_command_notation__spec_fold__action__folder_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(0);
x_4 = lean::box(3);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; 
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_7; obj* x_10; 
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
lean::dec(x_1);
x_10 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_10, 0, x_7);
x_5 = x_10;
goto lbl_6;
}
case 3:
{
obj* x_11; 
x_11 = lean::box(0);
x_5 = x_11;
goto lbl_6;
}
default:
{
obj* x_13; 
lean::dec(x_1);
x_13 = lean::box(0);
x_5 = x_13;
goto lbl_6;
}
}
lbl_6:
{
obj* x_14; obj* x_15; 
if (lean::obj_tag(x_0) == 0)
{
obj* x_17; 
x_17 = lean::box(3);
x_14 = x_0;
x_15 = x_17;
goto lbl_16;
}
else
{
obj* x_18; obj* x_20; 
x_18 = lean::cnstr_get(x_0, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_0, 1);
lean::inc(x_20);
lean::dec(x_0);
x_14 = x_20;
x_15 = x_18;
goto lbl_16;
}
lbl_16:
{
obj* x_23; 
switch (lean::obj_tag(x_15)) {
case 1:
{
obj* x_25; 
x_25 = lean::cnstr_get(x_15, 0);
lean::inc(x_25);
lean::dec(x_15);
x_23 = x_25;
goto lbl_24;
}
case 3:
{
obj* x_28; 
x_28 = l_lean_parser_ident_parser_view___rarg___lambda__1___closed__1;
lean::inc(x_28);
x_23 = x_28;
goto lbl_24;
}
default:
{
obj* x_31; 
lean::dec(x_15);
x_31 = l_lean_parser_ident_parser_view___rarg___lambda__1___closed__1;
lean::inc(x_31);
x_23 = x_31;
goto lbl_24;
}
}
lbl_24:
{
obj* x_33; obj* x_34; 
if (lean::obj_tag(x_14) == 0)
{
obj* x_36; 
x_36 = lean::box(3);
x_33 = x_14;
x_34 = x_36;
goto lbl_35;
}
else
{
obj* x_37; obj* x_39; 
x_37 = lean::cnstr_get(x_14, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_14, 1);
lean::inc(x_39);
lean::dec(x_14);
x_33 = x_39;
x_34 = x_37;
goto lbl_35;
}
lbl_35:
{
obj* x_42; 
switch (lean::obj_tag(x_34)) {
case 1:
{
obj* x_44; 
x_44 = lean::cnstr_get(x_34, 0);
lean::inc(x_44);
lean::dec(x_34);
x_42 = x_44;
goto lbl_43;
}
case 3:
{
obj* x_47; 
x_47 = l_lean_parser_ident_parser_view___rarg___lambda__1___closed__1;
lean::inc(x_47);
x_42 = x_47;
goto lbl_43;
}
default:
{
obj* x_50; 
lean::dec(x_34);
x_50 = l_lean_parser_ident_parser_view___rarg___lambda__1___closed__1;
lean::inc(x_50);
x_42 = x_50;
goto lbl_43;
}
}
lbl_43:
{
obj* x_52; obj* x_53; obj* x_54; obj* x_56; obj* x_57; 
if (lean::obj_tag(x_33) == 0)
{
obj* x_59; 
x_59 = lean::box(3);
x_56 = x_33;
x_57 = x_59;
goto lbl_58;
}
else
{
obj* x_60; obj* x_62; 
x_60 = lean::cnstr_get(x_33, 0);
lean::inc(x_60);
x_62 = lean::cnstr_get(x_33, 1);
lean::inc(x_62);
lean::dec(x_33);
x_56 = x_62;
x_57 = x_60;
goto lbl_58;
}
lbl_55:
{
if (lean::obj_tag(x_54) == 0)
{
obj* x_65; obj* x_66; 
x_65 = lean::box(0);
x_66 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_66, 0, x_5);
lean::cnstr_set(x_66, 1, x_23);
lean::cnstr_set(x_66, 2, x_42);
lean::cnstr_set(x_66, 3, x_52);
lean::cnstr_set(x_66, 4, x_53);
lean::cnstr_set(x_66, 5, x_65);
return x_66;
}
else
{
obj* x_67; 
x_67 = lean::cnstr_get(x_54, 0);
lean::inc(x_67);
lean::dec(x_54);
switch (lean::obj_tag(x_67)) {
case 0:
{
obj* x_70; obj* x_73; obj* x_74; 
x_70 = lean::cnstr_get(x_67, 0);
lean::inc(x_70);
lean::dec(x_67);
x_73 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_73, 0, x_70);
x_74 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_74, 0, x_5);
lean::cnstr_set(x_74, 1, x_23);
lean::cnstr_set(x_74, 2, x_42);
lean::cnstr_set(x_74, 3, x_52);
lean::cnstr_set(x_74, 4, x_53);
lean::cnstr_set(x_74, 5, x_73);
return x_74;
}
case 3:
{
obj* x_75; obj* x_76; 
x_75 = lean::box(0);
x_76 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_76, 0, x_5);
lean::cnstr_set(x_76, 1, x_23);
lean::cnstr_set(x_76, 2, x_42);
lean::cnstr_set(x_76, 3, x_52);
lean::cnstr_set(x_76, 4, x_53);
lean::cnstr_set(x_76, 5, x_75);
return x_76;
}
default:
{
obj* x_78; obj* x_79; 
lean::dec(x_67);
x_78 = lean::box(0);
x_79 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_79, 0, x_5);
lean::cnstr_set(x_79, 1, x_23);
lean::cnstr_set(x_79, 2, x_42);
lean::cnstr_set(x_79, 3, x_52);
lean::cnstr_set(x_79, 4, x_53);
lean::cnstr_set(x_79, 5, x_78);
return x_79;
}
}
}
}
lbl_58:
{
obj* x_80; 
switch (lean::obj_tag(x_57)) {
case 0:
{
obj* x_82; obj* x_85; 
x_82 = lean::cnstr_get(x_57, 0);
lean::inc(x_82);
lean::dec(x_57);
x_85 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_85, 0, x_82);
if (lean::obj_tag(x_56) == 0)
{
x_80 = x_85;
goto lbl_81;
}
else
{
obj* x_86; obj* x_88; 
x_86 = lean::cnstr_get(x_56, 0);
lean::inc(x_86);
x_88 = lean::cnstr_get(x_56, 1);
lean::inc(x_88);
lean::dec(x_56);
x_52 = x_85;
x_53 = x_86;
x_54 = x_88;
goto lbl_55;
}
}
case 3:
{
obj* x_91; 
x_91 = lean::box(0);
if (lean::obj_tag(x_56) == 0)
{
x_80 = x_91;
goto lbl_81;
}
else
{
obj* x_92; obj* x_94; 
x_92 = lean::cnstr_get(x_56, 0);
lean::inc(x_92);
x_94 = lean::cnstr_get(x_56, 1);
lean::inc(x_94);
lean::dec(x_56);
x_52 = x_91;
x_53 = x_92;
x_54 = x_94;
goto lbl_55;
}
}
default:
{
obj* x_98; 
lean::dec(x_57);
x_98 = lean::box(0);
if (lean::obj_tag(x_56) == 0)
{
x_80 = x_98;
goto lbl_81;
}
else
{
obj* x_99; obj* x_101; 
x_99 = lean::cnstr_get(x_56, 0);
lean::inc(x_99);
x_101 = lean::cnstr_get(x_56, 1);
lean::inc(x_101);
lean::dec(x_56);
x_52 = x_98;
x_53 = x_99;
x_54 = x_101;
goto lbl_55;
}
}
}
lbl_81:
{
if (lean::obj_tag(x_56) == 0)
{
obj* x_104; obj* x_105; obj* x_106; 
x_104 = lean::box(0);
x_105 = lean::box(3);
x_106 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_106, 0, x_5);
lean::cnstr_set(x_106, 1, x_23);
lean::cnstr_set(x_106, 2, x_42);
lean::cnstr_set(x_106, 3, x_80);
lean::cnstr_set(x_106, 4, x_105);
lean::cnstr_set(x_106, 5, x_104);
return x_106;
}
else
{
obj* x_107; 
x_107 = lean::cnstr_get(x_56, 0);
lean::inc(x_107);
lean::dec(x_56);
switch (lean::obj_tag(x_107)) {
case 0:
{
obj* x_110; obj* x_113; obj* x_114; obj* x_115; 
x_110 = lean::cnstr_get(x_107, 0);
lean::inc(x_110);
lean::dec(x_107);
x_113 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_113, 0, x_110);
x_114 = lean::box(3);
x_115 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_115, 0, x_5);
lean::cnstr_set(x_115, 1, x_23);
lean::cnstr_set(x_115, 2, x_42);
lean::cnstr_set(x_115, 3, x_80);
lean::cnstr_set(x_115, 4, x_114);
lean::cnstr_set(x_115, 5, x_113);
return x_115;
}
case 3:
{
obj* x_116; obj* x_117; obj* x_118; 
x_116 = lean::box(0);
x_117 = lean::box(3);
x_118 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_118, 0, x_5);
lean::cnstr_set(x_118, 1, x_23);
lean::cnstr_set(x_118, 2, x_42);
lean::cnstr_set(x_118, 3, x_80);
lean::cnstr_set(x_118, 4, x_117);
lean::cnstr_set(x_118, 5, x_116);
return x_118;
}
default:
{
obj* x_120; obj* x_121; obj* x_122; 
lean::dec(x_107);
x_120 = lean::box(0);
x_121 = lean::box(3);
x_122 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_122, 0, x_5);
lean::cnstr_set(x_122, 1, x_23);
lean::cnstr_set(x_122, 2, x_42);
lean::cnstr_set(x_122, 3, x_80);
lean::cnstr_set(x_122, 4, x_121);
lean::cnstr_set(x_122, 5, x_120);
return x_122;
}
}
}
}
}
}
}
}
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_fold__action__folder_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_command_notation__spec_fold__action__folder_has__view_x_27___lambda__1___closed__1;
lean::inc(x_5);
return x_5;
}
else
{
obj* x_7; obj* x_10; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::dec(x_7);
if (lean::obj_tag(x_10) == 0)
{
obj* x_13; 
x_13 = lean::box(3);
x_1 = x_10;
x_2 = x_13;
goto lbl_3;
}
else
{
obj* x_14; obj* x_16; 
x_14 = lean::cnstr_get(x_10, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_10, 1);
lean::inc(x_16);
lean::dec(x_10);
x_1 = x_16;
x_2 = x_14;
goto lbl_3;
}
}
lbl_3:
{
obj* x_19; 
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_21; obj* x_24; 
x_21 = lean::cnstr_get(x_2, 0);
lean::inc(x_21);
lean::dec(x_2);
x_24 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_24, 0, x_21);
x_19 = x_24;
goto lbl_20;
}
case 3:
{
obj* x_25; 
x_25 = lean::box(0);
x_19 = x_25;
goto lbl_20;
}
default:
{
obj* x_27; 
lean::dec(x_2);
x_27 = lean::box(0);
x_19 = x_27;
goto lbl_20;
}
}
lbl_20:
{
obj* x_28; obj* x_29; 
if (lean::obj_tag(x_1) == 0)
{
obj* x_31; 
x_31 = lean::box(3);
x_28 = x_1;
x_29 = x_31;
goto lbl_30;
}
else
{
obj* x_32; obj* x_34; 
x_32 = lean::cnstr_get(x_1, 0);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_1, 1);
lean::inc(x_34);
lean::dec(x_1);
x_28 = x_34;
x_29 = x_32;
goto lbl_30;
}
lbl_30:
{
obj* x_37; 
switch (lean::obj_tag(x_29)) {
case 1:
{
obj* x_39; 
x_39 = lean::cnstr_get(x_29, 0);
lean::inc(x_39);
lean::dec(x_29);
x_37 = x_39;
goto lbl_38;
}
case 3:
{
obj* x_42; 
x_42 = l_lean_parser_ident_parser_view___rarg___lambda__1___closed__1;
lean::inc(x_42);
x_37 = x_42;
goto lbl_38;
}
default:
{
obj* x_45; 
lean::dec(x_29);
x_45 = l_lean_parser_ident_parser_view___rarg___lambda__1___closed__1;
lean::inc(x_45);
x_37 = x_45;
goto lbl_38;
}
}
lbl_38:
{
obj* x_47; obj* x_48; 
if (lean::obj_tag(x_28) == 0)
{
obj* x_50; 
x_50 = lean::box(3);
x_47 = x_28;
x_48 = x_50;
goto lbl_49;
}
else
{
obj* x_51; obj* x_53; 
x_51 = lean::cnstr_get(x_28, 0);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_28, 1);
lean::inc(x_53);
lean::dec(x_28);
x_47 = x_53;
x_48 = x_51;
goto lbl_49;
}
lbl_49:
{
obj* x_56; 
switch (lean::obj_tag(x_48)) {
case 1:
{
obj* x_58; 
x_58 = lean::cnstr_get(x_48, 0);
lean::inc(x_58);
lean::dec(x_48);
x_56 = x_58;
goto lbl_57;
}
case 3:
{
obj* x_61; 
x_61 = l_lean_parser_ident_parser_view___rarg___lambda__1___closed__1;
lean::inc(x_61);
x_56 = x_61;
goto lbl_57;
}
default:
{
obj* x_64; 
lean::dec(x_48);
x_64 = l_lean_parser_ident_parser_view___rarg___lambda__1___closed__1;
lean::inc(x_64);
x_56 = x_64;
goto lbl_57;
}
}
lbl_57:
{
obj* x_66; obj* x_67; obj* x_68; obj* x_70; obj* x_71; 
if (lean::obj_tag(x_47) == 0)
{
obj* x_73; 
x_73 = lean::box(3);
x_70 = x_47;
x_71 = x_73;
goto lbl_72;
}
else
{
obj* x_74; obj* x_76; 
x_74 = lean::cnstr_get(x_47, 0);
lean::inc(x_74);
x_76 = lean::cnstr_get(x_47, 1);
lean::inc(x_76);
lean::dec(x_47);
x_70 = x_76;
x_71 = x_74;
goto lbl_72;
}
lbl_69:
{
if (lean::obj_tag(x_68) == 0)
{
obj* x_79; obj* x_80; 
x_79 = lean::box(0);
x_80 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_80, 0, x_19);
lean::cnstr_set(x_80, 1, x_37);
lean::cnstr_set(x_80, 2, x_56);
lean::cnstr_set(x_80, 3, x_66);
lean::cnstr_set(x_80, 4, x_67);
lean::cnstr_set(x_80, 5, x_79);
return x_80;
}
else
{
obj* x_81; 
x_81 = lean::cnstr_get(x_68, 0);
lean::inc(x_81);
lean::dec(x_68);
switch (lean::obj_tag(x_81)) {
case 0:
{
obj* x_84; obj* x_87; obj* x_88; 
x_84 = lean::cnstr_get(x_81, 0);
lean::inc(x_84);
lean::dec(x_81);
x_87 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_87, 0, x_84);
x_88 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_88, 0, x_19);
lean::cnstr_set(x_88, 1, x_37);
lean::cnstr_set(x_88, 2, x_56);
lean::cnstr_set(x_88, 3, x_66);
lean::cnstr_set(x_88, 4, x_67);
lean::cnstr_set(x_88, 5, x_87);
return x_88;
}
case 3:
{
obj* x_89; obj* x_90; 
x_89 = lean::box(0);
x_90 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_90, 0, x_19);
lean::cnstr_set(x_90, 1, x_37);
lean::cnstr_set(x_90, 2, x_56);
lean::cnstr_set(x_90, 3, x_66);
lean::cnstr_set(x_90, 4, x_67);
lean::cnstr_set(x_90, 5, x_89);
return x_90;
}
default:
{
obj* x_92; obj* x_93; 
lean::dec(x_81);
x_92 = lean::box(0);
x_93 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_93, 0, x_19);
lean::cnstr_set(x_93, 1, x_37);
lean::cnstr_set(x_93, 2, x_56);
lean::cnstr_set(x_93, 3, x_66);
lean::cnstr_set(x_93, 4, x_67);
lean::cnstr_set(x_93, 5, x_92);
return x_93;
}
}
}
}
lbl_72:
{
obj* x_94; 
switch (lean::obj_tag(x_71)) {
case 0:
{
obj* x_96; obj* x_99; 
x_96 = lean::cnstr_get(x_71, 0);
lean::inc(x_96);
lean::dec(x_71);
x_99 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_99, 0, x_96);
if (lean::obj_tag(x_70) == 0)
{
x_94 = x_99;
goto lbl_95;
}
else
{
obj* x_100; obj* x_102; 
x_100 = lean::cnstr_get(x_70, 0);
lean::inc(x_100);
x_102 = lean::cnstr_get(x_70, 1);
lean::inc(x_102);
lean::dec(x_70);
x_66 = x_99;
x_67 = x_100;
x_68 = x_102;
goto lbl_69;
}
}
case 3:
{
obj* x_105; 
x_105 = lean::box(0);
if (lean::obj_tag(x_70) == 0)
{
x_94 = x_105;
goto lbl_95;
}
else
{
obj* x_106; obj* x_108; 
x_106 = lean::cnstr_get(x_70, 0);
lean::inc(x_106);
x_108 = lean::cnstr_get(x_70, 1);
lean::inc(x_108);
lean::dec(x_70);
x_66 = x_105;
x_67 = x_106;
x_68 = x_108;
goto lbl_69;
}
}
default:
{
obj* x_112; 
lean::dec(x_71);
x_112 = lean::box(0);
if (lean::obj_tag(x_70) == 0)
{
x_94 = x_112;
goto lbl_95;
}
else
{
obj* x_113; obj* x_115; 
x_113 = lean::cnstr_get(x_70, 0);
lean::inc(x_113);
x_115 = lean::cnstr_get(x_70, 1);
lean::inc(x_115);
lean::dec(x_70);
x_66 = x_112;
x_67 = x_113;
x_68 = x_115;
goto lbl_69;
}
}
}
lbl_95:
{
if (lean::obj_tag(x_70) == 0)
{
obj* x_118; obj* x_119; obj* x_120; 
x_118 = lean::box(0);
x_119 = lean::box(3);
x_120 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_120, 0, x_19);
lean::cnstr_set(x_120, 1, x_37);
lean::cnstr_set(x_120, 2, x_56);
lean::cnstr_set(x_120, 3, x_94);
lean::cnstr_set(x_120, 4, x_119);
lean::cnstr_set(x_120, 5, x_118);
return x_120;
}
else
{
obj* x_121; 
x_121 = lean::cnstr_get(x_70, 0);
lean::inc(x_121);
lean::dec(x_70);
switch (lean::obj_tag(x_121)) {
case 0:
{
obj* x_124; obj* x_127; obj* x_128; obj* x_129; 
x_124 = lean::cnstr_get(x_121, 0);
lean::inc(x_124);
lean::dec(x_121);
x_127 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_127, 0, x_124);
x_128 = lean::box(3);
x_129 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_129, 0, x_19);
lean::cnstr_set(x_129, 1, x_37);
lean::cnstr_set(x_129, 2, x_56);
lean::cnstr_set(x_129, 3, x_94);
lean::cnstr_set(x_129, 4, x_128);
lean::cnstr_set(x_129, 5, x_127);
return x_129;
}
case 3:
{
obj* x_130; obj* x_131; obj* x_132; 
x_130 = lean::box(0);
x_131 = lean::box(3);
x_132 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_132, 0, x_19);
lean::cnstr_set(x_132, 1, x_37);
lean::cnstr_set(x_132, 2, x_56);
lean::cnstr_set(x_132, 3, x_94);
lean::cnstr_set(x_132, 4, x_131);
lean::cnstr_set(x_132, 5, x_130);
return x_132;
}
default:
{
obj* x_134; obj* x_135; obj* x_136; 
lean::dec(x_121);
x_134 = lean::box(0);
x_135 = lean::box(3);
x_136 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_136, 0, x_19);
lean::cnstr_set(x_136, 1, x_37);
lean::cnstr_set(x_136, 2, x_56);
lean::cnstr_set(x_136, 3, x_94);
lean::cnstr_set(x_136, 4, x_135);
lean::cnstr_set(x_136, 5, x_134);
return x_136;
}
}
}
}
}
}
}
}
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_fold__action__folder_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_14; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_22; obj* x_23; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_36; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 3);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 4);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 5);
lean::inc(x_11);
lean::dec(x_0);
x_14 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
lean::inc(x_14);
x_16 = l_option_map___rarg(x_14, x_1);
x_17 = lean::box(3);
x_18 = l_option_get__or__else___main___rarg(x_16, x_17);
x_19 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_19, 0, x_3);
x_20 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_20, 0, x_5);
lean::inc(x_14);
x_22 = l_option_map___rarg(x_14, x_7);
x_23 = l_option_get__or__else___main___rarg(x_22, x_17);
lean::inc(x_14);
x_25 = l_option_map___rarg(x_14, x_11);
x_26 = l_option_get__or__else___main___rarg(x_25, x_17);
x_27 = lean::box(0);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_26);
lean::cnstr_set(x_28, 1, x_27);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_9);
lean::cnstr_set(x_29, 1, x_28);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_23);
lean::cnstr_set(x_30, 1, x_29);
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_20);
lean::cnstr_set(x_31, 1, x_30);
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_19);
lean::cnstr_set(x_32, 1, x_31);
x_33 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_33, 0, x_18);
lean::cnstr_set(x_33, 1, x_32);
x_34 = l_lean_parser_command_notation__spec_fold__action__folder;
lean::inc(x_34);
x_36 = l_lean_parser_syntax_mk__node(x_34, x_33);
return x_36;
}
}
obj* _init_l_lean_parser_command_notation__spec_fold__action__folder_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_fold__action__folder_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_fold__action__folder_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_notation__spec_fold__action__folder_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_notation__spec_fold__action__folder_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_parser_command_notation__spec_fold__action() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("fold_action");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* _init_l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_0 = l_lean_parser_command_notation__spec_notation__symbol_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_1, x_3);
return x_4;
}
}
obj* _init_l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(0);
x_4 = lean::box(3);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; 
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_7; obj* x_10; 
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
lean::dec(x_1);
x_10 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_10, 0, x_7);
x_5 = x_10;
goto lbl_6;
}
case 3:
{
obj* x_11; 
x_11 = lean::box(0);
x_5 = x_11;
goto lbl_6;
}
default:
{
obj* x_13; 
lean::dec(x_1);
x_13 = lean::box(0);
x_5 = x_13;
goto lbl_6;
}
}
lbl_6:
{
obj* x_14; obj* x_15; 
if (lean::obj_tag(x_0) == 0)
{
obj* x_17; 
x_17 = lean::box(3);
x_14 = x_0;
x_15 = x_17;
goto lbl_16;
}
else
{
obj* x_18; obj* x_20; 
x_18 = lean::cnstr_get(x_0, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_0, 1);
lean::inc(x_20);
lean::dec(x_0);
x_14 = x_20;
x_15 = x_18;
goto lbl_16;
}
lbl_16:
{
obj* x_23; obj* x_24; 
if (lean::obj_tag(x_14) == 0)
{
obj* x_26; 
x_26 = lean::box(3);
x_23 = x_14;
x_24 = x_26;
goto lbl_25;
}
else
{
obj* x_27; obj* x_29; 
x_27 = lean::cnstr_get(x_14, 0);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_14, 1);
lean::inc(x_29);
lean::dec(x_14);
x_23 = x_29;
x_24 = x_27;
goto lbl_25;
}
lbl_25:
{
obj* x_32; obj* x_33; obj* x_36; obj* x_37; obj* x_38; 
x_32 = l_lean_parser_command_notation__spec_notation__symbol_has__view;
x_33 = lean::cnstr_get(x_32, 0);
lean::inc(x_33);
lean::inc(x_33);
x_36 = lean::apply_1(x_33, x_24);
if (lean::obj_tag(x_23) == 0)
{
obj* x_40; 
x_40 = lean::box(3);
x_37 = x_23;
x_38 = x_40;
goto lbl_39;
}
else
{
obj* x_41; obj* x_43; 
x_41 = lean::cnstr_get(x_23, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_23, 1);
lean::inc(x_43);
lean::dec(x_23);
x_37 = x_43;
x_38 = x_41;
goto lbl_39;
}
lbl_39:
{
obj* x_46; obj* x_47; obj* x_49; obj* x_50; obj* x_51; 
x_46 = l_lean_parser_command_notation__spec_fold__action__folder_has__view;
x_47 = lean::cnstr_get(x_46, 0);
lean::inc(x_47);
x_49 = lean::apply_1(x_47, x_38);
if (lean::obj_tag(x_37) == 0)
{
obj* x_53; 
x_53 = lean::box(3);
x_50 = x_37;
x_51 = x_53;
goto lbl_52;
}
else
{
obj* x_54; obj* x_56; 
x_54 = lean::cnstr_get(x_37, 0);
lean::inc(x_54);
x_56 = lean::cnstr_get(x_37, 1);
lean::inc(x_56);
lean::dec(x_37);
x_50 = x_56;
x_51 = x_54;
goto lbl_52;
}
lbl_52:
{
if (lean::obj_tag(x_50) == 0)
{
lean::dec(x_33);
if (lean::obj_tag(x_50) == 0)
{
obj* x_60; obj* x_61; obj* x_63; 
x_60 = lean::box(0);
x_61 = l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1___closed__1;
lean::inc(x_61);
x_63 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_63, 0, x_5);
lean::cnstr_set(x_63, 1, x_15);
lean::cnstr_set(x_63, 2, x_36);
lean::cnstr_set(x_63, 3, x_49);
lean::cnstr_set(x_63, 4, x_51);
lean::cnstr_set(x_63, 5, x_61);
lean::cnstr_set(x_63, 6, x_60);
return x_63;
}
else
{
obj* x_64; 
x_64 = lean::cnstr_get(x_50, 0);
lean::inc(x_64);
lean::dec(x_50);
switch (lean::obj_tag(x_64)) {
case 0:
{
obj* x_67; obj* x_70; obj* x_71; obj* x_73; 
x_67 = lean::cnstr_get(x_64, 0);
lean::inc(x_67);
lean::dec(x_64);
x_70 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_70, 0, x_67);
x_71 = l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1___closed__1;
lean::inc(x_71);
x_73 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_73, 0, x_5);
lean::cnstr_set(x_73, 1, x_15);
lean::cnstr_set(x_73, 2, x_36);
lean::cnstr_set(x_73, 3, x_49);
lean::cnstr_set(x_73, 4, x_51);
lean::cnstr_set(x_73, 5, x_71);
lean::cnstr_set(x_73, 6, x_70);
return x_73;
}
case 3:
{
obj* x_74; obj* x_75; obj* x_77; 
x_74 = lean::box(0);
x_75 = l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1___closed__1;
lean::inc(x_75);
x_77 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_77, 0, x_5);
lean::cnstr_set(x_77, 1, x_15);
lean::cnstr_set(x_77, 2, x_36);
lean::cnstr_set(x_77, 3, x_49);
lean::cnstr_set(x_77, 4, x_51);
lean::cnstr_set(x_77, 5, x_75);
lean::cnstr_set(x_77, 6, x_74);
return x_77;
}
default:
{
obj* x_79; obj* x_80; obj* x_82; 
lean::dec(x_64);
x_79 = lean::box(0);
x_80 = l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1___closed__1;
lean::inc(x_80);
x_82 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_82, 0, x_5);
lean::cnstr_set(x_82, 1, x_15);
lean::cnstr_set(x_82, 2, x_36);
lean::cnstr_set(x_82, 3, x_49);
lean::cnstr_set(x_82, 4, x_51);
lean::cnstr_set(x_82, 5, x_80);
lean::cnstr_set(x_82, 6, x_79);
return x_82;
}
}
}
}
else
{
obj* x_83; obj* x_85; obj* x_88; 
x_83 = lean::cnstr_get(x_50, 0);
lean::inc(x_83);
x_85 = lean::cnstr_get(x_50, 1);
lean::inc(x_85);
lean::dec(x_50);
x_88 = lean::apply_1(x_33, x_83);
if (lean::obj_tag(x_85) == 0)
{
obj* x_89; obj* x_90; 
x_89 = lean::box(0);
x_90 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_90, 0, x_5);
lean::cnstr_set(x_90, 1, x_15);
lean::cnstr_set(x_90, 2, x_36);
lean::cnstr_set(x_90, 3, x_49);
lean::cnstr_set(x_90, 4, x_51);
lean::cnstr_set(x_90, 5, x_88);
lean::cnstr_set(x_90, 6, x_89);
return x_90;
}
else
{
obj* x_91; 
x_91 = lean::cnstr_get(x_85, 0);
lean::inc(x_91);
lean::dec(x_85);
switch (lean::obj_tag(x_91)) {
case 0:
{
obj* x_94; obj* x_97; obj* x_98; 
x_94 = lean::cnstr_get(x_91, 0);
lean::inc(x_94);
lean::dec(x_91);
x_97 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_97, 0, x_94);
x_98 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_98, 0, x_5);
lean::cnstr_set(x_98, 1, x_15);
lean::cnstr_set(x_98, 2, x_36);
lean::cnstr_set(x_98, 3, x_49);
lean::cnstr_set(x_98, 4, x_51);
lean::cnstr_set(x_98, 5, x_88);
lean::cnstr_set(x_98, 6, x_97);
return x_98;
}
case 3:
{
obj* x_99; obj* x_100; 
x_99 = lean::box(0);
x_100 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_100, 0, x_5);
lean::cnstr_set(x_100, 1, x_15);
lean::cnstr_set(x_100, 2, x_36);
lean::cnstr_set(x_100, 3, x_49);
lean::cnstr_set(x_100, 4, x_51);
lean::cnstr_set(x_100, 5, x_88);
lean::cnstr_set(x_100, 6, x_99);
return x_100;
}
default:
{
obj* x_102; obj* x_103; 
lean::dec(x_91);
x_102 = lean::box(0);
x_103 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_103, 0, x_5);
lean::cnstr_set(x_103, 1, x_15);
lean::cnstr_set(x_103, 2, x_36);
lean::cnstr_set(x_103, 3, x_49);
lean::cnstr_set(x_103, 4, x_51);
lean::cnstr_set(x_103, 5, x_88);
lean::cnstr_set(x_103, 6, x_102);
return x_103;
}
}
}
}
}
}
}
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1___closed__2;
lean::inc(x_5);
return x_5;
}
else
{
obj* x_7; obj* x_10; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::dec(x_7);
if (lean::obj_tag(x_10) == 0)
{
obj* x_13; 
x_13 = lean::box(3);
x_1 = x_10;
x_2 = x_13;
goto lbl_3;
}
else
{
obj* x_14; obj* x_16; 
x_14 = lean::cnstr_get(x_10, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_10, 1);
lean::inc(x_16);
lean::dec(x_10);
x_1 = x_16;
x_2 = x_14;
goto lbl_3;
}
}
lbl_3:
{
obj* x_19; 
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_21; obj* x_24; 
x_21 = lean::cnstr_get(x_2, 0);
lean::inc(x_21);
lean::dec(x_2);
x_24 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_24, 0, x_21);
x_19 = x_24;
goto lbl_20;
}
case 3:
{
obj* x_25; 
x_25 = lean::box(0);
x_19 = x_25;
goto lbl_20;
}
default:
{
obj* x_27; 
lean::dec(x_2);
x_27 = lean::box(0);
x_19 = x_27;
goto lbl_20;
}
}
lbl_20:
{
obj* x_28; obj* x_29; 
if (lean::obj_tag(x_1) == 0)
{
obj* x_31; 
x_31 = lean::box(3);
x_28 = x_1;
x_29 = x_31;
goto lbl_30;
}
else
{
obj* x_32; obj* x_34; 
x_32 = lean::cnstr_get(x_1, 0);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_1, 1);
lean::inc(x_34);
lean::dec(x_1);
x_28 = x_34;
x_29 = x_32;
goto lbl_30;
}
lbl_30:
{
obj* x_37; obj* x_38; 
if (lean::obj_tag(x_28) == 0)
{
obj* x_40; 
x_40 = lean::box(3);
x_37 = x_28;
x_38 = x_40;
goto lbl_39;
}
else
{
obj* x_41; obj* x_43; 
x_41 = lean::cnstr_get(x_28, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_28, 1);
lean::inc(x_43);
lean::dec(x_28);
x_37 = x_43;
x_38 = x_41;
goto lbl_39;
}
lbl_39:
{
obj* x_46; obj* x_47; obj* x_50; obj* x_51; obj* x_52; 
x_46 = l_lean_parser_command_notation__spec_notation__symbol_has__view;
x_47 = lean::cnstr_get(x_46, 0);
lean::inc(x_47);
lean::inc(x_47);
x_50 = lean::apply_1(x_47, x_38);
if (lean::obj_tag(x_37) == 0)
{
obj* x_54; 
x_54 = lean::box(3);
x_51 = x_37;
x_52 = x_54;
goto lbl_53;
}
else
{
obj* x_55; obj* x_57; 
x_55 = lean::cnstr_get(x_37, 0);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_37, 1);
lean::inc(x_57);
lean::dec(x_37);
x_51 = x_57;
x_52 = x_55;
goto lbl_53;
}
lbl_53:
{
obj* x_60; obj* x_61; obj* x_63; obj* x_64; obj* x_65; 
x_60 = l_lean_parser_command_notation__spec_fold__action__folder_has__view;
x_61 = lean::cnstr_get(x_60, 0);
lean::inc(x_61);
x_63 = lean::apply_1(x_61, x_52);
if (lean::obj_tag(x_51) == 0)
{
obj* x_67; 
x_67 = lean::box(3);
x_64 = x_51;
x_65 = x_67;
goto lbl_66;
}
else
{
obj* x_68; obj* x_70; 
x_68 = lean::cnstr_get(x_51, 0);
lean::inc(x_68);
x_70 = lean::cnstr_get(x_51, 1);
lean::inc(x_70);
lean::dec(x_51);
x_64 = x_70;
x_65 = x_68;
goto lbl_66;
}
lbl_66:
{
if (lean::obj_tag(x_64) == 0)
{
lean::dec(x_47);
if (lean::obj_tag(x_64) == 0)
{
obj* x_74; obj* x_75; obj* x_77; 
x_74 = lean::box(0);
x_75 = l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1___closed__1;
lean::inc(x_75);
x_77 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_77, 0, x_19);
lean::cnstr_set(x_77, 1, x_29);
lean::cnstr_set(x_77, 2, x_50);
lean::cnstr_set(x_77, 3, x_63);
lean::cnstr_set(x_77, 4, x_65);
lean::cnstr_set(x_77, 5, x_75);
lean::cnstr_set(x_77, 6, x_74);
return x_77;
}
else
{
obj* x_78; 
x_78 = lean::cnstr_get(x_64, 0);
lean::inc(x_78);
lean::dec(x_64);
switch (lean::obj_tag(x_78)) {
case 0:
{
obj* x_81; obj* x_84; obj* x_85; obj* x_87; 
x_81 = lean::cnstr_get(x_78, 0);
lean::inc(x_81);
lean::dec(x_78);
x_84 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_84, 0, x_81);
x_85 = l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1___closed__1;
lean::inc(x_85);
x_87 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_87, 0, x_19);
lean::cnstr_set(x_87, 1, x_29);
lean::cnstr_set(x_87, 2, x_50);
lean::cnstr_set(x_87, 3, x_63);
lean::cnstr_set(x_87, 4, x_65);
lean::cnstr_set(x_87, 5, x_85);
lean::cnstr_set(x_87, 6, x_84);
return x_87;
}
case 3:
{
obj* x_88; obj* x_89; obj* x_91; 
x_88 = lean::box(0);
x_89 = l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1___closed__1;
lean::inc(x_89);
x_91 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_91, 0, x_19);
lean::cnstr_set(x_91, 1, x_29);
lean::cnstr_set(x_91, 2, x_50);
lean::cnstr_set(x_91, 3, x_63);
lean::cnstr_set(x_91, 4, x_65);
lean::cnstr_set(x_91, 5, x_89);
lean::cnstr_set(x_91, 6, x_88);
return x_91;
}
default:
{
obj* x_93; obj* x_94; obj* x_96; 
lean::dec(x_78);
x_93 = lean::box(0);
x_94 = l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1___closed__1;
lean::inc(x_94);
x_96 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_96, 0, x_19);
lean::cnstr_set(x_96, 1, x_29);
lean::cnstr_set(x_96, 2, x_50);
lean::cnstr_set(x_96, 3, x_63);
lean::cnstr_set(x_96, 4, x_65);
lean::cnstr_set(x_96, 5, x_94);
lean::cnstr_set(x_96, 6, x_93);
return x_96;
}
}
}
}
else
{
obj* x_97; obj* x_99; obj* x_102; 
x_97 = lean::cnstr_get(x_64, 0);
lean::inc(x_97);
x_99 = lean::cnstr_get(x_64, 1);
lean::inc(x_99);
lean::dec(x_64);
x_102 = lean::apply_1(x_47, x_97);
if (lean::obj_tag(x_99) == 0)
{
obj* x_103; obj* x_104; 
x_103 = lean::box(0);
x_104 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_104, 0, x_19);
lean::cnstr_set(x_104, 1, x_29);
lean::cnstr_set(x_104, 2, x_50);
lean::cnstr_set(x_104, 3, x_63);
lean::cnstr_set(x_104, 4, x_65);
lean::cnstr_set(x_104, 5, x_102);
lean::cnstr_set(x_104, 6, x_103);
return x_104;
}
else
{
obj* x_105; 
x_105 = lean::cnstr_get(x_99, 0);
lean::inc(x_105);
lean::dec(x_99);
switch (lean::obj_tag(x_105)) {
case 0:
{
obj* x_108; obj* x_111; obj* x_112; 
x_108 = lean::cnstr_get(x_105, 0);
lean::inc(x_108);
lean::dec(x_105);
x_111 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_111, 0, x_108);
x_112 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_112, 0, x_19);
lean::cnstr_set(x_112, 1, x_29);
lean::cnstr_set(x_112, 2, x_50);
lean::cnstr_set(x_112, 3, x_63);
lean::cnstr_set(x_112, 4, x_65);
lean::cnstr_set(x_112, 5, x_102);
lean::cnstr_set(x_112, 6, x_111);
return x_112;
}
case 3:
{
obj* x_113; obj* x_114; 
x_113 = lean::box(0);
x_114 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_114, 0, x_19);
lean::cnstr_set(x_114, 1, x_29);
lean::cnstr_set(x_114, 2, x_50);
lean::cnstr_set(x_114, 3, x_63);
lean::cnstr_set(x_114, 4, x_65);
lean::cnstr_set(x_114, 5, x_102);
lean::cnstr_set(x_114, 6, x_113);
return x_114;
}
default:
{
obj* x_116; obj* x_117; 
lean::dec(x_105);
x_116 = lean::box(0);
x_117 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_117, 0, x_19);
lean::cnstr_set(x_117, 1, x_29);
lean::cnstr_set(x_117, 2, x_50);
lean::cnstr_set(x_117, 3, x_63);
lean::cnstr_set(x_117, 4, x_65);
lean::cnstr_set(x_117, 5, x_102);
lean::cnstr_set(x_117, 6, x_116);
return x_117;
}
}
}
}
}
}
}
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_16; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_25; obj* x_26; obj* x_27; obj* x_29; obj* x_30; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_44; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 3);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 4);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 5);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_0, 6);
lean::inc(x_13);
lean::dec(x_0);
x_16 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
lean::inc(x_16);
x_18 = l_option_map___rarg(x_16, x_1);
x_19 = lean::box(3);
x_20 = l_option_get__or__else___main___rarg(x_18, x_19);
x_21 = l_lean_parser_command_notation__spec_notation__symbol_has__view;
x_22 = lean::cnstr_get(x_21, 1);
lean::inc(x_22);
lean::inc(x_22);
x_25 = lean::apply_1(x_22, x_5);
x_26 = l_lean_parser_command_notation__spec_fold__action__folder_has__view;
x_27 = lean::cnstr_get(x_26, 1);
lean::inc(x_27);
x_29 = lean::apply_1(x_27, x_7);
x_30 = lean::apply_1(x_22, x_11);
lean::inc(x_16);
x_32 = l_option_map___rarg(x_16, x_13);
x_33 = l_option_get__or__else___main___rarg(x_32, x_19);
x_34 = lean::box(0);
x_35 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_35, 0, x_33);
lean::cnstr_set(x_35, 1, x_34);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_30);
lean::cnstr_set(x_36, 1, x_35);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_9);
lean::cnstr_set(x_37, 1, x_36);
x_38 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_38, 0, x_29);
lean::cnstr_set(x_38, 1, x_37);
x_39 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_39, 0, x_25);
lean::cnstr_set(x_39, 1, x_38);
x_40 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_40, 0, x_3);
lean::cnstr_set(x_40, 1, x_39);
x_41 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_41, 0, x_20);
lean::cnstr_set(x_41, 1, x_40);
x_42 = l_lean_parser_command_notation__spec_fold__action;
lean::inc(x_42);
x_44 = l_lean_parser_syntax_mk__node(x_42, x_41);
return x_44;
}
}
obj* _init_l_lean_parser_command_notation__spec_fold__action_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_notation__spec_fold__action_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_notation__spec_fold__action_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* l_reader__t_orelse___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_11; obj* x_12; obj* x_14; obj* x_16; 
lean::inc(x_5);
lean::inc(x_4);
lean::inc(x_3);
lean::inc(x_2);
x_11 = lean::apply_5(x_0, x_2, x_3, x_4, x_5, x_6);
x_12 = lean::cnstr_get(x_11, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_11, 1);
lean::inc(x_14);
if (lean::is_exclusive(x_11)) {
 lean::cnstr_release(x_11, 0);
 lean::cnstr_release(x_11, 1);
 x_16 = x_11;
} else {
 lean::dec(x_11);
 x_16 = lean::box(0);
}
if (lean::obj_tag(x_12) == 0)
{
obj* x_22; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_2);
if (lean::is_scalar(x_16)) {
 x_22 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_22 = x_16;
}
lean::cnstr_set(x_22, 0, x_12);
lean::cnstr_set(x_22, 1, x_14);
return x_22;
}
else
{
obj* x_23; uint8 x_25; 
x_23 = lean::cnstr_get(x_12, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get_scalar<uint8>(x_12, sizeof(void*)*1);
if (x_25 == 0)
{
obj* x_27; obj* x_28; obj* x_30; obj* x_33; obj* x_34; 
lean::dec(x_12);
x_27 = lean::apply_5(x_1, x_2, x_3, x_4, x_5, x_14);
x_28 = lean::cnstr_get(x_27, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_27, 1);
lean::inc(x_30);
lean::dec(x_27);
x_33 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_23, x_28);
if (lean::is_scalar(x_16)) {
 x_34 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_34 = x_16;
}
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_30);
return x_34;
}
else
{
obj* x_41; 
lean::dec(x_5);
lean::dec(x_23);
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_2);
if (lean::is_scalar(x_16)) {
 x_41 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_41 = x_16;
}
lean::cnstr_set(x_41, 0, x_12);
lean::cnstr_set(x_41, 1, x_14);
return x_41;
}
}
}
}
obj* l_reader__t_orelse___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__2(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_orelse___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__2___rarg), 7, 0);
return x_2;
}
}
obj* l_list_foldl___main___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; 
x_7 = lean::apply_5(x_0, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_13; 
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_1, 1);
lean::inc(x_10);
lean::dec(x_1);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_orelse___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__2___rarg), 7, 2);
lean::closure_set(x_13, 0, x_0);
lean::closure_set(x_13, 1, x_8);
x_0 = x_13;
x_1 = x_10;
goto _start;
}
}
}
obj* l_lean_parser_combinators_any__of___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_6; obj* x_7; obj* x_8; obj* x_11; 
x_6 = lean::box(0);
x_7 = l_lean_parser_combinators_any__of___rarg___closed__1;
x_8 = l_mjoin___rarg___closed__1;
lean::inc(x_8);
lean::inc(x_7);
x_11 = l_lean_parser_monad__parsec_error___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__4___rarg(x_7, x_8, x_6, x_6, x_1, x_2, x_3, x_4, x_5);
return x_11;
}
else
{
obj* x_12; obj* x_14; obj* x_17; 
x_12 = lean::cnstr_get(x_0, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_0, 1);
lean::inc(x_14);
lean::dec(x_0);
x_17 = l_list_foldl___main___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__3(x_12, x_14, x_1, x_2, x_3, x_4, x_5);
return x_17;
}
}
}
obj* _init_l_lean_parser_ident_parser___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__4___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("identifier");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_parser_ident_parser___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__4___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_7; obj* x_8; obj* x_10; obj* x_12; 
lean::dec(x_1);
lean::inc(x_2);
lean::inc(x_0);
x_7 = l_lean_parser_token(x_0, x_2, x_3);
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 x_12 = x_7;
} else {
 lean::dec(x_7);
 x_12 = lean::box(0);
}
if (lean::obj_tag(x_8) == 0)
{
obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_20; 
x_13 = lean::cnstr_get(x_8, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_8, 1);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_8, 2);
lean::inc(x_17);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 lean::cnstr_release(x_8, 2);
 x_19 = x_8;
} else {
 lean::dec(x_8);
 x_19 = lean::box(0);
}
switch (lean::obj_tag(x_13)) {
case 1:
{
obj* x_25; obj* x_27; obj* x_28; obj* x_30; obj* x_31; obj* x_33; obj* x_34; obj* x_35; 
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_25 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_25);
if (lean::is_scalar(x_19)) {
 x_27 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_27 = x_19;
}
lean::cnstr_set(x_27, 0, x_13);
lean::cnstr_set(x_27, 1, x_15);
lean::cnstr_set(x_27, 2, x_25);
x_28 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_27);
lean::inc(x_25);
x_30 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_25, x_28);
x_31 = l_lean_parser_ident_parser___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__4___rarg___closed__1;
lean::inc(x_31);
x_33 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_30, x_31);
x_34 = l_lean_parser_parsec__t_try__mk__res___rarg(x_33);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_10);
return x_35;
}
case 3:
{
obj* x_37; 
lean::dec(x_19);
x_37 = lean::box(0);
x_20 = x_37;
goto lbl_21;
}
default:
{
obj* x_40; 
lean::dec(x_13);
lean::dec(x_19);
x_40 = lean::box(0);
x_20 = x_40;
goto lbl_21;
}
}
lbl_21:
{
obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_48; obj* x_49; obj* x_51; obj* x_54; obj* x_55; obj* x_57; obj* x_59; obj* x_60; obj* x_61; 
lean::dec(x_20);
x_42 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_42, 0, x_2);
x_43 = lean::box(0);
x_44 = l_string_join___closed__1;
x_45 = l_lean_parser_ident_parser___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__4___rarg___closed__1;
lean::inc(x_45);
lean::inc(x_44);
x_48 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_44, x_45, x_42, x_43, x_0, x_15, x_10);
x_49 = lean::cnstr_get(x_48, 0);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_48, 1);
lean::inc(x_51);
lean::dec(x_48);
x_54 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_49);
x_55 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_55);
x_57 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_55, x_54);
lean::inc(x_45);
x_59 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_57, x_45);
x_60 = l_lean_parser_parsec__t_try__mk__res___rarg(x_59);
if (lean::is_scalar(x_12)) {
 x_61 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_61 = x_12;
}
lean::cnstr_set(x_61, 0, x_60);
lean::cnstr_set(x_61, 1, x_51);
return x_61;
}
}
else
{
obj* x_64; uint8 x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_72; obj* x_73; obj* x_75; obj* x_76; obj* x_77; 
lean::dec(x_0);
lean::dec(x_2);
x_64 = lean::cnstr_get(x_8, 0);
lean::inc(x_64);
x_66 = lean::cnstr_get_scalar<uint8>(x_8, sizeof(void*)*1);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 x_67 = x_8;
} else {
 lean::dec(x_8);
 x_67 = lean::box(0);
}
if (lean::is_scalar(x_67)) {
 x_68 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_68 = x_67;
}
lean::cnstr_set(x_68, 0, x_64);
lean::cnstr_set_scalar(x_68, sizeof(void*)*1, x_66);
x_69 = x_68;
x_70 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_70);
x_72 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_70, x_69);
x_73 = l_lean_parser_ident_parser___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__4___rarg___closed__1;
lean::inc(x_73);
x_75 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_72, x_73);
x_76 = l_lean_parser_parsec__t_try__mk__res___rarg(x_75);
if (lean::is_scalar(x_12)) {
 x_77 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_77 = x_12;
}
lean::cnstr_set(x_77, 0, x_76);
lean::cnstr_set(x_77, 1, x_10);
return x_77;
}
}
}
obj* l_lean_parser_ident_parser___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__4(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_ident_parser___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__4___rarg), 4, 0);
return x_2;
}
}
obj* _init_l_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_20; obj* x_21; obj* x_22; obj* x_24; obj* x_26; obj* x_27; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
x_0 = lean::mk_string("(");
x_1 = lean::mk_nat_obj(0u);
x_2 = l_lean_parser_symbol_tokens___rarg(x_0, x_1);
x_3 = lean::box(0);
x_4 = l_lean_parser_list_cons_tokens___rarg(x_3, x_3);
x_5 = l_lean_parser_list_cons_tokens___rarg(x_3, x_4);
x_6 = l_lean_parser_tokens___rarg(x_5);
x_7 = lean::mk_string(",");
x_8 = l_lean_parser_symbol_tokens___rarg(x_7, x_1);
x_9 = lean::mk_string(")");
x_10 = l_lean_parser_symbol_tokens___rarg(x_9, x_1);
x_11 = l_lean_parser_list_cons_tokens___rarg(x_10, x_3);
x_12 = l_lean_parser_term_parser_lean_parser_has__tokens___closed__1;
lean::inc(x_11);
lean::inc(x_12);
x_15 = l_lean_parser_list_cons_tokens___rarg(x_12, x_11);
x_16 = l_lean_parser_list_cons_tokens___rarg(x_8, x_15);
x_17 = l_lean_parser_list_cons_tokens___rarg(x_3, x_16);
x_18 = l_lean_parser_list_cons_tokens___rarg(x_3, x_17);
lean::inc(x_2);
x_20 = l_lean_parser_list_cons_tokens___rarg(x_2, x_18);
x_21 = l_lean_parser_tokens___rarg(x_20);
x_22 = l_lean_parser_command_notation__spec_notation__symbol_parser_lean_parser_has__tokens;
lean::inc(x_22);
x_24 = l_lean_parser_list_cons_tokens___rarg(x_22, x_11);
lean::inc(x_12);
x_26 = l_lean_parser_list_cons_tokens___rarg(x_12, x_24);
x_27 = l_lean_parser_list_cons_tokens___rarg(x_21, x_26);
lean::inc(x_22);
x_29 = l_lean_parser_list_cons_tokens___rarg(x_22, x_27);
x_30 = l_lean_parser_list_cons_tokens___rarg(x_6, x_29);
x_31 = l_lean_parser_list_cons_tokens___rarg(x_2, x_30);
x_32 = l_lean_parser_tokens___rarg(x_31);
return x_32;
}
}
obj* _init_l_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_28; obj* x_29; obj* x_30; obj* x_32; obj* x_33; obj* x_35; obj* x_36; obj* x_38; obj* x_39; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_59; 
x_0 = lean::mk_string("(");
x_1 = l_string_trim(x_0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_5, 0, x_1);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::mk_string("foldl");
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__or__ident___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__2), 6, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::mk_string("foldr");
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__or__ident___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__2), 6, 1);
lean::closure_set(x_9, 0, x_8);
x_10 = lean::box(0);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_7);
lean::cnstr_set(x_12, 1, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_any__of___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__1), 6, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::mk_string(",");
x_15 = l_string_trim(x_14);
lean::inc(x_15);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_17, 0, x_15);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_18, 0, x_15);
lean::closure_set(x_18, 1, x_4);
lean::closure_set(x_18, 2, x_17);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_parser), 6, 1);
lean::closure_set(x_19, 0, x_4);
x_20 = lean::mk_string(")");
x_21 = l_string_trim(x_20);
lean::inc(x_21);
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_23, 0, x_21);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_24, 0, x_21);
lean::closure_set(x_24, 1, x_4);
lean::closure_set(x_24, 2, x_23);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_10);
lean::inc(x_25);
lean::inc(x_19);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_19);
lean::cnstr_set(x_28, 1, x_25);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_18);
lean::cnstr_set(x_29, 1, x_28);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_ident_parser___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__4), 1, 0);
lean::inc(x_30);
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_30);
lean::cnstr_set(x_32, 1, x_29);
x_33 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_33, 0, x_30);
lean::cnstr_set(x_33, 1, x_32);
lean::inc(x_5);
x_35 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_35, 0, x_5);
lean::cnstr_set(x_35, 1, x_33);
x_36 = l_lean_parser_command_notation__spec_fold__action__folder;
lean::inc(x_36);
x_38 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1), 7, 2);
lean::closure_set(x_38, 0, x_36);
lean::closure_set(x_38, 1, x_35);
x_39 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_notation__symbol_parser), 5, 0);
lean::inc(x_39);
x_41 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_41, 0, x_39);
lean::cnstr_set(x_41, 1, x_25);
x_42 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_42, 0, x_19);
lean::cnstr_set(x_42, 1, x_41);
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_38);
lean::cnstr_set(x_43, 1, x_42);
x_44 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_44, 0, x_39);
lean::cnstr_set(x_44, 1, x_43);
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_13);
lean::cnstr_set(x_45, 1, x_44);
x_46 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_46, 0, x_5);
lean::cnstr_set(x_46, 1, x_45);
x_47 = l_lean_parser_term__parser__m_monad;
x_48 = l_lean_parser_term__parser__m_monad__except;
x_49 = l_lean_parser_term__parser__m_lean_parser_monad__parsec;
x_50 = l_lean_parser_term__parser__m_alternative;
x_51 = l_lean_parser_command_notation__spec_fold__action;
x_52 = l_lean_parser_command_notation__spec_fold__action_has__view;
lean::inc(x_52);
lean::inc(x_51);
lean::inc(x_50);
lean::inc(x_49);
lean::inc(x_48);
lean::inc(x_47);
x_59 = l_lean_parser_combinators_node_view___rarg(x_47, x_48, x_49, x_50, x_51, x_46, x_52);
return x_59;
}
}
obj* _init_l_lean_parser_command_notation__spec_fold__action_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_28; obj* x_29; obj* x_30; obj* x_32; obj* x_33; obj* x_35; obj* x_36; obj* x_38; obj* x_39; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_0 = lean::mk_string("(");
x_1 = l_string_trim(x_0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_5, 0, x_1);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::mk_string("foldl");
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__or__ident___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__2), 6, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::mk_string("foldr");
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__or__ident___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__2), 6, 1);
lean::closure_set(x_9, 0, x_8);
x_10 = lean::box(0);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_7);
lean::cnstr_set(x_12, 1, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_any__of___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__1), 6, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::mk_string(",");
x_15 = l_string_trim(x_14);
lean::inc(x_15);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_17, 0, x_15);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_18, 0, x_15);
lean::closure_set(x_18, 1, x_4);
lean::closure_set(x_18, 2, x_17);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_parser), 6, 1);
lean::closure_set(x_19, 0, x_4);
x_20 = lean::mk_string(")");
x_21 = l_string_trim(x_20);
lean::inc(x_21);
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_23, 0, x_21);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_24, 0, x_21);
lean::closure_set(x_24, 1, x_4);
lean::closure_set(x_24, 2, x_23);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_10);
lean::inc(x_25);
lean::inc(x_19);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_19);
lean::cnstr_set(x_28, 1, x_25);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_18);
lean::cnstr_set(x_29, 1, x_28);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_ident_parser___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__4), 1, 0);
lean::inc(x_30);
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_30);
lean::cnstr_set(x_32, 1, x_29);
x_33 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_33, 0, x_30);
lean::cnstr_set(x_33, 1, x_32);
lean::inc(x_5);
x_35 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_35, 0, x_5);
lean::cnstr_set(x_35, 1, x_33);
x_36 = l_lean_parser_command_notation__spec_fold__action__folder;
lean::inc(x_36);
x_38 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1), 7, 2);
lean::closure_set(x_38, 0, x_36);
lean::closure_set(x_38, 1, x_35);
x_39 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_notation__symbol_parser), 5, 0);
lean::inc(x_39);
x_41 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_41, 0, x_39);
lean::cnstr_set(x_41, 1, x_25);
x_42 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_42, 0, x_19);
lean::cnstr_set(x_42, 1, x_41);
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_38);
lean::cnstr_set(x_43, 1, x_42);
x_44 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_44, 0, x_39);
lean::cnstr_set(x_44, 1, x_43);
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_13);
lean::cnstr_set(x_45, 1, x_44);
x_46 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_46, 0, x_5);
lean::cnstr_set(x_46, 1, x_45);
return x_46;
}
}
obj* l_lean_parser_command_notation__spec_fold__action_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_9; 
x_5 = l_lean_parser_command_notation__spec_fold__action;
x_6 = l_lean_parser_command_notation__spec_fold__action_parser___closed__1;
lean::inc(x_6);
lean::inc(x_5);
x_9 = l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(x_5, x_6, x_0, x_1, x_2, x_3, x_4);
return x_9;
}
}
obj* _init_l_lean_parser_command_notation__spec_scoped__action() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("scoped_action");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* _init_l_lean_parser_command_notation__spec_scoped__action_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(0);
x_4 = lean::box(3);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; 
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_7; obj* x_10; 
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
lean::dec(x_1);
x_10 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_10, 0, x_7);
x_5 = x_10;
goto lbl_6;
}
case 3:
{
obj* x_11; 
x_11 = lean::box(0);
x_5 = x_11;
goto lbl_6;
}
default:
{
obj* x_13; 
lean::dec(x_1);
x_13 = lean::box(0);
x_5 = x_13;
goto lbl_6;
}
}
lbl_6:
{
obj* x_14; obj* x_15; 
if (lean::obj_tag(x_0) == 0)
{
obj* x_17; 
x_17 = lean::box(3);
x_14 = x_0;
x_15 = x_17;
goto lbl_16;
}
else
{
obj* x_18; obj* x_20; 
x_18 = lean::cnstr_get(x_0, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_0, 1);
lean::inc(x_20);
lean::dec(x_0);
x_14 = x_20;
x_15 = x_18;
goto lbl_16;
}
lbl_16:
{
obj* x_23; obj* x_24; 
if (lean::obj_tag(x_14) == 0)
{
obj* x_26; 
x_26 = lean::box(3);
x_23 = x_14;
x_24 = x_26;
goto lbl_25;
}
else
{
obj* x_27; obj* x_29; 
x_27 = lean::cnstr_get(x_14, 0);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_14, 1);
lean::inc(x_29);
lean::dec(x_14);
x_23 = x_29;
x_24 = x_27;
goto lbl_25;
}
lbl_25:
{
obj* x_32; obj* x_34; 
x_34 = l_lean_parser_syntax_as__node___main(x_24);
if (lean::obj_tag(x_34) == 0)
{
obj* x_35; 
x_35 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_35);
x_32 = x_35;
goto lbl_33;
}
else
{
obj* x_37; obj* x_39; obj* x_40; 
x_37 = lean::cnstr_get(x_34, 0);
lean::inc(x_37);
if (lean::is_exclusive(x_34)) {
 lean::cnstr_release(x_34, 0);
 x_39 = x_34;
} else {
 lean::dec(x_34);
 x_39 = lean::box(0);
}
x_40 = lean::cnstr_get(x_37, 1);
lean::inc(x_40);
lean::dec(x_37);
if (lean::obj_tag(x_40) == 0)
{
obj* x_44; 
lean::dec(x_39);
x_44 = lean::box(0);
x_32 = x_44;
goto lbl_33;
}
else
{
obj* x_45; obj* x_47; 
x_45 = lean::cnstr_get(x_40, 0);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_40, 1);
lean::inc(x_47);
lean::dec(x_40);
if (lean::obj_tag(x_47) == 0)
{
obj* x_50; obj* x_51; obj* x_53; obj* x_54; 
x_50 = l_lean_parser_command_notation__spec_precedence_has__view;
x_51 = lean::cnstr_get(x_50, 0);
lean::inc(x_51);
x_53 = lean::apply_1(x_51, x_45);
if (lean::is_scalar(x_39)) {
 x_54 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_54 = x_39;
}
lean::cnstr_set(x_54, 0, x_53);
x_32 = x_54;
goto lbl_33;
}
else
{
obj* x_58; 
lean::dec(x_45);
lean::dec(x_47);
lean::dec(x_39);
x_58 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_58);
x_32 = x_58;
goto lbl_33;
}
}
}
lbl_33:
{
obj* x_60; obj* x_61; 
if (lean::obj_tag(x_23) == 0)
{
obj* x_63; 
x_63 = lean::box(3);
x_60 = x_23;
x_61 = x_63;
goto lbl_62;
}
else
{
obj* x_64; obj* x_66; 
x_64 = lean::cnstr_get(x_23, 0);
lean::inc(x_64);
x_66 = lean::cnstr_get(x_23, 1);
lean::inc(x_66);
lean::dec(x_23);
x_60 = x_66;
x_61 = x_64;
goto lbl_62;
}
lbl_62:
{
obj* x_69; 
switch (lean::obj_tag(x_61)) {
case 1:
{
obj* x_71; 
x_71 = lean::cnstr_get(x_61, 0);
lean::inc(x_71);
lean::dec(x_61);
x_69 = x_71;
goto lbl_70;
}
case 3:
{
obj* x_74; 
x_74 = l_lean_parser_ident_parser_view___rarg___lambda__1___closed__1;
lean::inc(x_74);
x_69 = x_74;
goto lbl_70;
}
default:
{
obj* x_77; 
lean::dec(x_61);
x_77 = l_lean_parser_ident_parser_view___rarg___lambda__1___closed__1;
lean::inc(x_77);
x_69 = x_77;
goto lbl_70;
}
}
lbl_70:
{
obj* x_79; obj* x_80; obj* x_81; obj* x_83; obj* x_84; 
if (lean::obj_tag(x_60) == 0)
{
obj* x_86; 
x_86 = lean::box(3);
x_83 = x_60;
x_84 = x_86;
goto lbl_85;
}
else
{
obj* x_87; obj* x_89; 
x_87 = lean::cnstr_get(x_60, 0);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_60, 1);
lean::inc(x_89);
lean::dec(x_60);
x_83 = x_89;
x_84 = x_87;
goto lbl_85;
}
lbl_82:
{
if (lean::obj_tag(x_81) == 0)
{
obj* x_92; obj* x_93; 
x_92 = lean::box(0);
x_93 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_93, 0, x_5);
lean::cnstr_set(x_93, 1, x_15);
lean::cnstr_set(x_93, 2, x_32);
lean::cnstr_set(x_93, 3, x_69);
lean::cnstr_set(x_93, 4, x_79);
lean::cnstr_set(x_93, 5, x_80);
lean::cnstr_set(x_93, 6, x_92);
return x_93;
}
else
{
obj* x_94; 
x_94 = lean::cnstr_get(x_81, 0);
lean::inc(x_94);
lean::dec(x_81);
switch (lean::obj_tag(x_94)) {
case 0:
{
obj* x_97; obj* x_100; obj* x_101; 
x_97 = lean::cnstr_get(x_94, 0);
lean::inc(x_97);
lean::dec(x_94);
x_100 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_100, 0, x_97);
x_101 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_101, 0, x_5);
lean::cnstr_set(x_101, 1, x_15);
lean::cnstr_set(x_101, 2, x_32);
lean::cnstr_set(x_101, 3, x_69);
lean::cnstr_set(x_101, 4, x_79);
lean::cnstr_set(x_101, 5, x_80);
lean::cnstr_set(x_101, 6, x_100);
return x_101;
}
case 3:
{
obj* x_102; obj* x_103; 
x_102 = lean::box(0);
x_103 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_103, 0, x_5);
lean::cnstr_set(x_103, 1, x_15);
lean::cnstr_set(x_103, 2, x_32);
lean::cnstr_set(x_103, 3, x_69);
lean::cnstr_set(x_103, 4, x_79);
lean::cnstr_set(x_103, 5, x_80);
lean::cnstr_set(x_103, 6, x_102);
return x_103;
}
default:
{
obj* x_105; obj* x_106; 
lean::dec(x_94);
x_105 = lean::box(0);
x_106 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_106, 0, x_5);
lean::cnstr_set(x_106, 1, x_15);
lean::cnstr_set(x_106, 2, x_32);
lean::cnstr_set(x_106, 3, x_69);
lean::cnstr_set(x_106, 4, x_79);
lean::cnstr_set(x_106, 5, x_80);
lean::cnstr_set(x_106, 6, x_105);
return x_106;
}
}
}
}
lbl_85:
{
obj* x_107; 
switch (lean::obj_tag(x_84)) {
case 0:
{
obj* x_109; obj* x_112; 
x_109 = lean::cnstr_get(x_84, 0);
lean::inc(x_109);
lean::dec(x_84);
x_112 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_112, 0, x_109);
if (lean::obj_tag(x_83) == 0)
{
x_107 = x_112;
goto lbl_108;
}
else
{
obj* x_113; obj* x_115; 
x_113 = lean::cnstr_get(x_83, 0);
lean::inc(x_113);
x_115 = lean::cnstr_get(x_83, 1);
lean::inc(x_115);
lean::dec(x_83);
x_79 = x_112;
x_80 = x_113;
x_81 = x_115;
goto lbl_82;
}
}
case 3:
{
obj* x_118; 
x_118 = lean::box(0);
if (lean::obj_tag(x_83) == 0)
{
x_107 = x_118;
goto lbl_108;
}
else
{
obj* x_119; obj* x_121; 
x_119 = lean::cnstr_get(x_83, 0);
lean::inc(x_119);
x_121 = lean::cnstr_get(x_83, 1);
lean::inc(x_121);
lean::dec(x_83);
x_79 = x_118;
x_80 = x_119;
x_81 = x_121;
goto lbl_82;
}
}
default:
{
obj* x_125; 
lean::dec(x_84);
x_125 = lean::box(0);
if (lean::obj_tag(x_83) == 0)
{
x_107 = x_125;
goto lbl_108;
}
else
{
obj* x_126; obj* x_128; 
x_126 = lean::cnstr_get(x_83, 0);
lean::inc(x_126);
x_128 = lean::cnstr_get(x_83, 1);
lean::inc(x_128);
lean::dec(x_83);
x_79 = x_125;
x_80 = x_126;
x_81 = x_128;
goto lbl_82;
}
}
}
lbl_108:
{
if (lean::obj_tag(x_83) == 0)
{
obj* x_131; obj* x_132; obj* x_133; 
x_131 = lean::box(0);
x_132 = lean::box(3);
x_133 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_133, 0, x_5);
lean::cnstr_set(x_133, 1, x_15);
lean::cnstr_set(x_133, 2, x_32);
lean::cnstr_set(x_133, 3, x_69);
lean::cnstr_set(x_133, 4, x_107);
lean::cnstr_set(x_133, 5, x_132);
lean::cnstr_set(x_133, 6, x_131);
return x_133;
}
else
{
obj* x_134; 
x_134 = lean::cnstr_get(x_83, 0);
lean::inc(x_134);
lean::dec(x_83);
switch (lean::obj_tag(x_134)) {
case 0:
{
obj* x_137; obj* x_140; obj* x_141; obj* x_142; 
x_137 = lean::cnstr_get(x_134, 0);
lean::inc(x_137);
lean::dec(x_134);
x_140 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_140, 0, x_137);
x_141 = lean::box(3);
x_142 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_142, 0, x_5);
lean::cnstr_set(x_142, 1, x_15);
lean::cnstr_set(x_142, 2, x_32);
lean::cnstr_set(x_142, 3, x_69);
lean::cnstr_set(x_142, 4, x_107);
lean::cnstr_set(x_142, 5, x_141);
lean::cnstr_set(x_142, 6, x_140);
return x_142;
}
case 3:
{
obj* x_143; obj* x_144; obj* x_145; 
x_143 = lean::box(0);
x_144 = lean::box(3);
x_145 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_145, 0, x_5);
lean::cnstr_set(x_145, 1, x_15);
lean::cnstr_set(x_145, 2, x_32);
lean::cnstr_set(x_145, 3, x_69);
lean::cnstr_set(x_145, 4, x_107);
lean::cnstr_set(x_145, 5, x_144);
lean::cnstr_set(x_145, 6, x_143);
return x_145;
}
default:
{
obj* x_147; obj* x_148; obj* x_149; 
lean::dec(x_134);
x_147 = lean::box(0);
x_148 = lean::box(3);
x_149 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_149, 0, x_5);
lean::cnstr_set(x_149, 1, x_15);
lean::cnstr_set(x_149, 2, x_32);
lean::cnstr_set(x_149, 3, x_69);
lean::cnstr_set(x_149, 4, x_107);
lean::cnstr_set(x_149, 5, x_148);
lean::cnstr_set(x_149, 6, x_147);
return x_149;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_scoped__action_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_command_notation__spec_scoped__action_has__view_x_27___lambda__1___closed__1;
lean::inc(x_5);
return x_5;
}
else
{
obj* x_7; obj* x_10; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::dec(x_7);
if (lean::obj_tag(x_10) == 0)
{
if (lean::obj_tag(x_10) == 0)
{
obj* x_13; 
x_13 = lean::box(3);
x_1 = x_10;
x_2 = x_13;
goto lbl_3;
}
else
{
obj* x_14; obj* x_16; 
x_14 = lean::cnstr_get(x_10, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_10, 1);
lean::inc(x_16);
lean::dec(x_10);
x_1 = x_16;
x_2 = x_14;
goto lbl_3;
}
}
else
{
obj* x_19; obj* x_21; obj* x_24; 
x_19 = lean::cnstr_get(x_10, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_10, 1);
lean::inc(x_21);
lean::dec(x_10);
x_24 = l_lean_parser_syntax_as__node___main(x_19);
if (lean::obj_tag(x_24) == 0)
{
if (lean::obj_tag(x_21) == 0)
{
obj* x_25; 
x_25 = lean::box(3);
x_1 = x_21;
x_2 = x_25;
goto lbl_3;
}
else
{
obj* x_26; obj* x_28; 
x_26 = lean::cnstr_get(x_21, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_21, 1);
lean::inc(x_28);
lean::dec(x_21);
x_1 = x_28;
x_2 = x_26;
goto lbl_3;
}
}
else
{
obj* x_31; obj* x_34; obj* x_37; 
x_31 = lean::cnstr_get(x_24, 0);
lean::inc(x_31);
lean::dec(x_24);
x_34 = lean::cnstr_get(x_31, 1);
lean::inc(x_34);
lean::dec(x_31);
x_37 = l_list_append___rarg(x_34, x_21);
if (lean::obj_tag(x_37) == 0)
{
obj* x_38; 
x_38 = lean::box(3);
x_1 = x_37;
x_2 = x_38;
goto lbl_3;
}
else
{
obj* x_39; obj* x_41; 
x_39 = lean::cnstr_get(x_37, 0);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_37, 1);
lean::inc(x_41);
lean::dec(x_37);
x_1 = x_41;
x_2 = x_39;
goto lbl_3;
}
}
}
}
lbl_3:
{
obj* x_44; 
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_46; obj* x_49; 
x_46 = lean::cnstr_get(x_2, 0);
lean::inc(x_46);
lean::dec(x_2);
x_49 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_49, 0, x_46);
x_44 = x_49;
goto lbl_45;
}
case 3:
{
obj* x_50; 
x_50 = lean::box(0);
x_44 = x_50;
goto lbl_45;
}
default:
{
obj* x_52; 
lean::dec(x_2);
x_52 = lean::box(0);
x_44 = x_52;
goto lbl_45;
}
}
lbl_45:
{
obj* x_53; obj* x_54; 
if (lean::obj_tag(x_1) == 0)
{
obj* x_56; 
x_56 = lean::box(3);
x_53 = x_1;
x_54 = x_56;
goto lbl_55;
}
else
{
obj* x_57; obj* x_59; 
x_57 = lean::cnstr_get(x_1, 0);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_1, 1);
lean::inc(x_59);
lean::dec(x_1);
x_53 = x_59;
x_54 = x_57;
goto lbl_55;
}
lbl_55:
{
obj* x_62; obj* x_63; 
if (lean::obj_tag(x_53) == 0)
{
obj* x_65; 
x_65 = lean::box(3);
x_62 = x_53;
x_63 = x_65;
goto lbl_64;
}
else
{
obj* x_66; obj* x_68; 
x_66 = lean::cnstr_get(x_53, 0);
lean::inc(x_66);
x_68 = lean::cnstr_get(x_53, 1);
lean::inc(x_68);
lean::dec(x_53);
x_62 = x_68;
x_63 = x_66;
goto lbl_64;
}
lbl_64:
{
obj* x_71; obj* x_73; 
x_73 = l_lean_parser_syntax_as__node___main(x_63);
if (lean::obj_tag(x_73) == 0)
{
obj* x_74; 
x_74 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_74);
x_71 = x_74;
goto lbl_72;
}
else
{
obj* x_76; obj* x_78; obj* x_79; 
x_76 = lean::cnstr_get(x_73, 0);
lean::inc(x_76);
if (lean::is_exclusive(x_73)) {
 lean::cnstr_release(x_73, 0);
 x_78 = x_73;
} else {
 lean::dec(x_73);
 x_78 = lean::box(0);
}
x_79 = lean::cnstr_get(x_76, 1);
lean::inc(x_79);
lean::dec(x_76);
if (lean::obj_tag(x_79) == 0)
{
obj* x_83; 
lean::dec(x_78);
x_83 = lean::box(0);
x_71 = x_83;
goto lbl_72;
}
else
{
obj* x_84; obj* x_86; 
x_84 = lean::cnstr_get(x_79, 0);
lean::inc(x_84);
x_86 = lean::cnstr_get(x_79, 1);
lean::inc(x_86);
lean::dec(x_79);
if (lean::obj_tag(x_86) == 0)
{
obj* x_89; obj* x_90; obj* x_92; obj* x_93; 
x_89 = l_lean_parser_command_notation__spec_precedence_has__view;
x_90 = lean::cnstr_get(x_89, 0);
lean::inc(x_90);
x_92 = lean::apply_1(x_90, x_84);
if (lean::is_scalar(x_78)) {
 x_93 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_93 = x_78;
}
lean::cnstr_set(x_93, 0, x_92);
x_71 = x_93;
goto lbl_72;
}
else
{
obj* x_97; 
lean::dec(x_86);
lean::dec(x_78);
lean::dec(x_84);
x_97 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_97);
x_71 = x_97;
goto lbl_72;
}
}
}
lbl_72:
{
obj* x_99; obj* x_100; 
if (lean::obj_tag(x_62) == 0)
{
obj* x_102; 
x_102 = lean::box(3);
x_99 = x_62;
x_100 = x_102;
goto lbl_101;
}
else
{
obj* x_103; obj* x_105; 
x_103 = lean::cnstr_get(x_62, 0);
lean::inc(x_103);
x_105 = lean::cnstr_get(x_62, 1);
lean::inc(x_105);
lean::dec(x_62);
x_99 = x_105;
x_100 = x_103;
goto lbl_101;
}
lbl_101:
{
obj* x_108; 
switch (lean::obj_tag(x_100)) {
case 1:
{
obj* x_110; 
x_110 = lean::cnstr_get(x_100, 0);
lean::inc(x_110);
lean::dec(x_100);
x_108 = x_110;
goto lbl_109;
}
case 3:
{
obj* x_113; 
x_113 = l_lean_parser_ident_parser_view___rarg___lambda__1___closed__1;
lean::inc(x_113);
x_108 = x_113;
goto lbl_109;
}
default:
{
obj* x_116; 
lean::dec(x_100);
x_116 = l_lean_parser_ident_parser_view___rarg___lambda__1___closed__1;
lean::inc(x_116);
x_108 = x_116;
goto lbl_109;
}
}
lbl_109:
{
obj* x_118; obj* x_119; obj* x_120; obj* x_122; obj* x_123; 
if (lean::obj_tag(x_99) == 0)
{
obj* x_125; 
x_125 = lean::box(3);
x_122 = x_99;
x_123 = x_125;
goto lbl_124;
}
else
{
obj* x_126; obj* x_128; 
x_126 = lean::cnstr_get(x_99, 0);
lean::inc(x_126);
x_128 = lean::cnstr_get(x_99, 1);
lean::inc(x_128);
lean::dec(x_99);
x_122 = x_128;
x_123 = x_126;
goto lbl_124;
}
lbl_121:
{
if (lean::obj_tag(x_120) == 0)
{
obj* x_131; obj* x_132; 
x_131 = lean::box(0);
x_132 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_132, 0, x_44);
lean::cnstr_set(x_132, 1, x_54);
lean::cnstr_set(x_132, 2, x_71);
lean::cnstr_set(x_132, 3, x_108);
lean::cnstr_set(x_132, 4, x_118);
lean::cnstr_set(x_132, 5, x_119);
lean::cnstr_set(x_132, 6, x_131);
return x_132;
}
else
{
obj* x_133; 
x_133 = lean::cnstr_get(x_120, 0);
lean::inc(x_133);
lean::dec(x_120);
switch (lean::obj_tag(x_133)) {
case 0:
{
obj* x_136; obj* x_139; obj* x_140; 
x_136 = lean::cnstr_get(x_133, 0);
lean::inc(x_136);
lean::dec(x_133);
x_139 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_139, 0, x_136);
x_140 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_140, 0, x_44);
lean::cnstr_set(x_140, 1, x_54);
lean::cnstr_set(x_140, 2, x_71);
lean::cnstr_set(x_140, 3, x_108);
lean::cnstr_set(x_140, 4, x_118);
lean::cnstr_set(x_140, 5, x_119);
lean::cnstr_set(x_140, 6, x_139);
return x_140;
}
case 3:
{
obj* x_141; obj* x_142; 
x_141 = lean::box(0);
x_142 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_142, 0, x_44);
lean::cnstr_set(x_142, 1, x_54);
lean::cnstr_set(x_142, 2, x_71);
lean::cnstr_set(x_142, 3, x_108);
lean::cnstr_set(x_142, 4, x_118);
lean::cnstr_set(x_142, 5, x_119);
lean::cnstr_set(x_142, 6, x_141);
return x_142;
}
default:
{
obj* x_144; obj* x_145; 
lean::dec(x_133);
x_144 = lean::box(0);
x_145 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_145, 0, x_44);
lean::cnstr_set(x_145, 1, x_54);
lean::cnstr_set(x_145, 2, x_71);
lean::cnstr_set(x_145, 3, x_108);
lean::cnstr_set(x_145, 4, x_118);
lean::cnstr_set(x_145, 5, x_119);
lean::cnstr_set(x_145, 6, x_144);
return x_145;
}
}
}
}
lbl_124:
{
obj* x_146; 
switch (lean::obj_tag(x_123)) {
case 0:
{
obj* x_148; obj* x_151; 
x_148 = lean::cnstr_get(x_123, 0);
lean::inc(x_148);
lean::dec(x_123);
x_151 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_151, 0, x_148);
if (lean::obj_tag(x_122) == 0)
{
x_146 = x_151;
goto lbl_147;
}
else
{
obj* x_152; obj* x_154; 
x_152 = lean::cnstr_get(x_122, 0);
lean::inc(x_152);
x_154 = lean::cnstr_get(x_122, 1);
lean::inc(x_154);
lean::dec(x_122);
x_118 = x_151;
x_119 = x_152;
x_120 = x_154;
goto lbl_121;
}
}
case 3:
{
obj* x_157; 
x_157 = lean::box(0);
if (lean::obj_tag(x_122) == 0)
{
x_146 = x_157;
goto lbl_147;
}
else
{
obj* x_158; obj* x_160; 
x_158 = lean::cnstr_get(x_122, 0);
lean::inc(x_158);
x_160 = lean::cnstr_get(x_122, 1);
lean::inc(x_160);
lean::dec(x_122);
x_118 = x_157;
x_119 = x_158;
x_120 = x_160;
goto lbl_121;
}
}
default:
{
obj* x_164; 
lean::dec(x_123);
x_164 = lean::box(0);
if (lean::obj_tag(x_122) == 0)
{
x_146 = x_164;
goto lbl_147;
}
else
{
obj* x_165; obj* x_167; 
x_165 = lean::cnstr_get(x_122, 0);
lean::inc(x_165);
x_167 = lean::cnstr_get(x_122, 1);
lean::inc(x_167);
lean::dec(x_122);
x_118 = x_164;
x_119 = x_165;
x_120 = x_167;
goto lbl_121;
}
}
}
lbl_147:
{
if (lean::obj_tag(x_122) == 0)
{
obj* x_170; obj* x_171; obj* x_172; 
x_170 = lean::box(0);
x_171 = lean::box(3);
x_172 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_172, 0, x_44);
lean::cnstr_set(x_172, 1, x_54);
lean::cnstr_set(x_172, 2, x_71);
lean::cnstr_set(x_172, 3, x_108);
lean::cnstr_set(x_172, 4, x_146);
lean::cnstr_set(x_172, 5, x_171);
lean::cnstr_set(x_172, 6, x_170);
return x_172;
}
else
{
obj* x_173; 
x_173 = lean::cnstr_get(x_122, 0);
lean::inc(x_173);
lean::dec(x_122);
switch (lean::obj_tag(x_173)) {
case 0:
{
obj* x_176; obj* x_179; obj* x_180; obj* x_181; 
x_176 = lean::cnstr_get(x_173, 0);
lean::inc(x_176);
lean::dec(x_173);
x_179 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_179, 0, x_176);
x_180 = lean::box(3);
x_181 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_181, 0, x_44);
lean::cnstr_set(x_181, 1, x_54);
lean::cnstr_set(x_181, 2, x_71);
lean::cnstr_set(x_181, 3, x_108);
lean::cnstr_set(x_181, 4, x_146);
lean::cnstr_set(x_181, 5, x_180);
lean::cnstr_set(x_181, 6, x_179);
return x_181;
}
case 3:
{
obj* x_182; obj* x_183; obj* x_184; 
x_182 = lean::box(0);
x_183 = lean::box(3);
x_184 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_184, 0, x_44);
lean::cnstr_set(x_184, 1, x_54);
lean::cnstr_set(x_184, 2, x_71);
lean::cnstr_set(x_184, 3, x_108);
lean::cnstr_set(x_184, 4, x_146);
lean::cnstr_set(x_184, 5, x_183);
lean::cnstr_set(x_184, 6, x_182);
return x_184;
}
default:
{
obj* x_186; obj* x_187; obj* x_188; 
lean::dec(x_173);
x_186 = lean::box(0);
x_187 = lean::box(3);
x_188 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_188, 0, x_44);
lean::cnstr_set(x_188, 1, x_54);
lean::cnstr_set(x_188, 2, x_71);
lean::cnstr_set(x_188, 3, x_108);
lean::cnstr_set(x_188, 4, x_146);
lean::cnstr_set(x_188, 5, x_187);
lean::cnstr_set(x_188, 6, x_186);
return x_188;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_scoped__action_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_16; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_26; obj* x_27; obj* x_29; obj* x_30; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 3);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 4);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 5);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_0, 6);
lean::inc(x_13);
lean::dec(x_0);
x_16 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
lean::inc(x_16);
x_18 = l_option_map___rarg(x_16, x_1);
x_19 = lean::box(3);
x_20 = l_option_get__or__else___main___rarg(x_18, x_19);
x_21 = lean::box(0);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_3);
lean::cnstr_set(x_22, 1, x_21);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_20);
lean::cnstr_set(x_23, 1, x_22);
x_24 = l_lean_parser_no__kind;
lean::inc(x_24);
x_26 = l_lean_parser_syntax_mk__node(x_24, x_23);
x_27 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_27, 0, x_7);
lean::inc(x_16);
x_29 = l_option_map___rarg(x_16, x_9);
x_30 = l_option_get__or__else___main___rarg(x_29, x_19);
lean::inc(x_16);
x_32 = l_option_map___rarg(x_16, x_13);
x_33 = l_option_get__or__else___main___rarg(x_32, x_19);
x_34 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_21);
x_35 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_35, 0, x_11);
lean::cnstr_set(x_35, 1, x_34);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_30);
lean::cnstr_set(x_36, 1, x_35);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_27);
lean::cnstr_set(x_37, 1, x_36);
if (lean::obj_tag(x_5) == 0)
{
obj* x_38; obj* x_40; obj* x_41; obj* x_42; obj* x_44; 
x_38 = l_lean_parser_combinators_many___rarg___closed__1;
lean::inc(x_38);
x_40 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_40, 0, x_38);
lean::cnstr_set(x_40, 1, x_37);
x_41 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_41, 0, x_26);
lean::cnstr_set(x_41, 1, x_40);
x_42 = l_lean_parser_command_notation__spec_scoped__action;
lean::inc(x_42);
x_44 = l_lean_parser_syntax_mk__node(x_42, x_41);
return x_44;
}
else
{
obj* x_45; obj* x_48; obj* x_49; obj* x_51; obj* x_52; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_59; 
x_45 = lean::cnstr_get(x_5, 0);
lean::inc(x_45);
lean::dec(x_5);
x_48 = l_lean_parser_command_notation__spec_precedence_has__view;
x_49 = lean::cnstr_get(x_48, 1);
lean::inc(x_49);
x_51 = lean::apply_1(x_49, x_45);
x_52 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_21);
lean::inc(x_24);
x_54 = l_lean_parser_syntax_mk__node(x_24, x_52);
x_55 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_55, 0, x_54);
lean::cnstr_set(x_55, 1, x_37);
x_56 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_56, 0, x_26);
lean::cnstr_set(x_56, 1, x_55);
x_57 = l_lean_parser_command_notation__spec_scoped__action;
lean::inc(x_57);
x_59 = l_lean_parser_syntax_mk__node(x_57, x_56);
return x_59;
}
}
}
obj* _init_l_lean_parser_command_notation__spec_scoped__action_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_scoped__action_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_scoped__action_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_notation__spec_scoped__action_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_notation__spec_scoped__action_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_parser_command_notation__spec_action__kind() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("action_kind");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* _init_l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(3);
x_4 = lean::mk_nat_obj(0u);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
obj* x_7; uint8 x_8; 
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_dec_eq(x_1, x_7);
if (x_8 == 0)
{
obj* x_9; uint8 x_10; 
x_9 = lean::mk_nat_obj(2u);
x_10 = lean::nat_dec_eq(x_1, x_9);
lean::dec(x_1);
if (x_10 == 0)
{
obj* x_12; obj* x_13; obj* x_15; obj* x_16; 
x_12 = l_lean_parser_command_notation__spec_fold__action_has__view;
x_13 = lean::cnstr_get(x_12, 0);
lean::inc(x_13);
x_15 = lean::apply_1(x_13, x_0);
x_16 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_16, 0, x_15);
return x_16;
}
else
{
obj* x_17; obj* x_18; obj* x_20; obj* x_21; 
x_17 = l_lean_parser_command_notation__spec_scoped__action_has__view;
x_18 = lean::cnstr_get(x_17, 0);
lean::inc(x_18);
x_20 = lean::apply_1(x_18, x_0);
x_21 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_21, 0, x_20);
return x_21;
}
}
else
{
obj* x_23; 
lean::dec(x_1);
x_23 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_23, 0, x_0);
return x_23;
}
}
else
{
obj* x_25; obj* x_26; obj* x_28; obj* x_29; 
lean::dec(x_1);
x_25 = l_lean_parser_command_notation__spec_precedence__term_has__view;
x_26 = lean::cnstr_get(x_25, 0);
lean::inc(x_26);
x_28 = lean::apply_1(x_26, x_0);
x_29 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_29, 0, x_28);
return x_29;
}
}
}
}
obj* _init_l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("action_kind");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__1___closed__1;
lean::inc(x_5);
return x_5;
}
else
{
obj* x_7; obj* x_10; obj* x_12; obj* x_15; uint8 x_16; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::cnstr_get(x_7, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_7, 1);
lean::inc(x_12);
lean::dec(x_7);
x_15 = l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__1___closed__2;
x_16 = lean_name_dec_eq(x_10, x_15);
lean::dec(x_10);
if (x_16 == 0)
{
obj* x_19; 
lean::dec(x_12);
x_19 = l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__1___closed__1;
lean::inc(x_19);
return x_19;
}
else
{
if (lean::obj_tag(x_12) == 0)
{
obj* x_21; 
x_21 = l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__1___closed__1;
lean::inc(x_21);
return x_21;
}
else
{
obj* x_23; obj* x_25; 
x_23 = lean::cnstr_get(x_12, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_12, 1);
lean::inc(x_25);
lean::dec(x_12);
if (lean::obj_tag(x_25) == 0)
{
obj* x_28; 
x_28 = l_lean_parser_syntax_as__node___main(x_23);
if (lean::obj_tag(x_28) == 0)
{
obj* x_29; 
x_29 = l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__1___closed__1;
lean::inc(x_29);
return x_29;
}
else
{
obj* x_31; obj* x_34; obj* x_36; 
x_31 = lean::cnstr_get(x_28, 0);
lean::inc(x_31);
lean::dec(x_28);
x_34 = lean::cnstr_get(x_31, 0);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_31, 1);
lean::inc(x_36);
lean::dec(x_31);
switch (lean::obj_tag(x_34)) {
case 0:
{
obj* x_40; 
lean::dec(x_36);
x_40 = l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__1___closed__1;
lean::inc(x_40);
return x_40;
}
case 1:
{
obj* x_44; 
lean::dec(x_36);
lean::dec(x_34);
x_44 = l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__1___closed__1;
lean::inc(x_44);
return x_44;
}
default:
{
obj* x_46; obj* x_48; obj* x_51; uint8 x_52; 
x_46 = lean::cnstr_get(x_34, 0);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_34, 1);
lean::inc(x_48);
lean::dec(x_34);
x_51 = lean::box(0);
x_52 = lean_name_dec_eq(x_46, x_51);
lean::dec(x_46);
if (x_52 == 0)
{
obj* x_56; 
lean::dec(x_36);
lean::dec(x_48);
x_56 = l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__1___closed__1;
lean::inc(x_56);
return x_56;
}
else
{
if (lean::obj_tag(x_36) == 0)
{
obj* x_59; 
lean::dec(x_48);
x_59 = l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__1___closed__1;
lean::inc(x_59);
return x_59;
}
else
{
obj* x_61; obj* x_63; 
x_61 = lean::cnstr_get(x_36, 0);
lean::inc(x_61);
x_63 = lean::cnstr_get(x_36, 1);
lean::inc(x_63);
lean::dec(x_36);
if (lean::obj_tag(x_63) == 0)
{
x_1 = x_61;
x_2 = x_48;
goto lbl_3;
}
else
{
obj* x_69; 
lean::dec(x_61);
lean::dec(x_63);
lean::dec(x_48);
x_69 = l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__1___closed__1;
lean::inc(x_69);
return x_69;
}
}
}
}
}
}
}
else
{
obj* x_73; 
lean::dec(x_23);
lean::dec(x_25);
x_73 = l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__1___closed__1;
lean::inc(x_73);
return x_73;
}
}
}
}
lbl_3:
{
obj* x_75; uint8 x_76; 
x_75 = lean::mk_nat_obj(0u);
x_76 = lean::nat_dec_eq(x_2, x_75);
if (x_76 == 0)
{
obj* x_77; uint8 x_78; 
x_77 = lean::mk_nat_obj(1u);
x_78 = lean::nat_dec_eq(x_2, x_77);
if (x_78 == 0)
{
obj* x_79; uint8 x_80; 
x_79 = lean::mk_nat_obj(2u);
x_80 = lean::nat_dec_eq(x_2, x_79);
lean::dec(x_2);
if (x_80 == 0)
{
obj* x_82; obj* x_83; obj* x_85; obj* x_86; 
x_82 = l_lean_parser_command_notation__spec_fold__action_has__view;
x_83 = lean::cnstr_get(x_82, 0);
lean::inc(x_83);
x_85 = lean::apply_1(x_83, x_1);
x_86 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_86, 0, x_85);
return x_86;
}
else
{
obj* x_87; obj* x_88; obj* x_90; obj* x_91; 
x_87 = l_lean_parser_command_notation__spec_scoped__action_has__view;
x_88 = lean::cnstr_get(x_87, 0);
lean::inc(x_88);
x_90 = lean::apply_1(x_88, x_1);
x_91 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_91, 0, x_90);
return x_91;
}
}
else
{
obj* x_93; 
lean::dec(x_2);
x_93 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_93, 0, x_1);
return x_93;
}
}
else
{
obj* x_95; obj* x_96; obj* x_98; obj* x_99; 
lean::dec(x_2);
x_95 = l_lean_parser_command_notation__spec_precedence__term_has__view;
x_96 = lean::cnstr_get(x_95, 0);
lean::inc(x_96);
x_98 = lean::apply_1(x_96, x_1);
x_99 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_99, 0, x_98);
return x_99;
}
}
}
}
obj* l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_2; obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_16; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_lean_parser_command_notation__spec_precedence__term_has__view;
x_6 = lean::cnstr_get(x_5, 1);
lean::inc(x_6);
x_8 = lean::apply_1(x_6, x_2);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_1);
x_10 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__1;
lean::inc(x_10);
x_12 = l_lean_parser_syntax_mk__node(x_10, x_9);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_1);
x_14 = l_lean_parser_command_notation__spec_action__kind;
lean::inc(x_14);
x_16 = l_lean_parser_syntax_mk__node(x_14, x_13);
return x_16;
}
case 1:
{
obj* x_17; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_27; 
x_17 = lean::cnstr_get(x_0, 0);
lean::inc(x_17);
lean::dec(x_0);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_17);
lean::cnstr_set(x_20, 1, x_1);
x_21 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__2;
lean::inc(x_21);
x_23 = l_lean_parser_syntax_mk__node(x_21, x_20);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_1);
x_25 = l_lean_parser_command_notation__spec_action__kind;
lean::inc(x_25);
x_27 = l_lean_parser_syntax_mk__node(x_25, x_24);
return x_27;
}
case 2:
{
obj* x_28; obj* x_31; obj* x_32; obj* x_34; obj* x_35; obj* x_36; obj* x_38; obj* x_39; obj* x_40; obj* x_42; 
x_28 = lean::cnstr_get(x_0, 0);
lean::inc(x_28);
lean::dec(x_0);
x_31 = l_lean_parser_command_notation__spec_scoped__action_has__view;
x_32 = lean::cnstr_get(x_31, 1);
lean::inc(x_32);
x_34 = lean::apply_1(x_32, x_28);
x_35 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_1);
x_36 = l_lean_parser_number_has__view_x_27___lambda__2___closed__1;
lean::inc(x_36);
x_38 = l_lean_parser_syntax_mk__node(x_36, x_35);
x_39 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_1);
x_40 = l_lean_parser_command_notation__spec_action__kind;
lean::inc(x_40);
x_42 = l_lean_parser_syntax_mk__node(x_40, x_39);
return x_42;
}
default:
{
obj* x_43; obj* x_46; obj* x_47; obj* x_49; obj* x_50; obj* x_51; obj* x_53; obj* x_54; obj* x_55; obj* x_57; 
x_43 = lean::cnstr_get(x_0, 0);
lean::inc(x_43);
lean::dec(x_0);
x_46 = l_lean_parser_command_notation__spec_fold__action_has__view;
x_47 = lean::cnstr_get(x_46, 1);
lean::inc(x_47);
x_49 = lean::apply_1(x_47, x_43);
x_50 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_50, 0, x_49);
lean::cnstr_set(x_50, 1, x_1);
x_51 = l_lean_parser_number_has__view_x_27___lambda__2___closed__2;
lean::inc(x_51);
x_53 = l_lean_parser_syntax_mk__node(x_51, x_50);
x_54 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_1);
x_55 = l_lean_parser_command_notation__spec_action__kind;
lean::inc(x_55);
x_57 = l_lean_parser_syntax_mk__node(x_55, x_54);
return x_57;
}
}
}
}
obj* _init_l_lean_parser_command_notation__spec_action__kind_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_notation__spec_action__kind_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_notation__spec_action__kind_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_parser_command_notation__spec_action() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("action");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* _init_l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_0 = l_lean_parser_command_notation__spec_action__kind_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_1, x_3);
return x_4;
}
}
obj* _init_l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = l_lean_parser_command_notation__spec_action__kind_has__view;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::box(3);
x_5 = lean::apply_1(x_2, x_4);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_5);
return x_6;
}
}
obj* _init_l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(0);
x_4 = lean::box(3);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_5; obj* x_8; 
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
lean::dec(x_1);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_5);
if (lean::obj_tag(x_0) == 0)
{
obj* x_9; obj* x_11; 
x_9 = l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1___closed__1;
lean::inc(x_9);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_8);
lean::cnstr_set(x_11, 1, x_9);
return x_11;
}
else
{
obj* x_12; obj* x_15; obj* x_16; obj* x_18; obj* x_19; 
x_12 = lean::cnstr_get(x_0, 0);
lean::inc(x_12);
lean::dec(x_0);
x_15 = l_lean_parser_command_notation__spec_action__kind_has__view;
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
x_18 = lean::apply_1(x_16, x_12);
x_19 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_19, 0, x_8);
lean::cnstr_set(x_19, 1, x_18);
return x_19;
}
}
case 3:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_20; 
x_20 = l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1___closed__2;
lean::inc(x_20);
return x_20;
}
else
{
obj* x_22; obj* x_25; obj* x_26; obj* x_27; obj* x_29; obj* x_30; 
x_22 = lean::cnstr_get(x_0, 0);
lean::inc(x_22);
lean::dec(x_0);
x_25 = lean::box(0);
x_26 = l_lean_parser_command_notation__spec_action__kind_has__view;
x_27 = lean::cnstr_get(x_26, 0);
lean::inc(x_27);
x_29 = lean::apply_1(x_27, x_22);
x_30 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_30, 0, x_25);
lean::cnstr_set(x_30, 1, x_29);
return x_30;
}
}
default:
{
lean::dec(x_1);
if (lean::obj_tag(x_0) == 0)
{
obj* x_32; 
x_32 = l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1___closed__2;
lean::inc(x_32);
return x_32;
}
else
{
obj* x_34; obj* x_37; obj* x_38; obj* x_39; obj* x_41; obj* x_42; 
x_34 = lean::cnstr_get(x_0, 0);
lean::inc(x_34);
lean::dec(x_0);
x_37 = lean::box(0);
x_38 = l_lean_parser_command_notation__spec_action__kind_has__view;
x_39 = lean::cnstr_get(x_38, 0);
lean::inc(x_39);
x_41 = lean::apply_1(x_39, x_34);
x_42 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_42, 0, x_37);
lean::cnstr_set(x_42, 1, x_41);
return x_42;
}
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1___closed__3;
lean::inc(x_5);
return x_5;
}
else
{
obj* x_7; obj* x_10; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::dec(x_7);
if (lean::obj_tag(x_10) == 0)
{
obj* x_13; 
x_13 = lean::box(3);
x_1 = x_10;
x_2 = x_13;
goto lbl_3;
}
else
{
obj* x_14; obj* x_16; 
x_14 = lean::cnstr_get(x_10, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_10, 1);
lean::inc(x_16);
lean::dec(x_10);
x_1 = x_16;
x_2 = x_14;
goto lbl_3;
}
}
lbl_3:
{
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_19; obj* x_22; 
x_19 = lean::cnstr_get(x_2, 0);
lean::inc(x_19);
lean::dec(x_2);
x_22 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_22, 0, x_19);
if (lean::obj_tag(x_1) == 0)
{
obj* x_23; obj* x_25; 
x_23 = l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1___closed__1;
lean::inc(x_23);
x_25 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_25, 0, x_22);
lean::cnstr_set(x_25, 1, x_23);
return x_25;
}
else
{
obj* x_26; obj* x_29; obj* x_30; obj* x_32; obj* x_33; 
x_26 = lean::cnstr_get(x_1, 0);
lean::inc(x_26);
lean::dec(x_1);
x_29 = l_lean_parser_command_notation__spec_action__kind_has__view;
x_30 = lean::cnstr_get(x_29, 0);
lean::inc(x_30);
x_32 = lean::apply_1(x_30, x_26);
x_33 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_33, 0, x_22);
lean::cnstr_set(x_33, 1, x_32);
return x_33;
}
}
case 3:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_34; 
x_34 = l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1___closed__2;
lean::inc(x_34);
return x_34;
}
else
{
obj* x_36; obj* x_39; obj* x_40; obj* x_41; obj* x_43; obj* x_44; 
x_36 = lean::cnstr_get(x_1, 0);
lean::inc(x_36);
lean::dec(x_1);
x_39 = lean::box(0);
x_40 = l_lean_parser_command_notation__spec_action__kind_has__view;
x_41 = lean::cnstr_get(x_40, 0);
lean::inc(x_41);
x_43 = lean::apply_1(x_41, x_36);
x_44 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_44, 0, x_39);
lean::cnstr_set(x_44, 1, x_43);
return x_44;
}
}
default:
{
lean::dec(x_2);
if (lean::obj_tag(x_1) == 0)
{
obj* x_46; 
x_46 = l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1___closed__2;
lean::inc(x_46);
return x_46;
}
else
{
obj* x_48; obj* x_51; obj* x_52; obj* x_53; obj* x_55; obj* x_56; 
x_48 = lean::cnstr_get(x_1, 0);
lean::inc(x_48);
lean::dec(x_1);
x_51 = lean::box(0);
x_52 = l_lean_parser_command_notation__spec_action__kind_has__view;
x_53 = lean::cnstr_get(x_52, 0);
lean::inc(x_53);
x_55 = lean::apply_1(x_53, x_48);
x_56 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_56, 0, x_51);
lean::cnstr_set(x_56, 1, x_55);
return x_56;
}
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_20; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
lean::inc(x_6);
x_8 = l_option_map___rarg(x_6, x_1);
x_9 = lean::box(3);
x_10 = l_option_get__or__else___main___rarg(x_8, x_9);
x_11 = l_lean_parser_command_notation__spec_action__kind_has__view;
x_12 = lean::cnstr_get(x_11, 1);
lean::inc(x_12);
x_14 = lean::apply_1(x_12, x_3);
x_15 = lean::box(0);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_14);
lean::cnstr_set(x_16, 1, x_15);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_10);
lean::cnstr_set(x_17, 1, x_16);
x_18 = l_lean_parser_command_notation__spec_action;
lean::inc(x_18);
x_20 = l_lean_parser_syntax_mk__node(x_18, x_17);
return x_20;
}
}
obj* _init_l_lean_parser_command_notation__spec_action_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_notation__spec_action_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_notation__spec_action_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_parser_command_notation__spec_action_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; 
x_0 = lean::mk_string(":");
x_1 = lean::mk_nat_obj(0u);
x_2 = l_lean_parser_symbol_tokens___rarg(x_0, x_1);
x_3 = l_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens;
lean::inc(x_3);
x_5 = l_lean_parser_tokens___rarg(x_3);
x_6 = lean::box(0);
x_7 = lean::mk_string("(");
x_8 = l_lean_parser_symbol_tokens___rarg(x_7, x_1);
x_9 = l_lean_parser_list_cons_tokens___rarg(x_6, x_6);
x_10 = l_lean_parser_list_cons_tokens___rarg(x_8, x_9);
x_11 = l_lean_parser_tokens___rarg(x_10);
x_12 = l_lean_parser_tokens___rarg(x_11);
x_13 = l_lean_parser_command_notation__spec_precedence_parser_lean_parser_has__tokens;
lean::inc(x_13);
x_15 = l_lean_parser_tokens___rarg(x_13);
x_16 = lean::mk_string(", ");
x_17 = l_lean_parser_symbol_tokens___rarg(x_16, x_1);
x_18 = lean::mk_string(")");
x_19 = l_lean_parser_symbol_tokens___rarg(x_18, x_1);
x_20 = l_lean_parser_list_cons_tokens___rarg(x_19, x_6);
x_21 = l_lean_parser_term_parser_lean_parser_has__tokens___closed__1;
lean::inc(x_21);
x_23 = l_lean_parser_list_cons_tokens___rarg(x_21, x_20);
x_24 = l_lean_parser_list_cons_tokens___rarg(x_17, x_23);
x_25 = l_lean_parser_list_cons_tokens___rarg(x_6, x_24);
x_26 = l_lean_parser_list_cons_tokens___rarg(x_15, x_25);
x_27 = l_lean_parser_list_cons_tokens___rarg(x_12, x_26);
x_28 = l_lean_parser_tokens___rarg(x_27);
x_29 = l_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens;
lean::inc(x_29);
x_31 = l_lean_parser_list_cons_tokens___rarg(x_29, x_6);
x_32 = l_lean_parser_list_cons_tokens___rarg(x_28, x_31);
x_33 = l_lean_parser_list_cons_tokens___rarg(x_6, x_32);
x_34 = l_lean_parser_list_cons_tokens___rarg(x_5, x_33);
x_35 = l_lean_parser_tokens___rarg(x_34);
x_36 = l_lean_parser_list_cons_tokens___rarg(x_35, x_6);
x_37 = l_lean_parser_tokens___rarg(x_36);
x_38 = l_lean_parser_list_cons_tokens___rarg(x_37, x_6);
x_39 = l_lean_parser_list_cons_tokens___rarg(x_2, x_38);
x_40 = l_lean_parser_tokens___rarg(x_39);
return x_40;
}
}
obj* l_lean_parser_command_notation__spec_action_parser_lean_parser_has__view___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_9; obj* x_10; obj* x_12; obj* x_14; obj* x_15; obj* x_16; 
x_5 = l_lean_parser_command_notation__spec_precedence__term;
x_6 = l_lean_parser_command_notation__spec_precedence__term_parser___closed__1;
lean::inc(x_6);
lean::inc(x_5);
x_9 = l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(x_5, x_6, x_0, x_1, x_2, x_3, x_4);
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 lean::cnstr_release(x_9, 1);
 x_14 = x_9;
} else {
 lean::dec(x_9);
 x_14 = lean::box(0);
}
x_15 = l_lean_parser_parsec__t_try__mk__res___rarg(x_10);
if (lean::is_scalar(x_14)) {
 x_16 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_16 = x_14;
}
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_12);
return x_16;
}
}
obj* l_lean_parser_command_notation__spec_action_parser_lean_parser_has__view___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_14; obj* x_15; 
x_6 = l_lean_parser_no__kind;
lean::inc(x_6);
x_8 = l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(x_6, x_0, x_1, x_2, x_3, x_4, x_5);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 x_13 = x_8;
} else {
 lean::dec(x_8);
 x_13 = lean::box(0);
}
x_14 = l_lean_parser_parsec__t_try__mk__res___rarg(x_9);
if (lean::is_scalar(x_13)) {
 x_15 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_15 = x_13;
}
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_11);
return x_15;
}
}
obj* _init_l_lean_parser_command_notation__spec_action_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_67; 
x_0 = lean::mk_string(":");
x_1 = l_string_trim(x_0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_5, 0, x_1);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::mk_string("prev");
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__or__ident___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__2), 6, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::mk_string("(");
x_9 = l_string_trim(x_8);
lean::inc(x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_11, 0, x_9);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_12, 0, x_9);
lean::closure_set(x_12, 1, x_4);
lean::closure_set(x_12, 2, x_11);
x_13 = lean::mk_string("scoped");
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__or__ident___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__2), 6, 1);
lean::closure_set(x_14, 0, x_13);
x_15 = lean::box(0);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_14);
lean::cnstr_set(x_16, 1, x_15);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_12);
lean::cnstr_set(x_17, 1, x_16);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_action_parser_lean_parser_has__view___lambda__2), 6, 1);
lean::closure_set(x_18, 0, x_17);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_precedence_parser), 5, 0);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__7), 6, 1);
lean::closure_set(x_20, 0, x_19);
x_21 = lean::mk_string(", ");
x_22 = l_string_trim(x_21);
lean::inc(x_22);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_24, 0, x_22);
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_25, 0, x_22);
lean::closure_set(x_25, 1, x_4);
lean::closure_set(x_25, 2, x_24);
x_26 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_parser), 6, 1);
lean::closure_set(x_26, 0, x_4);
x_27 = lean::mk_string(")");
x_28 = l_string_trim(x_27);
lean::inc(x_28);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_30, 0, x_28);
x_31 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_31, 0, x_28);
lean::closure_set(x_31, 1, x_4);
lean::closure_set(x_31, 2, x_30);
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_15);
x_33 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_33, 0, x_26);
lean::cnstr_set(x_33, 1, x_32);
x_34 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_34, 0, x_25);
lean::cnstr_set(x_34, 1, x_33);
x_35 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_ident_parser___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__4), 1, 0);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_35);
lean::cnstr_set(x_36, 1, x_34);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_20);
lean::cnstr_set(x_37, 1, x_36);
x_38 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_38, 0, x_18);
lean::cnstr_set(x_38, 1, x_37);
x_39 = l_lean_parser_command_notation__spec_scoped__action;
lean::inc(x_39);
x_41 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1), 7, 2);
lean::closure_set(x_41, 0, x_39);
lean::closure_set(x_41, 1, x_38);
x_42 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_fold__action_parser), 5, 0);
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_42);
lean::cnstr_set(x_43, 1, x_15);
x_44 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_44, 0, x_41);
lean::cnstr_set(x_44, 1, x_43);
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_7);
lean::cnstr_set(x_45, 1, x_44);
x_46 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_action_parser_lean_parser_has__view___lambda__1), 5, 0);
x_47 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_45);
x_48 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__3), 7, 2);
lean::closure_set(x_48, 0, x_47);
lean::closure_set(x_48, 1, x_4);
x_49 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_49, 0, x_48);
lean::cnstr_set(x_49, 1, x_15);
x_50 = l_lean_parser_command_notation__spec_action__kind;
lean::inc(x_50);
x_52 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1), 7, 2);
lean::closure_set(x_52, 0, x_50);
lean::closure_set(x_52, 1, x_49);
x_53 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_15);
x_54 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_54, 0, x_5);
lean::cnstr_set(x_54, 1, x_53);
x_55 = l_lean_parser_term__parser__m_monad;
x_56 = l_lean_parser_term__parser__m_monad__except;
x_57 = l_lean_parser_term__parser__m_lean_parser_monad__parsec;
x_58 = l_lean_parser_term__parser__m_alternative;
x_59 = l_lean_parser_command_notation__spec_action;
x_60 = l_lean_parser_command_notation__spec_action_has__view;
lean::inc(x_60);
lean::inc(x_59);
lean::inc(x_58);
lean::inc(x_57);
lean::inc(x_56);
lean::inc(x_55);
x_67 = l_lean_parser_combinators_node_view___rarg(x_55, x_56, x_57, x_58, x_59, x_54, x_60);
return x_67;
}
}
obj* _init_l_lean_parser_command_notation__spec_action_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_52; obj* x_53; obj* x_54; 
x_0 = lean::mk_string(":");
x_1 = l_string_trim(x_0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_5, 0, x_1);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::mk_string("prev");
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__or__ident___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__2), 6, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::mk_string("(");
x_9 = l_string_trim(x_8);
lean::inc(x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_11, 0, x_9);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_12, 0, x_9);
lean::closure_set(x_12, 1, x_4);
lean::closure_set(x_12, 2, x_11);
x_13 = lean::mk_string("scoped");
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__or__ident___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__2), 6, 1);
lean::closure_set(x_14, 0, x_13);
x_15 = lean::box(0);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_14);
lean::cnstr_set(x_16, 1, x_15);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_12);
lean::cnstr_set(x_17, 1, x_16);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_action_parser_lean_parser_has__view___lambda__2), 6, 1);
lean::closure_set(x_18, 0, x_17);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_precedence_parser), 5, 0);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__7), 6, 1);
lean::closure_set(x_20, 0, x_19);
x_21 = lean::mk_string(", ");
x_22 = l_string_trim(x_21);
lean::inc(x_22);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_24, 0, x_22);
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_25, 0, x_22);
lean::closure_set(x_25, 1, x_4);
lean::closure_set(x_25, 2, x_24);
x_26 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_parser), 6, 1);
lean::closure_set(x_26, 0, x_4);
x_27 = lean::mk_string(")");
x_28 = l_string_trim(x_27);
lean::inc(x_28);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_30, 0, x_28);
x_31 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_31, 0, x_28);
lean::closure_set(x_31, 1, x_4);
lean::closure_set(x_31, 2, x_30);
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_15);
x_33 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_33, 0, x_26);
lean::cnstr_set(x_33, 1, x_32);
x_34 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_34, 0, x_25);
lean::cnstr_set(x_34, 1, x_33);
x_35 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_ident_parser___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__4), 1, 0);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_35);
lean::cnstr_set(x_36, 1, x_34);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_20);
lean::cnstr_set(x_37, 1, x_36);
x_38 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_38, 0, x_18);
lean::cnstr_set(x_38, 1, x_37);
x_39 = l_lean_parser_command_notation__spec_scoped__action;
lean::inc(x_39);
x_41 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1), 7, 2);
lean::closure_set(x_41, 0, x_39);
lean::closure_set(x_41, 1, x_38);
x_42 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_fold__action_parser), 5, 0);
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_42);
lean::cnstr_set(x_43, 1, x_15);
x_44 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_44, 0, x_41);
lean::cnstr_set(x_44, 1, x_43);
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_7);
lean::cnstr_set(x_45, 1, x_44);
x_46 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_action_parser_lean_parser_has__view___lambda__1), 5, 0);
x_47 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_45);
x_48 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__3), 7, 2);
lean::closure_set(x_48, 0, x_47);
lean::closure_set(x_48, 1, x_4);
x_49 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_49, 0, x_48);
lean::cnstr_set(x_49, 1, x_15);
x_50 = l_lean_parser_command_notation__spec_action__kind;
lean::inc(x_50);
x_52 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1), 7, 2);
lean::closure_set(x_52, 0, x_50);
lean::closure_set(x_52, 1, x_49);
x_53 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_15);
x_54 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_54, 0, x_5);
lean::cnstr_set(x_54, 1, x_53);
return x_54;
}
}
obj* l_lean_parser_command_notation__spec_action_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_9; 
x_5 = l_lean_parser_command_notation__spec_action;
x_6 = l_lean_parser_command_notation__spec_action_parser___closed__1;
lean::inc(x_6);
lean::inc(x_5);
x_9 = l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(x_5, x_6, x_0, x_1, x_2, x_3, x_4);
return x_9;
}
}
obj* _init_l_lean_parser_command_notation__spec_binder() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("binder");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* _init_l_lean_parser_command_notation__spec_binder_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(0);
x_4 = lean::box(3);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; 
x_5 = lean::box(3);
x_6 = l_lean_parser_syntax_as__node___main(x_5);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_9; 
x_7 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_7);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_1);
lean::cnstr_set(x_9, 1, x_7);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_13; 
x_10 = lean::cnstr_get(x_6, 0);
lean::inc(x_10);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 x_12 = x_6;
} else {
 lean::dec(x_6);
 x_12 = lean::box(0);
}
x_13 = lean::cnstr_get(x_10, 1);
lean::inc(x_13);
lean::dec(x_10);
if (lean::obj_tag(x_13) == 0)
{
obj* x_17; obj* x_18; 
lean::dec(x_12);
x_17 = lean::box(0);
x_18 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_18, 0, x_1);
lean::cnstr_set(x_18, 1, x_17);
return x_18;
}
else
{
obj* x_19; obj* x_21; 
x_19 = lean::cnstr_get(x_13, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_13, 1);
lean::inc(x_21);
lean::dec(x_13);
if (lean::obj_tag(x_21) == 0)
{
obj* x_24; obj* x_25; obj* x_27; obj* x_28; obj* x_29; 
x_24 = l_lean_parser_command_notation__spec_precedence_has__view;
x_25 = lean::cnstr_get(x_24, 0);
lean::inc(x_25);
x_27 = lean::apply_1(x_25, x_19);
if (lean::is_scalar(x_12)) {
 x_28 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_28 = x_12;
}
lean::cnstr_set(x_28, 0, x_27);
x_29 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_29, 0, x_1);
lean::cnstr_set(x_29, 1, x_28);
return x_29;
}
else
{
obj* x_33; obj* x_35; 
lean::dec(x_12);
lean::dec(x_21);
lean::dec(x_19);
x_33 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_33);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_1);
lean::cnstr_set(x_35, 1, x_33);
return x_35;
}
}
}
}
else
{
obj* x_36; obj* x_39; 
x_36 = lean::cnstr_get(x_0, 0);
lean::inc(x_36);
lean::dec(x_0);
x_39 = l_lean_parser_syntax_as__node___main(x_36);
if (lean::obj_tag(x_39) == 0)
{
obj* x_40; obj* x_42; 
x_40 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_40);
x_42 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_42, 0, x_1);
lean::cnstr_set(x_42, 1, x_40);
return x_42;
}
else
{
obj* x_43; obj* x_45; obj* x_46; 
x_43 = lean::cnstr_get(x_39, 0);
lean::inc(x_43);
if (lean::is_exclusive(x_39)) {
 lean::cnstr_release(x_39, 0);
 x_45 = x_39;
} else {
 lean::dec(x_39);
 x_45 = lean::box(0);
}
x_46 = lean::cnstr_get(x_43, 1);
lean::inc(x_46);
lean::dec(x_43);
if (lean::obj_tag(x_46) == 0)
{
obj* x_50; obj* x_51; 
lean::dec(x_45);
x_50 = lean::box(0);
x_51 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_51, 0, x_1);
lean::cnstr_set(x_51, 1, x_50);
return x_51;
}
else
{
obj* x_52; obj* x_54; 
x_52 = lean::cnstr_get(x_46, 0);
lean::inc(x_52);
x_54 = lean::cnstr_get(x_46, 1);
lean::inc(x_54);
lean::dec(x_46);
if (lean::obj_tag(x_54) == 0)
{
obj* x_57; obj* x_58; obj* x_60; obj* x_61; obj* x_62; 
x_57 = l_lean_parser_command_notation__spec_precedence_has__view;
x_58 = lean::cnstr_get(x_57, 0);
lean::inc(x_58);
x_60 = lean::apply_1(x_58, x_52);
if (lean::is_scalar(x_45)) {
 x_61 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_61 = x_45;
}
lean::cnstr_set(x_61, 0, x_60);
x_62 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_62, 0, x_1);
lean::cnstr_set(x_62, 1, x_61);
return x_62;
}
else
{
obj* x_66; obj* x_68; 
lean::dec(x_45);
lean::dec(x_52);
lean::dec(x_54);
x_66 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_66);
x_68 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_68, 0, x_1);
lean::cnstr_set(x_68, 1, x_66);
return x_68;
}
}
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_binder_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_command_notation__spec_binder_has__view_x_27___lambda__1___closed__1;
lean::inc(x_5);
return x_5;
}
else
{
obj* x_7; obj* x_10; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::dec(x_7);
if (lean::obj_tag(x_10) == 0)
{
obj* x_13; 
x_13 = lean::box(3);
x_1 = x_10;
x_2 = x_13;
goto lbl_3;
}
else
{
obj* x_14; obj* x_16; 
x_14 = lean::cnstr_get(x_10, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_10, 1);
lean::inc(x_16);
lean::dec(x_10);
x_1 = x_16;
x_2 = x_14;
goto lbl_3;
}
}
lbl_3:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_19; obj* x_20; 
x_19 = lean::box(3);
x_20 = l_lean_parser_syntax_as__node___main(x_19);
if (lean::obj_tag(x_20) == 0)
{
obj* x_21; obj* x_23; 
x_21 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_21);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_2);
lean::cnstr_set(x_23, 1, x_21);
return x_23;
}
else
{
obj* x_24; obj* x_26; obj* x_27; 
x_24 = lean::cnstr_get(x_20, 0);
lean::inc(x_24);
if (lean::is_exclusive(x_20)) {
 lean::cnstr_release(x_20, 0);
 x_26 = x_20;
} else {
 lean::dec(x_20);
 x_26 = lean::box(0);
}
x_27 = lean::cnstr_get(x_24, 1);
lean::inc(x_27);
lean::dec(x_24);
if (lean::obj_tag(x_27) == 0)
{
obj* x_31; obj* x_32; 
lean::dec(x_26);
x_31 = lean::box(0);
x_32 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_32, 0, x_2);
lean::cnstr_set(x_32, 1, x_31);
return x_32;
}
else
{
obj* x_33; obj* x_35; 
x_33 = lean::cnstr_get(x_27, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_27, 1);
lean::inc(x_35);
lean::dec(x_27);
if (lean::obj_tag(x_35) == 0)
{
obj* x_38; obj* x_39; obj* x_41; obj* x_42; obj* x_43; 
x_38 = l_lean_parser_command_notation__spec_precedence_has__view;
x_39 = lean::cnstr_get(x_38, 0);
lean::inc(x_39);
x_41 = lean::apply_1(x_39, x_33);
if (lean::is_scalar(x_26)) {
 x_42 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_42 = x_26;
}
lean::cnstr_set(x_42, 0, x_41);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_2);
lean::cnstr_set(x_43, 1, x_42);
return x_43;
}
else
{
obj* x_47; obj* x_49; 
lean::dec(x_26);
lean::dec(x_33);
lean::dec(x_35);
x_47 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_47);
x_49 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_49, 0, x_2);
lean::cnstr_set(x_49, 1, x_47);
return x_49;
}
}
}
}
else
{
obj* x_50; obj* x_53; 
x_50 = lean::cnstr_get(x_1, 0);
lean::inc(x_50);
lean::dec(x_1);
x_53 = l_lean_parser_syntax_as__node___main(x_50);
if (lean::obj_tag(x_53) == 0)
{
obj* x_54; obj* x_56; 
x_54 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_54);
x_56 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_56, 0, x_2);
lean::cnstr_set(x_56, 1, x_54);
return x_56;
}
else
{
obj* x_57; obj* x_59; obj* x_60; 
x_57 = lean::cnstr_get(x_53, 0);
lean::inc(x_57);
if (lean::is_exclusive(x_53)) {
 lean::cnstr_release(x_53, 0);
 x_59 = x_53;
} else {
 lean::dec(x_53);
 x_59 = lean::box(0);
}
x_60 = lean::cnstr_get(x_57, 1);
lean::inc(x_60);
lean::dec(x_57);
if (lean::obj_tag(x_60) == 0)
{
obj* x_64; obj* x_65; 
lean::dec(x_59);
x_64 = lean::box(0);
x_65 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_65, 0, x_2);
lean::cnstr_set(x_65, 1, x_64);
return x_65;
}
else
{
obj* x_66; obj* x_68; 
x_66 = lean::cnstr_get(x_60, 0);
lean::inc(x_66);
x_68 = lean::cnstr_get(x_60, 1);
lean::inc(x_68);
lean::dec(x_60);
if (lean::obj_tag(x_68) == 0)
{
obj* x_71; obj* x_72; obj* x_74; obj* x_75; obj* x_76; 
x_71 = l_lean_parser_command_notation__spec_precedence_has__view;
x_72 = lean::cnstr_get(x_71, 0);
lean::inc(x_72);
x_74 = lean::apply_1(x_72, x_66);
if (lean::is_scalar(x_59)) {
 x_75 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_75 = x_59;
}
lean::cnstr_set(x_75, 0, x_74);
x_76 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_76, 0, x_2);
lean::cnstr_set(x_76, 1, x_75);
return x_76;
}
else
{
obj* x_80; obj* x_82; 
lean::dec(x_68);
lean::dec(x_66);
lean::dec(x_59);
x_80 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_80);
x_82 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_82, 0, x_2);
lean::cnstr_set(x_82, 1, x_80);
return x_82;
}
}
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_binder_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
if (lean::obj_tag(x_3) == 0)
{
obj* x_6; obj* x_8; obj* x_9; obj* x_11; 
x_6 = l_lean_parser_detail__ident_has__view_x_27___lambda__2___closed__1;
lean::inc(x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_1);
lean::cnstr_set(x_8, 1, x_6);
x_9 = l_lean_parser_command_notation__spec_binder;
lean::inc(x_9);
x_11 = l_lean_parser_syntax_mk__node(x_9, x_8);
return x_11;
}
else
{
obj* x_12; obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_28; 
x_12 = lean::cnstr_get(x_3, 0);
lean::inc(x_12);
lean::dec(x_3);
x_15 = lean::box(0);
x_16 = l_lean_parser_command_notation__spec_precedence_has__view;
x_17 = lean::cnstr_get(x_16, 1);
lean::inc(x_17);
x_19 = lean::apply_1(x_17, x_12);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_15);
x_21 = l_lean_parser_no__kind;
lean::inc(x_21);
x_23 = l_lean_parser_syntax_mk__node(x_21, x_20);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_15);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_1);
lean::cnstr_set(x_25, 1, x_24);
x_26 = l_lean_parser_command_notation__spec_binder;
lean::inc(x_26);
x_28 = l_lean_parser_syntax_mk__node(x_26, x_25);
return x_28;
}
}
}
obj* _init_l_lean_parser_command_notation__spec_binder_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_binder_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_binder_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_notation__spec_binder_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_notation__spec_binder_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_parser_command_notation__spec_binders() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("binders");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* _init_l_lean_parser_command_notation__spec_binders_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(0);
x_4 = lean::box(3);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; 
x_5 = lean::box(3);
x_6 = l_lean_parser_syntax_as__node___main(x_5);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_9; 
x_7 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_7);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_1);
lean::cnstr_set(x_9, 1, x_7);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_13; 
x_10 = lean::cnstr_get(x_6, 0);
lean::inc(x_10);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 x_12 = x_6;
} else {
 lean::dec(x_6);
 x_12 = lean::box(0);
}
x_13 = lean::cnstr_get(x_10, 1);
lean::inc(x_13);
lean::dec(x_10);
if (lean::obj_tag(x_13) == 0)
{
obj* x_17; obj* x_18; 
lean::dec(x_12);
x_17 = lean::box(0);
x_18 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_18, 0, x_1);
lean::cnstr_set(x_18, 1, x_17);
return x_18;
}
else
{
obj* x_19; obj* x_21; 
x_19 = lean::cnstr_get(x_13, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_13, 1);
lean::inc(x_21);
lean::dec(x_13);
if (lean::obj_tag(x_21) == 0)
{
obj* x_24; obj* x_25; obj* x_27; obj* x_28; obj* x_29; 
x_24 = l_lean_parser_command_notation__spec_precedence_has__view;
x_25 = lean::cnstr_get(x_24, 0);
lean::inc(x_25);
x_27 = lean::apply_1(x_25, x_19);
if (lean::is_scalar(x_12)) {
 x_28 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_28 = x_12;
}
lean::cnstr_set(x_28, 0, x_27);
x_29 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_29, 0, x_1);
lean::cnstr_set(x_29, 1, x_28);
return x_29;
}
else
{
obj* x_33; obj* x_35; 
lean::dec(x_12);
lean::dec(x_21);
lean::dec(x_19);
x_33 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_33);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_1);
lean::cnstr_set(x_35, 1, x_33);
return x_35;
}
}
}
}
else
{
obj* x_36; obj* x_39; 
x_36 = lean::cnstr_get(x_0, 0);
lean::inc(x_36);
lean::dec(x_0);
x_39 = l_lean_parser_syntax_as__node___main(x_36);
if (lean::obj_tag(x_39) == 0)
{
obj* x_40; obj* x_42; 
x_40 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_40);
x_42 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_42, 0, x_1);
lean::cnstr_set(x_42, 1, x_40);
return x_42;
}
else
{
obj* x_43; obj* x_45; obj* x_46; 
x_43 = lean::cnstr_get(x_39, 0);
lean::inc(x_43);
if (lean::is_exclusive(x_39)) {
 lean::cnstr_release(x_39, 0);
 x_45 = x_39;
} else {
 lean::dec(x_39);
 x_45 = lean::box(0);
}
x_46 = lean::cnstr_get(x_43, 1);
lean::inc(x_46);
lean::dec(x_43);
if (lean::obj_tag(x_46) == 0)
{
obj* x_50; obj* x_51; 
lean::dec(x_45);
x_50 = lean::box(0);
x_51 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_51, 0, x_1);
lean::cnstr_set(x_51, 1, x_50);
return x_51;
}
else
{
obj* x_52; obj* x_54; 
x_52 = lean::cnstr_get(x_46, 0);
lean::inc(x_52);
x_54 = lean::cnstr_get(x_46, 1);
lean::inc(x_54);
lean::dec(x_46);
if (lean::obj_tag(x_54) == 0)
{
obj* x_57; obj* x_58; obj* x_60; obj* x_61; obj* x_62; 
x_57 = l_lean_parser_command_notation__spec_precedence_has__view;
x_58 = lean::cnstr_get(x_57, 0);
lean::inc(x_58);
x_60 = lean::apply_1(x_58, x_52);
if (lean::is_scalar(x_45)) {
 x_61 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_61 = x_45;
}
lean::cnstr_set(x_61, 0, x_60);
x_62 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_62, 0, x_1);
lean::cnstr_set(x_62, 1, x_61);
return x_62;
}
else
{
obj* x_66; obj* x_68; 
lean::dec(x_45);
lean::dec(x_52);
lean::dec(x_54);
x_66 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_66);
x_68 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_68, 0, x_1);
lean::cnstr_set(x_68, 1, x_66);
return x_68;
}
}
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_binders_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_command_notation__spec_binders_has__view_x_27___lambda__1___closed__1;
lean::inc(x_5);
return x_5;
}
else
{
obj* x_7; obj* x_10; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::dec(x_7);
if (lean::obj_tag(x_10) == 0)
{
obj* x_13; 
x_13 = lean::box(3);
x_1 = x_10;
x_2 = x_13;
goto lbl_3;
}
else
{
obj* x_14; obj* x_16; 
x_14 = lean::cnstr_get(x_10, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_10, 1);
lean::inc(x_16);
lean::dec(x_10);
x_1 = x_16;
x_2 = x_14;
goto lbl_3;
}
}
lbl_3:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_19; obj* x_20; 
x_19 = lean::box(3);
x_20 = l_lean_parser_syntax_as__node___main(x_19);
if (lean::obj_tag(x_20) == 0)
{
obj* x_21; obj* x_23; 
x_21 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_21);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_2);
lean::cnstr_set(x_23, 1, x_21);
return x_23;
}
else
{
obj* x_24; obj* x_26; obj* x_27; 
x_24 = lean::cnstr_get(x_20, 0);
lean::inc(x_24);
if (lean::is_exclusive(x_20)) {
 lean::cnstr_release(x_20, 0);
 x_26 = x_20;
} else {
 lean::dec(x_20);
 x_26 = lean::box(0);
}
x_27 = lean::cnstr_get(x_24, 1);
lean::inc(x_27);
lean::dec(x_24);
if (lean::obj_tag(x_27) == 0)
{
obj* x_31; obj* x_32; 
lean::dec(x_26);
x_31 = lean::box(0);
x_32 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_32, 0, x_2);
lean::cnstr_set(x_32, 1, x_31);
return x_32;
}
else
{
obj* x_33; obj* x_35; 
x_33 = lean::cnstr_get(x_27, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_27, 1);
lean::inc(x_35);
lean::dec(x_27);
if (lean::obj_tag(x_35) == 0)
{
obj* x_38; obj* x_39; obj* x_41; obj* x_42; obj* x_43; 
x_38 = l_lean_parser_command_notation__spec_precedence_has__view;
x_39 = lean::cnstr_get(x_38, 0);
lean::inc(x_39);
x_41 = lean::apply_1(x_39, x_33);
if (lean::is_scalar(x_26)) {
 x_42 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_42 = x_26;
}
lean::cnstr_set(x_42, 0, x_41);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_2);
lean::cnstr_set(x_43, 1, x_42);
return x_43;
}
else
{
obj* x_47; obj* x_49; 
lean::dec(x_26);
lean::dec(x_33);
lean::dec(x_35);
x_47 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_47);
x_49 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_49, 0, x_2);
lean::cnstr_set(x_49, 1, x_47);
return x_49;
}
}
}
}
else
{
obj* x_50; obj* x_53; 
x_50 = lean::cnstr_get(x_1, 0);
lean::inc(x_50);
lean::dec(x_1);
x_53 = l_lean_parser_syntax_as__node___main(x_50);
if (lean::obj_tag(x_53) == 0)
{
obj* x_54; obj* x_56; 
x_54 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_54);
x_56 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_56, 0, x_2);
lean::cnstr_set(x_56, 1, x_54);
return x_56;
}
else
{
obj* x_57; obj* x_59; obj* x_60; 
x_57 = lean::cnstr_get(x_53, 0);
lean::inc(x_57);
if (lean::is_exclusive(x_53)) {
 lean::cnstr_release(x_53, 0);
 x_59 = x_53;
} else {
 lean::dec(x_53);
 x_59 = lean::box(0);
}
x_60 = lean::cnstr_get(x_57, 1);
lean::inc(x_60);
lean::dec(x_57);
if (lean::obj_tag(x_60) == 0)
{
obj* x_64; obj* x_65; 
lean::dec(x_59);
x_64 = lean::box(0);
x_65 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_65, 0, x_2);
lean::cnstr_set(x_65, 1, x_64);
return x_65;
}
else
{
obj* x_66; obj* x_68; 
x_66 = lean::cnstr_get(x_60, 0);
lean::inc(x_66);
x_68 = lean::cnstr_get(x_60, 1);
lean::inc(x_68);
lean::dec(x_60);
if (lean::obj_tag(x_68) == 0)
{
obj* x_71; obj* x_72; obj* x_74; obj* x_75; obj* x_76; 
x_71 = l_lean_parser_command_notation__spec_precedence_has__view;
x_72 = lean::cnstr_get(x_71, 0);
lean::inc(x_72);
x_74 = lean::apply_1(x_72, x_66);
if (lean::is_scalar(x_59)) {
 x_75 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_75 = x_59;
}
lean::cnstr_set(x_75, 0, x_74);
x_76 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_76, 0, x_2);
lean::cnstr_set(x_76, 1, x_75);
return x_76;
}
else
{
obj* x_80; obj* x_82; 
lean::dec(x_68);
lean::dec(x_66);
lean::dec(x_59);
x_80 = l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1;
lean::inc(x_80);
x_82 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_82, 0, x_2);
lean::cnstr_set(x_82, 1, x_80);
return x_82;
}
}
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_binders_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
if (lean::obj_tag(x_3) == 0)
{
obj* x_6; obj* x_8; obj* x_9; obj* x_11; 
x_6 = l_lean_parser_detail__ident_has__view_x_27___lambda__2___closed__1;
lean::inc(x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_1);
lean::cnstr_set(x_8, 1, x_6);
x_9 = l_lean_parser_command_notation__spec_binders;
lean::inc(x_9);
x_11 = l_lean_parser_syntax_mk__node(x_9, x_8);
return x_11;
}
else
{
obj* x_12; obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_28; 
x_12 = lean::cnstr_get(x_3, 0);
lean::inc(x_12);
lean::dec(x_3);
x_15 = lean::box(0);
x_16 = l_lean_parser_command_notation__spec_precedence_has__view;
x_17 = lean::cnstr_get(x_16, 1);
lean::inc(x_17);
x_19 = lean::apply_1(x_17, x_12);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_15);
x_21 = l_lean_parser_no__kind;
lean::inc(x_21);
x_23 = l_lean_parser_syntax_mk__node(x_21, x_20);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_15);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_1);
lean::cnstr_set(x_25, 1, x_24);
x_26 = l_lean_parser_command_notation__spec_binders;
lean::inc(x_26);
x_28 = l_lean_parser_syntax_mk__node(x_26, x_25);
return x_28;
}
}
}
obj* _init_l_lean_parser_command_notation__spec_binders_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_binders_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_binders_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_notation__spec_binders_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_notation__spec_binders_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_parser_command_notation__spec_argument() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("argument");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* _init_l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_0 = lean::box(0);
x_1 = lean::mk_string("NOT_AN_IDENT");
lean::inc(x_1);
x_3 = l_lean_parser_substring_of__string(x_1);
x_4 = lean_name_mk_string(x_0, x_1);
x_5 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_5, 0, x_0);
lean::cnstr_set(x_5, 1, x_3);
lean::cnstr_set(x_5, 2, x_4);
lean::cnstr_set(x_5, 3, x_0);
lean::cnstr_set(x_5, 4, x_0);
x_6 = l_lean_parser_command_notation__spec_action_has__view;
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::box(3);
x_10 = lean::apply_1(x_7, x_9);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_10);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_5);
lean::cnstr_set(x_12, 1, x_11);
return x_12;
}
}
obj* _init_l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("NOT_AN_IDENT");
lean::inc(x_1);
x_3 = l_lean_parser_substring_of__string(x_1);
x_4 = lean_name_mk_string(x_0, x_1);
x_5 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_5, 0, x_0);
lean::cnstr_set(x_5, 1, x_3);
lean::cnstr_set(x_5, 2, x_4);
lean::cnstr_set(x_5, 3, x_0);
lean::cnstr_set(x_5, 4, x_0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_0);
return x_6;
}
}
obj* _init_l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__3() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(3);
x_1 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; 
x_2 = l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__1;
lean::inc(x_2);
return x_2;
}
else
{
obj* x_4; obj* x_6; obj* x_7; 
x_4 = lean::cnstr_get(x_1, 0);
lean::inc(x_4);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 x_6 = x_1;
} else {
 lean::dec(x_1);
 x_6 = lean::box(0);
}
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
lean::dec(x_4);
if (lean::obj_tag(x_7) == 0)
{
obj* x_11; 
lean::dec(x_6);
x_11 = l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__2;
lean::inc(x_11);
return x_11;
}
else
{
obj* x_13; obj* x_15; 
x_13 = lean::cnstr_get(x_7, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_7, 1);
lean::inc(x_15);
lean::dec(x_7);
if (lean::obj_tag(x_15) == 0)
{
obj* x_18; obj* x_19; obj* x_21; obj* x_22; obj* x_23; obj* x_25; 
x_18 = l_lean_parser_command_notation__spec_action_has__view;
x_19 = lean::cnstr_get(x_18, 0);
lean::inc(x_19);
x_21 = lean::apply_1(x_19, x_13);
if (lean::is_scalar(x_6)) {
 x_22 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_22 = x_6;
}
lean::cnstr_set(x_22, 0, x_21);
x_23 = l_lean_parser_ident_parser_view___rarg___lambda__1___closed__1;
lean::inc(x_23);
x_25 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_25, 0, x_23);
lean::cnstr_set(x_25, 1, x_22);
return x_25;
}
else
{
obj* x_29; 
lean::dec(x_6);
lean::dec(x_13);
lean::dec(x_15);
x_29 = l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__1;
lean::inc(x_29);
return x_29;
}
}
}
}
}
obj* _init_l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; 
x_0 = l_lean_parser_command_notation__spec_action_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_1, x_3);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__5() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(0);
x_4 = lean::box(3);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; 
switch (lean::obj_tag(x_1)) {
case 1:
{
obj* x_7; 
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
lean::dec(x_1);
if (lean::obj_tag(x_0) == 0)
{
obj* x_10; obj* x_11; 
x_10 = lean::box(3);
x_11 = l_lean_parser_syntax_as__node___main(x_10);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_14; 
x_12 = l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__4;
lean::inc(x_12);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_7);
lean::cnstr_set(x_14, 1, x_12);
return x_14;
}
else
{
obj* x_15; obj* x_17; obj* x_18; 
x_15 = lean::cnstr_get(x_11, 0);
lean::inc(x_15);
if (lean::is_exclusive(x_11)) {
 lean::cnstr_release(x_11, 0);
 x_17 = x_11;
} else {
 lean::dec(x_11);
 x_17 = lean::box(0);
}
x_18 = lean::cnstr_get(x_15, 1);
lean::inc(x_18);
lean::dec(x_15);
if (lean::obj_tag(x_18) == 0)
{
obj* x_22; obj* x_23; 
lean::dec(x_17);
x_22 = lean::box(0);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_7);
lean::cnstr_set(x_23, 1, x_22);
return x_23;
}
else
{
obj* x_24; obj* x_26; 
x_24 = lean::cnstr_get(x_18, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_18, 1);
lean::inc(x_26);
lean::dec(x_18);
if (lean::obj_tag(x_26) == 0)
{
obj* x_29; obj* x_30; obj* x_32; obj* x_33; obj* x_34; 
x_29 = l_lean_parser_command_notation__spec_action_has__view;
x_30 = lean::cnstr_get(x_29, 0);
lean::inc(x_30);
x_32 = lean::apply_1(x_30, x_24);
if (lean::is_scalar(x_17)) {
 x_33 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_33 = x_17;
}
lean::cnstr_set(x_33, 0, x_32);
x_34 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_34, 0, x_7);
lean::cnstr_set(x_34, 1, x_33);
return x_34;
}
else
{
obj* x_38; obj* x_40; 
lean::dec(x_17);
lean::dec(x_24);
lean::dec(x_26);
x_38 = l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__4;
lean::inc(x_38);
x_40 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_40, 0, x_7);
lean::cnstr_set(x_40, 1, x_38);
return x_40;
}
}
}
}
else
{
obj* x_41; obj* x_44; 
x_41 = lean::cnstr_get(x_0, 0);
lean::inc(x_41);
lean::dec(x_0);
x_44 = l_lean_parser_syntax_as__node___main(x_41);
if (lean::obj_tag(x_44) == 0)
{
obj* x_45; obj* x_47; 
x_45 = l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__4;
lean::inc(x_45);
x_47 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_47, 0, x_7);
lean::cnstr_set(x_47, 1, x_45);
return x_47;
}
else
{
obj* x_48; obj* x_50; obj* x_51; 
x_48 = lean::cnstr_get(x_44, 0);
lean::inc(x_48);
if (lean::is_exclusive(x_44)) {
 lean::cnstr_release(x_44, 0);
 x_50 = x_44;
} else {
 lean::dec(x_44);
 x_50 = lean::box(0);
}
x_51 = lean::cnstr_get(x_48, 1);
lean::inc(x_51);
lean::dec(x_48);
if (lean::obj_tag(x_51) == 0)
{
obj* x_55; obj* x_56; 
lean::dec(x_50);
x_55 = lean::box(0);
x_56 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_56, 0, x_7);
lean::cnstr_set(x_56, 1, x_55);
return x_56;
}
else
{
obj* x_57; obj* x_59; 
x_57 = lean::cnstr_get(x_51, 0);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_51, 1);
lean::inc(x_59);
lean::dec(x_51);
if (lean::obj_tag(x_59) == 0)
{
obj* x_62; obj* x_63; obj* x_65; obj* x_66; obj* x_67; 
x_62 = l_lean_parser_command_notation__spec_action_has__view;
x_63 = lean::cnstr_get(x_62, 0);
lean::inc(x_63);
x_65 = lean::apply_1(x_63, x_57);
if (lean::is_scalar(x_50)) {
 x_66 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_66 = x_50;
}
lean::cnstr_set(x_66, 0, x_65);
x_67 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_67, 0, x_7);
lean::cnstr_set(x_67, 1, x_66);
return x_67;
}
else
{
obj* x_71; obj* x_73; 
lean::dec(x_59);
lean::dec(x_57);
lean::dec(x_50);
x_71 = l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__4;
lean::inc(x_71);
x_73 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_73, 0, x_7);
lean::cnstr_set(x_73, 1, x_71);
return x_73;
}
}
}
}
}
case 3:
{
obj* x_74; 
x_74 = lean::box(0);
x_5 = x_74;
goto lbl_6;
}
default:
{
obj* x_76; 
lean::dec(x_1);
x_76 = lean::box(0);
x_5 = x_76;
goto lbl_6;
}
}
lbl_6:
{
lean::dec(x_5);
if (lean::obj_tag(x_0) == 0)
{
obj* x_78; 
x_78 = l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__3;
lean::inc(x_78);
return x_78;
}
else
{
obj* x_80; obj* x_83; 
x_80 = lean::cnstr_get(x_0, 0);
lean::inc(x_80);
lean::dec(x_0);
x_83 = l_lean_parser_syntax_as__node___main(x_80);
if (lean::obj_tag(x_83) == 0)
{
obj* x_84; 
x_84 = l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__1;
lean::inc(x_84);
return x_84;
}
else
{
obj* x_86; obj* x_88; obj* x_89; 
x_86 = lean::cnstr_get(x_83, 0);
lean::inc(x_86);
if (lean::is_exclusive(x_83)) {
 lean::cnstr_release(x_83, 0);
 x_88 = x_83;
} else {
 lean::dec(x_83);
 x_88 = lean::box(0);
}
x_89 = lean::cnstr_get(x_86, 1);
lean::inc(x_89);
lean::dec(x_86);
if (lean::obj_tag(x_89) == 0)
{
obj* x_93; 
lean::dec(x_88);
x_93 = l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__2;
lean::inc(x_93);
return x_93;
}
else
{
obj* x_95; obj* x_97; 
x_95 = lean::cnstr_get(x_89, 0);
lean::inc(x_95);
x_97 = lean::cnstr_get(x_89, 1);
lean::inc(x_97);
lean::dec(x_89);
if (lean::obj_tag(x_97) == 0)
{
obj* x_100; obj* x_101; obj* x_103; obj* x_104; obj* x_105; obj* x_107; 
x_100 = l_lean_parser_command_notation__spec_action_has__view;
x_101 = lean::cnstr_get(x_100, 0);
lean::inc(x_101);
x_103 = lean::apply_1(x_101, x_95);
if (lean::is_scalar(x_88)) {
 x_104 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_104 = x_88;
}
lean::cnstr_set(x_104, 0, x_103);
x_105 = l_lean_parser_ident_parser_view___rarg___lambda__1___closed__1;
lean::inc(x_105);
x_107 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_107, 0, x_105);
lean::cnstr_set(x_107, 1, x_104);
return x_107;
}
else
{
obj* x_111; 
lean::dec(x_95);
lean::dec(x_97);
lean::dec(x_88);
x_111 = l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__1;
lean::inc(x_111);
return x_111;
}
}
}
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__5;
lean::inc(x_5);
return x_5;
}
else
{
obj* x_7; obj* x_10; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::dec(x_7);
if (lean::obj_tag(x_10) == 0)
{
obj* x_13; 
x_13 = lean::box(3);
x_1 = x_10;
x_2 = x_13;
goto lbl_3;
}
else
{
obj* x_14; obj* x_16; 
x_14 = lean::cnstr_get(x_10, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_10, 1);
lean::inc(x_16);
lean::dec(x_10);
x_1 = x_16;
x_2 = x_14;
goto lbl_3;
}
}
lbl_3:
{
obj* x_19; 
switch (lean::obj_tag(x_2)) {
case 1:
{
obj* x_21; 
x_21 = lean::cnstr_get(x_2, 0);
lean::inc(x_21);
lean::dec(x_2);
if (lean::obj_tag(x_1) == 0)
{
obj* x_24; obj* x_25; 
x_24 = lean::box(3);
x_25 = l_lean_parser_syntax_as__node___main(x_24);
if (lean::obj_tag(x_25) == 0)
{
obj* x_26; obj* x_28; 
x_26 = l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__4;
lean::inc(x_26);
x_28 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_28, 0, x_21);
lean::cnstr_set(x_28, 1, x_26);
return x_28;
}
else
{
obj* x_29; obj* x_31; obj* x_32; 
x_29 = lean::cnstr_get(x_25, 0);
lean::inc(x_29);
if (lean::is_exclusive(x_25)) {
 lean::cnstr_release(x_25, 0);
 x_31 = x_25;
} else {
 lean::dec(x_25);
 x_31 = lean::box(0);
}
x_32 = lean::cnstr_get(x_29, 1);
lean::inc(x_32);
lean::dec(x_29);
if (lean::obj_tag(x_32) == 0)
{
obj* x_36; obj* x_37; 
lean::dec(x_31);
x_36 = lean::box(0);
x_37 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_37, 0, x_21);
lean::cnstr_set(x_37, 1, x_36);
return x_37;
}
else
{
obj* x_38; obj* x_40; 
x_38 = lean::cnstr_get(x_32, 0);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_32, 1);
lean::inc(x_40);
lean::dec(x_32);
if (lean::obj_tag(x_40) == 0)
{
obj* x_43; obj* x_44; obj* x_46; obj* x_47; obj* x_48; 
x_43 = l_lean_parser_command_notation__spec_action_has__view;
x_44 = lean::cnstr_get(x_43, 0);
lean::inc(x_44);
x_46 = lean::apply_1(x_44, x_38);
if (lean::is_scalar(x_31)) {
 x_47 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_47 = x_31;
}
lean::cnstr_set(x_47, 0, x_46);
x_48 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_48, 0, x_21);
lean::cnstr_set(x_48, 1, x_47);
return x_48;
}
else
{
obj* x_52; obj* x_54; 
lean::dec(x_38);
lean::dec(x_40);
lean::dec(x_31);
x_52 = l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__4;
lean::inc(x_52);
x_54 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_54, 0, x_21);
lean::cnstr_set(x_54, 1, x_52);
return x_54;
}
}
}
}
else
{
obj* x_55; obj* x_58; 
x_55 = lean::cnstr_get(x_1, 0);
lean::inc(x_55);
lean::dec(x_1);
x_58 = l_lean_parser_syntax_as__node___main(x_55);
if (lean::obj_tag(x_58) == 0)
{
obj* x_59; obj* x_61; 
x_59 = l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__4;
lean::inc(x_59);
x_61 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_61, 0, x_21);
lean::cnstr_set(x_61, 1, x_59);
return x_61;
}
else
{
obj* x_62; obj* x_64; obj* x_65; 
x_62 = lean::cnstr_get(x_58, 0);
lean::inc(x_62);
if (lean::is_exclusive(x_58)) {
 lean::cnstr_release(x_58, 0);
 x_64 = x_58;
} else {
 lean::dec(x_58);
 x_64 = lean::box(0);
}
x_65 = lean::cnstr_get(x_62, 1);
lean::inc(x_65);
lean::dec(x_62);
if (lean::obj_tag(x_65) == 0)
{
obj* x_69; obj* x_70; 
lean::dec(x_64);
x_69 = lean::box(0);
x_70 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_70, 0, x_21);
lean::cnstr_set(x_70, 1, x_69);
return x_70;
}
else
{
obj* x_71; obj* x_73; 
x_71 = lean::cnstr_get(x_65, 0);
lean::inc(x_71);
x_73 = lean::cnstr_get(x_65, 1);
lean::inc(x_73);
lean::dec(x_65);
if (lean::obj_tag(x_73) == 0)
{
obj* x_76; obj* x_77; obj* x_79; obj* x_80; obj* x_81; 
x_76 = l_lean_parser_command_notation__spec_action_has__view;
x_77 = lean::cnstr_get(x_76, 0);
lean::inc(x_77);
x_79 = lean::apply_1(x_77, x_71);
if (lean::is_scalar(x_64)) {
 x_80 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_80 = x_64;
}
lean::cnstr_set(x_80, 0, x_79);
x_81 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_81, 0, x_21);
lean::cnstr_set(x_81, 1, x_80);
return x_81;
}
else
{
obj* x_85; obj* x_87; 
lean::dec(x_64);
lean::dec(x_71);
lean::dec(x_73);
x_85 = l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__4;
lean::inc(x_85);
x_87 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_87, 0, x_21);
lean::cnstr_set(x_87, 1, x_85);
return x_87;
}
}
}
}
}
case 3:
{
obj* x_88; 
x_88 = lean::box(0);
x_19 = x_88;
goto lbl_20;
}
default:
{
obj* x_90; 
lean::dec(x_2);
x_90 = lean::box(0);
x_19 = x_90;
goto lbl_20;
}
}
lbl_20:
{
lean::dec(x_19);
if (lean::obj_tag(x_1) == 0)
{
obj* x_92; 
x_92 = l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__3;
lean::inc(x_92);
return x_92;
}
else
{
obj* x_94; obj* x_97; 
x_94 = lean::cnstr_get(x_1, 0);
lean::inc(x_94);
lean::dec(x_1);
x_97 = l_lean_parser_syntax_as__node___main(x_94);
if (lean::obj_tag(x_97) == 0)
{
obj* x_98; 
x_98 = l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__1;
lean::inc(x_98);
return x_98;
}
else
{
obj* x_100; obj* x_102; obj* x_103; 
x_100 = lean::cnstr_get(x_97, 0);
lean::inc(x_100);
if (lean::is_exclusive(x_97)) {
 lean::cnstr_release(x_97, 0);
 x_102 = x_97;
} else {
 lean::dec(x_97);
 x_102 = lean::box(0);
}
x_103 = lean::cnstr_get(x_100, 1);
lean::inc(x_103);
lean::dec(x_100);
if (lean::obj_tag(x_103) == 0)
{
obj* x_107; 
lean::dec(x_102);
x_107 = l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__2;
lean::inc(x_107);
return x_107;
}
else
{
obj* x_109; obj* x_111; 
x_109 = lean::cnstr_get(x_103, 0);
lean::inc(x_109);
x_111 = lean::cnstr_get(x_103, 1);
lean::inc(x_111);
lean::dec(x_103);
if (lean::obj_tag(x_111) == 0)
{
obj* x_114; obj* x_115; obj* x_117; obj* x_118; obj* x_119; obj* x_121; 
x_114 = l_lean_parser_command_notation__spec_action_has__view;
x_115 = lean::cnstr_get(x_114, 0);
lean::inc(x_115);
x_117 = lean::apply_1(x_115, x_109);
if (lean::is_scalar(x_102)) {
 x_118 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_118 = x_102;
}
lean::cnstr_set(x_118, 0, x_117);
x_119 = l_lean_parser_ident_parser_view___rarg___lambda__1___closed__1;
lean::inc(x_119);
x_121 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_121, 0, x_119);
lean::cnstr_set(x_121, 1, x_118);
return x_121;
}
else
{
obj* x_125; 
lean::dec(x_111);
lean::dec(x_109);
lean::dec(x_102);
x_125 = l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__1;
lean::inc(x_125);
return x_125;
}
}
}
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_1);
if (lean::obj_tag(x_3) == 0)
{
obj* x_7; obj* x_9; obj* x_10; obj* x_12; 
x_7 = l_lean_parser_detail__ident_has__view_x_27___lambda__2___closed__1;
lean::inc(x_7);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_6);
lean::cnstr_set(x_9, 1, x_7);
x_10 = l_lean_parser_command_notation__spec_argument;
lean::inc(x_10);
x_12 = l_lean_parser_syntax_mk__node(x_10, x_9);
return x_12;
}
else
{
obj* x_13; obj* x_16; obj* x_17; obj* x_18; obj* x_20; obj* x_21; obj* x_22; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_29; 
x_13 = lean::cnstr_get(x_3, 0);
lean::inc(x_13);
lean::dec(x_3);
x_16 = lean::box(0);
x_17 = l_lean_parser_command_notation__spec_action_has__view;
x_18 = lean::cnstr_get(x_17, 1);
lean::inc(x_18);
x_20 = lean::apply_1(x_18, x_13);
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_20);
lean::cnstr_set(x_21, 1, x_16);
x_22 = l_lean_parser_no__kind;
lean::inc(x_22);
x_24 = l_lean_parser_syntax_mk__node(x_22, x_21);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_16);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_6);
lean::cnstr_set(x_26, 1, x_25);
x_27 = l_lean_parser_command_notation__spec_argument;
lean::inc(x_27);
x_29 = l_lean_parser_syntax_mk__node(x_27, x_26);
return x_29;
}
}
}
obj* _init_l_lean_parser_command_notation__spec_argument_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_notation__spec_argument_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_notation__spec_argument_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_parser_command_notation__spec_transition() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("transition");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* _init_l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(3);
x_4 = lean::mk_nat_obj(0u);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
obj* x_7; uint8 x_8; 
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_dec_eq(x_1, x_7);
lean::dec(x_1);
if (x_8 == 0)
{
obj* x_10; obj* x_11; obj* x_13; obj* x_14; 
x_10 = l_lean_parser_command_notation__spec_argument_has__view;
x_11 = lean::cnstr_get(x_10, 0);
lean::inc(x_11);
x_13 = lean::apply_1(x_11, x_0);
x_14 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_14, 0, x_13);
return x_14;
}
else
{
obj* x_15; obj* x_16; obj* x_18; obj* x_19; 
x_15 = l_lean_parser_command_notation__spec_binders_has__view;
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
x_18 = lean::apply_1(x_16, x_0);
x_19 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_19, 0, x_18);
return x_19;
}
}
else
{
obj* x_21; obj* x_22; obj* x_24; obj* x_25; 
lean::dec(x_1);
x_21 = l_lean_parser_command_notation__spec_binder_has__view;
x_22 = lean::cnstr_get(x_21, 0);
lean::inc(x_22);
x_24 = lean::apply_1(x_22, x_0);
x_25 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_25, 0, x_24);
return x_25;
}
}
}
}
obj* _init_l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("transition");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__1___closed__1;
lean::inc(x_5);
return x_5;
}
else
{
obj* x_7; obj* x_10; obj* x_12; obj* x_15; uint8 x_16; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::cnstr_get(x_7, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_7, 1);
lean::inc(x_12);
lean::dec(x_7);
x_15 = l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__1___closed__2;
x_16 = lean_name_dec_eq(x_10, x_15);
lean::dec(x_10);
if (x_16 == 0)
{
obj* x_19; 
lean::dec(x_12);
x_19 = l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__1___closed__1;
lean::inc(x_19);
return x_19;
}
else
{
if (lean::obj_tag(x_12) == 0)
{
obj* x_21; 
x_21 = l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__1___closed__1;
lean::inc(x_21);
return x_21;
}
else
{
obj* x_23; obj* x_25; 
x_23 = lean::cnstr_get(x_12, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_12, 1);
lean::inc(x_25);
lean::dec(x_12);
if (lean::obj_tag(x_25) == 0)
{
obj* x_28; 
x_28 = l_lean_parser_syntax_as__node___main(x_23);
if (lean::obj_tag(x_28) == 0)
{
obj* x_29; 
x_29 = l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__1___closed__1;
lean::inc(x_29);
return x_29;
}
else
{
obj* x_31; obj* x_34; obj* x_36; 
x_31 = lean::cnstr_get(x_28, 0);
lean::inc(x_31);
lean::dec(x_28);
x_34 = lean::cnstr_get(x_31, 0);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_31, 1);
lean::inc(x_36);
lean::dec(x_31);
switch (lean::obj_tag(x_34)) {
case 0:
{
obj* x_40; 
lean::dec(x_36);
x_40 = l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__1___closed__1;
lean::inc(x_40);
return x_40;
}
case 1:
{
obj* x_44; 
lean::dec(x_36);
lean::dec(x_34);
x_44 = l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__1___closed__1;
lean::inc(x_44);
return x_44;
}
default:
{
obj* x_46; obj* x_48; obj* x_51; uint8 x_52; 
x_46 = lean::cnstr_get(x_34, 0);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_34, 1);
lean::inc(x_48);
lean::dec(x_34);
x_51 = lean::box(0);
x_52 = lean_name_dec_eq(x_46, x_51);
lean::dec(x_46);
if (x_52 == 0)
{
obj* x_56; 
lean::dec(x_36);
lean::dec(x_48);
x_56 = l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__1___closed__1;
lean::inc(x_56);
return x_56;
}
else
{
if (lean::obj_tag(x_36) == 0)
{
obj* x_59; 
lean::dec(x_48);
x_59 = l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__1___closed__1;
lean::inc(x_59);
return x_59;
}
else
{
obj* x_61; obj* x_63; 
x_61 = lean::cnstr_get(x_36, 0);
lean::inc(x_61);
x_63 = lean::cnstr_get(x_36, 1);
lean::inc(x_63);
lean::dec(x_36);
if (lean::obj_tag(x_63) == 0)
{
x_1 = x_61;
x_2 = x_48;
goto lbl_3;
}
else
{
obj* x_69; 
lean::dec(x_61);
lean::dec(x_63);
lean::dec(x_48);
x_69 = l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__1___closed__1;
lean::inc(x_69);
return x_69;
}
}
}
}
}
}
}
else
{
obj* x_73; 
lean::dec(x_23);
lean::dec(x_25);
x_73 = l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__1___closed__1;
lean::inc(x_73);
return x_73;
}
}
}
}
lbl_3:
{
obj* x_75; uint8 x_76; 
x_75 = lean::mk_nat_obj(0u);
x_76 = lean::nat_dec_eq(x_2, x_75);
if (x_76 == 0)
{
obj* x_77; uint8 x_78; 
x_77 = lean::mk_nat_obj(1u);
x_78 = lean::nat_dec_eq(x_2, x_77);
lean::dec(x_2);
if (x_78 == 0)
{
obj* x_80; obj* x_81; obj* x_83; obj* x_84; 
x_80 = l_lean_parser_command_notation__spec_argument_has__view;
x_81 = lean::cnstr_get(x_80, 0);
lean::inc(x_81);
x_83 = lean::apply_1(x_81, x_1);
x_84 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_84, 0, x_83);
return x_84;
}
else
{
obj* x_85; obj* x_86; obj* x_88; obj* x_89; 
x_85 = l_lean_parser_command_notation__spec_binders_has__view;
x_86 = lean::cnstr_get(x_85, 0);
lean::inc(x_86);
x_88 = lean::apply_1(x_86, x_1);
x_89 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_89, 0, x_88);
return x_89;
}
}
else
{
obj* x_91; obj* x_92; obj* x_94; obj* x_95; 
lean::dec(x_2);
x_91 = l_lean_parser_command_notation__spec_binder_has__view;
x_92 = lean::cnstr_get(x_91, 0);
lean::inc(x_92);
x_94 = lean::apply_1(x_92, x_1);
x_95 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_95, 0, x_94);
return x_95;
}
}
}
}
obj* l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_2; obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_16; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_lean_parser_command_notation__spec_binder_has__view;
x_6 = lean::cnstr_get(x_5, 1);
lean::inc(x_6);
x_8 = lean::apply_1(x_6, x_2);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_1);
x_10 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__1;
lean::inc(x_10);
x_12 = l_lean_parser_syntax_mk__node(x_10, x_9);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_1);
x_14 = l_lean_parser_command_notation__spec_transition;
lean::inc(x_14);
x_16 = l_lean_parser_syntax_mk__node(x_14, x_13);
return x_16;
}
case 1:
{
obj* x_17; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_27; obj* x_28; obj* x_29; obj* x_31; 
x_17 = lean::cnstr_get(x_0, 0);
lean::inc(x_17);
lean::dec(x_0);
x_20 = l_lean_parser_command_notation__spec_binders_has__view;
x_21 = lean::cnstr_get(x_20, 1);
lean::inc(x_21);
x_23 = lean::apply_1(x_21, x_17);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_1);
x_25 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__2;
lean::inc(x_25);
x_27 = l_lean_parser_syntax_mk__node(x_25, x_24);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_1);
x_29 = l_lean_parser_command_notation__spec_transition;
lean::inc(x_29);
x_31 = l_lean_parser_syntax_mk__node(x_29, x_28);
return x_31;
}
default:
{
obj* x_32; obj* x_35; obj* x_36; obj* x_38; obj* x_39; obj* x_40; obj* x_42; obj* x_43; obj* x_44; obj* x_46; 
x_32 = lean::cnstr_get(x_0, 0);
lean::inc(x_32);
lean::dec(x_0);
x_35 = l_lean_parser_command_notation__spec_argument_has__view;
x_36 = lean::cnstr_get(x_35, 1);
lean::inc(x_36);
x_38 = lean::apply_1(x_36, x_32);
x_39 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_1);
x_40 = l_lean_parser_number_has__view_x_27___lambda__2___closed__1;
lean::inc(x_40);
x_42 = l_lean_parser_syntax_mk__node(x_40, x_39);
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_42);
lean::cnstr_set(x_43, 1, x_1);
x_44 = l_lean_parser_command_notation__spec_transition;
lean::inc(x_44);
x_46 = l_lean_parser_syntax_mk__node(x_44, x_43);
return x_46;
}
}
}
}
obj* _init_l_lean_parser_command_notation__spec_transition_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_notation__spec_transition_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_notation__spec_transition_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_parser_command_notation__spec_transition_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_0 = lean::box(0);
x_1 = l_lean_parser_command_notation__spec_precedence_parser_lean_parser_has__tokens;
lean::inc(x_1);
x_3 = l_lean_parser_tokens___rarg(x_1);
x_4 = l_lean_parser_list_cons_tokens___rarg(x_3, x_0);
x_5 = l_lean_parser_list_cons_tokens___rarg(x_0, x_4);
x_6 = l_lean_parser_tokens___rarg(x_5);
x_7 = l_lean_parser_command_notation__spec_action_parser_lean_parser_has__tokens;
lean::inc(x_7);
x_9 = l_lean_parser_tokens___rarg(x_7);
x_10 = l_lean_parser_list_cons_tokens___rarg(x_9, x_0);
x_11 = l_lean_parser_list_cons_tokens___rarg(x_0, x_10);
x_12 = l_lean_parser_tokens___rarg(x_11);
x_13 = l_lean_parser_list_cons_tokens___rarg(x_12, x_0);
lean::inc(x_6);
x_15 = l_lean_parser_list_cons_tokens___rarg(x_6, x_13);
x_16 = l_lean_parser_list_cons_tokens___rarg(x_6, x_15);
x_17 = l_lean_parser_tokens___rarg(x_16);
x_18 = l_lean_parser_list_cons_tokens___rarg(x_17, x_0);
x_19 = l_lean_parser_tokens___rarg(x_18);
return x_19;
}
}
obj* _init_l_lean_parser_command_notation__spec_transition_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_7; obj* x_8; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_43; 
x_0 = lean::mk_string("binder");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__or__ident___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__2), 6, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_precedence_parser), 5, 0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__7), 6, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_3);
lean::cnstr_set(x_5, 1, x_4);
lean::inc(x_5);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_1);
lean::cnstr_set(x_7, 1, x_5);
x_8 = l_lean_parser_command_notation__spec_binder;
lean::inc(x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1), 7, 2);
lean::closure_set(x_10, 0, x_8);
lean::closure_set(x_10, 1, x_7);
x_11 = lean::mk_string("binders");
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__or__ident___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__2), 6, 1);
lean::closure_set(x_12, 0, x_11);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_5);
x_14 = l_lean_parser_command_notation__spec_binders;
lean::inc(x_14);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1), 7, 2);
lean::closure_set(x_16, 0, x_14);
lean::closure_set(x_16, 1, x_13);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_action_parser), 5, 0);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__7), 6, 1);
lean::closure_set(x_18, 0, x_17);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_4);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_ident_parser___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__4), 1, 0);
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_20);
lean::cnstr_set(x_21, 1, x_19);
x_22 = l_lean_parser_command_notation__spec_argument;
lean::inc(x_22);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1), 7, 2);
lean::closure_set(x_24, 0, x_22);
lean::closure_set(x_24, 1, x_21);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_4);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_16);
lean::cnstr_set(x_26, 1, x_25);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_10);
lean::cnstr_set(x_27, 1, x_26);
x_28 = lean::mk_nat_obj(0u);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__3), 7, 2);
lean::closure_set(x_29, 0, x_27);
lean::closure_set(x_29, 1, x_28);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_4);
x_31 = l_lean_parser_term__parser__m_monad;
x_32 = l_lean_parser_term__parser__m_monad__except;
x_33 = l_lean_parser_term__parser__m_lean_parser_monad__parsec;
x_34 = l_lean_parser_term__parser__m_alternative;
x_35 = l_lean_parser_command_notation__spec_transition;
x_36 = l_lean_parser_command_notation__spec_transition_has__view;
lean::inc(x_36);
lean::inc(x_35);
lean::inc(x_34);
lean::inc(x_33);
lean::inc(x_32);
lean::inc(x_31);
x_43 = l_lean_parser_combinators_node_view___rarg(x_31, x_32, x_33, x_34, x_35, x_30, x_36);
return x_43;
}
}
obj* _init_l_lean_parser_command_notation__spec_transition_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_7; obj* x_8; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_0 = lean::mk_string("binder");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__or__ident___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__2), 6, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_precedence_parser), 5, 0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__7), 6, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_3);
lean::cnstr_set(x_5, 1, x_4);
lean::inc(x_5);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_1);
lean::cnstr_set(x_7, 1, x_5);
x_8 = l_lean_parser_command_notation__spec_binder;
lean::inc(x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1), 7, 2);
lean::closure_set(x_10, 0, x_8);
lean::closure_set(x_10, 1, x_7);
x_11 = lean::mk_string("binders");
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__or__ident___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__2), 6, 1);
lean::closure_set(x_12, 0, x_11);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_5);
x_14 = l_lean_parser_command_notation__spec_binders;
lean::inc(x_14);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1), 7, 2);
lean::closure_set(x_16, 0, x_14);
lean::closure_set(x_16, 1, x_13);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_action_parser), 5, 0);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__7), 6, 1);
lean::closure_set(x_18, 0, x_17);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_4);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_ident_parser___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__4), 1, 0);
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_20);
lean::cnstr_set(x_21, 1, x_19);
x_22 = l_lean_parser_command_notation__spec_argument;
lean::inc(x_22);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1), 7, 2);
lean::closure_set(x_24, 0, x_22);
lean::closure_set(x_24, 1, x_21);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_4);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_16);
lean::cnstr_set(x_26, 1, x_25);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_10);
lean::cnstr_set(x_27, 1, x_26);
x_28 = lean::mk_nat_obj(0u);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__3), 7, 2);
lean::closure_set(x_29, 0, x_27);
lean::closure_set(x_29, 1, x_28);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_4);
return x_30;
}
}
obj* l_lean_parser_command_notation__spec_transition_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_9; 
x_5 = l_lean_parser_command_notation__spec_transition;
x_6 = l_lean_parser_command_notation__spec_transition_parser___closed__1;
lean::inc(x_6);
lean::inc(x_5);
x_9 = l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(x_5, x_6, x_0, x_1, x_2, x_3, x_4);
return x_9;
}
}
obj* _init_l_lean_parser_command_notation__spec_rule() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("rule");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* _init_l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; 
x_0 = l_lean_parser_command_notation__spec_transition_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_1, x_3);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(0);
x_4 = lean::box(3);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; obj* x_6; obj* x_8; 
x_5 = l_lean_parser_command_notation__spec_notation__symbol_has__view;
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_8 = lean::apply_1(x_6, x_1);
if (lean::obj_tag(x_0) == 0)
{
obj* x_9; obj* x_10; 
x_9 = lean::box(3);
x_10 = l_lean_parser_syntax_as__node___main(x_9);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_13; 
x_11 = l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__1___closed__1;
lean::inc(x_11);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_8);
lean::cnstr_set(x_13, 1, x_11);
return x_13;
}
else
{
obj* x_14; obj* x_16; obj* x_17; 
x_14 = lean::cnstr_get(x_10, 0);
lean::inc(x_14);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 x_16 = x_10;
} else {
 lean::dec(x_10);
 x_16 = lean::box(0);
}
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
lean::dec(x_14);
if (lean::obj_tag(x_17) == 0)
{
obj* x_21; obj* x_22; 
lean::dec(x_16);
x_21 = lean::box(0);
x_22 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_22, 0, x_8);
lean::cnstr_set(x_22, 1, x_21);
return x_22;
}
else
{
obj* x_23; obj* x_25; 
x_23 = lean::cnstr_get(x_17, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_17, 1);
lean::inc(x_25);
lean::dec(x_17);
if (lean::obj_tag(x_25) == 0)
{
obj* x_28; obj* x_29; obj* x_31; obj* x_32; obj* x_33; 
x_28 = l_lean_parser_command_notation__spec_transition_has__view;
x_29 = lean::cnstr_get(x_28, 0);
lean::inc(x_29);
x_31 = lean::apply_1(x_29, x_23);
if (lean::is_scalar(x_16)) {
 x_32 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_32 = x_16;
}
lean::cnstr_set(x_32, 0, x_31);
x_33 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_33, 0, x_8);
lean::cnstr_set(x_33, 1, x_32);
return x_33;
}
else
{
obj* x_37; obj* x_39; 
lean::dec(x_23);
lean::dec(x_25);
lean::dec(x_16);
x_37 = l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__1___closed__1;
lean::inc(x_37);
x_39 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_39, 0, x_8);
lean::cnstr_set(x_39, 1, x_37);
return x_39;
}
}
}
}
else
{
obj* x_40; obj* x_43; 
x_40 = lean::cnstr_get(x_0, 0);
lean::inc(x_40);
lean::dec(x_0);
x_43 = l_lean_parser_syntax_as__node___main(x_40);
if (lean::obj_tag(x_43) == 0)
{
obj* x_44; obj* x_46; 
x_44 = l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__1___closed__1;
lean::inc(x_44);
x_46 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_46, 0, x_8);
lean::cnstr_set(x_46, 1, x_44);
return x_46;
}
else
{
obj* x_47; obj* x_49; obj* x_50; 
x_47 = lean::cnstr_get(x_43, 0);
lean::inc(x_47);
if (lean::is_exclusive(x_43)) {
 lean::cnstr_release(x_43, 0);
 x_49 = x_43;
} else {
 lean::dec(x_43);
 x_49 = lean::box(0);
}
x_50 = lean::cnstr_get(x_47, 1);
lean::inc(x_50);
lean::dec(x_47);
if (lean::obj_tag(x_50) == 0)
{
obj* x_54; obj* x_55; 
lean::dec(x_49);
x_54 = lean::box(0);
x_55 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_55, 0, x_8);
lean::cnstr_set(x_55, 1, x_54);
return x_55;
}
else
{
obj* x_56; obj* x_58; 
x_56 = lean::cnstr_get(x_50, 0);
lean::inc(x_56);
x_58 = lean::cnstr_get(x_50, 1);
lean::inc(x_58);
lean::dec(x_50);
if (lean::obj_tag(x_58) == 0)
{
obj* x_61; obj* x_62; obj* x_64; obj* x_65; obj* x_66; 
x_61 = l_lean_parser_command_notation__spec_transition_has__view;
x_62 = lean::cnstr_get(x_61, 0);
lean::inc(x_62);
x_64 = lean::apply_1(x_62, x_56);
if (lean::is_scalar(x_49)) {
 x_65 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_65 = x_49;
}
lean::cnstr_set(x_65, 0, x_64);
x_66 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_66, 0, x_8);
lean::cnstr_set(x_66, 1, x_65);
return x_66;
}
else
{
obj* x_70; obj* x_72; 
lean::dec(x_49);
lean::dec(x_56);
lean::dec(x_58);
x_70 = l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__1___closed__1;
lean::inc(x_70);
x_72 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_72, 0, x_8);
lean::cnstr_set(x_72, 1, x_70);
return x_72;
}
}
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__1___closed__2;
lean::inc(x_5);
return x_5;
}
else
{
obj* x_7; obj* x_10; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::dec(x_7);
if (lean::obj_tag(x_10) == 0)
{
obj* x_13; 
x_13 = lean::box(3);
x_1 = x_10;
x_2 = x_13;
goto lbl_3;
}
else
{
obj* x_14; obj* x_16; 
x_14 = lean::cnstr_get(x_10, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_10, 1);
lean::inc(x_16);
lean::dec(x_10);
x_1 = x_16;
x_2 = x_14;
goto lbl_3;
}
}
lbl_3:
{
obj* x_19; obj* x_20; obj* x_22; 
x_19 = l_lean_parser_command_notation__spec_notation__symbol_has__view;
x_20 = lean::cnstr_get(x_19, 0);
lean::inc(x_20);
x_22 = lean::apply_1(x_20, x_2);
if (lean::obj_tag(x_1) == 0)
{
obj* x_23; obj* x_24; 
x_23 = lean::box(3);
x_24 = l_lean_parser_syntax_as__node___main(x_23);
if (lean::obj_tag(x_24) == 0)
{
obj* x_25; obj* x_27; 
x_25 = l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__1___closed__1;
lean::inc(x_25);
x_27 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_27, 0, x_22);
lean::cnstr_set(x_27, 1, x_25);
return x_27;
}
else
{
obj* x_28; obj* x_30; obj* x_31; 
x_28 = lean::cnstr_get(x_24, 0);
lean::inc(x_28);
if (lean::is_exclusive(x_24)) {
 lean::cnstr_release(x_24, 0);
 x_30 = x_24;
} else {
 lean::dec(x_24);
 x_30 = lean::box(0);
}
x_31 = lean::cnstr_get(x_28, 1);
lean::inc(x_31);
lean::dec(x_28);
if (lean::obj_tag(x_31) == 0)
{
obj* x_35; obj* x_36; 
lean::dec(x_30);
x_35 = lean::box(0);
x_36 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_36, 0, x_22);
lean::cnstr_set(x_36, 1, x_35);
return x_36;
}
else
{
obj* x_37; obj* x_39; 
x_37 = lean::cnstr_get(x_31, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_31, 1);
lean::inc(x_39);
lean::dec(x_31);
if (lean::obj_tag(x_39) == 0)
{
obj* x_42; obj* x_43; obj* x_45; obj* x_46; obj* x_47; 
x_42 = l_lean_parser_command_notation__spec_transition_has__view;
x_43 = lean::cnstr_get(x_42, 0);
lean::inc(x_43);
x_45 = lean::apply_1(x_43, x_37);
if (lean::is_scalar(x_30)) {
 x_46 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_46 = x_30;
}
lean::cnstr_set(x_46, 0, x_45);
x_47 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_47, 0, x_22);
lean::cnstr_set(x_47, 1, x_46);
return x_47;
}
else
{
obj* x_51; obj* x_53; 
lean::dec(x_39);
lean::dec(x_37);
lean::dec(x_30);
x_51 = l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__1___closed__1;
lean::inc(x_51);
x_53 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_53, 0, x_22);
lean::cnstr_set(x_53, 1, x_51);
return x_53;
}
}
}
}
else
{
obj* x_54; obj* x_57; 
x_54 = lean::cnstr_get(x_1, 0);
lean::inc(x_54);
lean::dec(x_1);
x_57 = l_lean_parser_syntax_as__node___main(x_54);
if (lean::obj_tag(x_57) == 0)
{
obj* x_58; obj* x_60; 
x_58 = l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__1___closed__1;
lean::inc(x_58);
x_60 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_60, 0, x_22);
lean::cnstr_set(x_60, 1, x_58);
return x_60;
}
else
{
obj* x_61; obj* x_63; obj* x_64; 
x_61 = lean::cnstr_get(x_57, 0);
lean::inc(x_61);
if (lean::is_exclusive(x_57)) {
 lean::cnstr_release(x_57, 0);
 x_63 = x_57;
} else {
 lean::dec(x_57);
 x_63 = lean::box(0);
}
x_64 = lean::cnstr_get(x_61, 1);
lean::inc(x_64);
lean::dec(x_61);
if (lean::obj_tag(x_64) == 0)
{
obj* x_68; obj* x_69; 
lean::dec(x_63);
x_68 = lean::box(0);
x_69 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_69, 0, x_22);
lean::cnstr_set(x_69, 1, x_68);
return x_69;
}
else
{
obj* x_70; obj* x_72; 
x_70 = lean::cnstr_get(x_64, 0);
lean::inc(x_70);
x_72 = lean::cnstr_get(x_64, 1);
lean::inc(x_72);
lean::dec(x_64);
if (lean::obj_tag(x_72) == 0)
{
obj* x_75; obj* x_76; obj* x_78; obj* x_79; obj* x_80; 
x_75 = l_lean_parser_command_notation__spec_transition_has__view;
x_76 = lean::cnstr_get(x_75, 0);
lean::inc(x_76);
x_78 = lean::apply_1(x_76, x_70);
if (lean::is_scalar(x_63)) {
 x_79 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_79 = x_63;
}
lean::cnstr_set(x_79, 0, x_78);
x_80 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_80, 0, x_22);
lean::cnstr_set(x_80, 1, x_79);
return x_80;
}
else
{
obj* x_84; obj* x_86; 
lean::dec(x_70);
lean::dec(x_72);
lean::dec(x_63);
x_84 = l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__1___closed__1;
lean::inc(x_84);
x_86 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_86, 0, x_22);
lean::cnstr_set(x_86, 1, x_84);
return x_86;
}
}
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; obj* x_7; obj* x_9; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_lean_parser_command_notation__spec_notation__symbol_has__view;
x_7 = lean::cnstr_get(x_6, 1);
lean::inc(x_7);
x_9 = lean::apply_1(x_7, x_1);
if (lean::obj_tag(x_3) == 0)
{
obj* x_10; obj* x_12; obj* x_13; obj* x_15; 
x_10 = l_lean_parser_detail__ident_has__view_x_27___lambda__2___closed__1;
lean::inc(x_10);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_9);
lean::cnstr_set(x_12, 1, x_10);
x_13 = l_lean_parser_command_notation__spec_rule;
lean::inc(x_13);
x_15 = l_lean_parser_syntax_mk__node(x_13, x_12);
return x_15;
}
else
{
obj* x_16; obj* x_19; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_32; 
x_16 = lean::cnstr_get(x_3, 0);
lean::inc(x_16);
lean::dec(x_3);
x_19 = lean::box(0);
x_20 = l_lean_parser_command_notation__spec_transition_has__view;
x_21 = lean::cnstr_get(x_20, 1);
lean::inc(x_21);
x_23 = lean::apply_1(x_21, x_16);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_19);
x_25 = l_lean_parser_no__kind;
lean::inc(x_25);
x_27 = l_lean_parser_syntax_mk__node(x_25, x_24);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_19);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_9);
lean::cnstr_set(x_29, 1, x_28);
x_30 = l_lean_parser_command_notation__spec_rule;
lean::inc(x_30);
x_32 = l_lean_parser_syntax_mk__node(x_30, x_29);
return x_32;
}
}
}
obj* _init_l_lean_parser_command_notation__spec_rule_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_notation__spec_rule_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_notation__spec_rule_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_parser_command_notation__spec_rule_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_7; obj* x_8; 
x_0 = l_lean_parser_command_notation__spec_transition_parser_lean_parser_has__tokens;
lean::inc(x_0);
x_2 = l_lean_parser_tokens___rarg(x_0);
x_3 = lean::box(0);
x_4 = l_lean_parser_list_cons_tokens___rarg(x_2, x_3);
x_5 = l_lean_parser_command_notation__spec_notation__symbol_parser_lean_parser_has__tokens;
lean::inc(x_5);
x_7 = l_lean_parser_list_cons_tokens___rarg(x_5, x_4);
x_8 = l_lean_parser_tokens___rarg(x_7);
return x_8;
}
}
obj* _init_l_lean_parser_command_notation__spec_rule_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_18; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_transition_parser), 5, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__7), 6, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::box(0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_notation__symbol_parser), 5, 0);
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_3);
x_6 = l_lean_parser_term__parser__m_monad;
x_7 = l_lean_parser_term__parser__m_monad__except;
x_8 = l_lean_parser_term__parser__m_lean_parser_monad__parsec;
x_9 = l_lean_parser_term__parser__m_alternative;
x_10 = l_lean_parser_command_notation__spec_rule;
x_11 = l_lean_parser_command_notation__spec_rule_has__view;
lean::inc(x_11);
lean::inc(x_10);
lean::inc(x_9);
lean::inc(x_8);
lean::inc(x_7);
lean::inc(x_6);
x_18 = l_lean_parser_combinators_node_view___rarg(x_6, x_7, x_8, x_9, x_10, x_5, x_11);
return x_18;
}
}
obj* _init_l_lean_parser_command_notation__spec_rule_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_transition_parser), 5, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__7), 6, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::box(0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_notation__symbol_parser), 5, 0);
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_3);
return x_5;
}
}
obj* l_lean_parser_command_notation__spec_rule_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_9; 
x_5 = l_lean_parser_command_notation__spec_rule;
x_6 = l_lean_parser_command_notation__spec_rule_parser___closed__1;
lean::inc(x_6);
lean::inc(x_5);
x_9 = l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(x_5, x_6, x_0, x_1, x_2, x_3, x_4);
return x_9;
}
}
obj* _init_l_lean_parser_command_notation__spec() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_spec");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = l_lean_parser_command_notation__spec_rule_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_1, x_3);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
return x_6;
}
}
obj* _init_l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = l_lean_parser_command_notation__spec_rule_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
return x_1;
}
}
obj* _init_l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__3() {
_start:
{
obj* x_0; obj* x_2; obj* x_3; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_2 = lean::box(0);
x_3 = lean::mk_string("NOT_AN_IDENT");
lean::inc(x_3);
x_5 = l_lean_parser_substring_of__string(x_3);
x_6 = lean_name_mk_string(x_2, x_3);
x_7 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_7, 0, x_2);
lean::cnstr_set(x_7, 1, x_5);
lean::cnstr_set(x_7, 2, x_6);
lean::cnstr_set(x_7, 3, x_2);
lean::cnstr_set(x_7, 4, x_2);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
x_0 = x_8;
goto lbl_1;
lbl_1:
{
obj* x_9; obj* x_10; 
x_9 = lean::box(3);
x_10 = l_lean_parser_syntax_as__node___main(x_9);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_13; 
x_11 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__1;
lean::inc(x_11);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_0);
lean::cnstr_set(x_13, 1, x_11);
return x_13;
}
else
{
obj* x_14; obj* x_17; obj* x_20; obj* x_22; obj* x_23; 
x_14 = lean::cnstr_get(x_10, 0);
lean::inc(x_14);
lean::dec(x_10);
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
lean::dec(x_14);
x_20 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__2;
lean::inc(x_20);
x_22 = l_list_map___main___rarg(x_20, x_17);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_0);
lean::cnstr_set(x_23, 1, x_22);
return x_23;
}
}
}
}
obj* _init_l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("NOT_AN_IDENT");
lean::inc(x_1);
x_3 = l_lean_parser_substring_of__string(x_1);
x_4 = lean_name_mk_string(x_0, x_1);
x_5 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_5, 0, x_0);
lean::cnstr_set(x_5, 1, x_3);
lean::cnstr_set(x_5, 2, x_4);
lean::cnstr_set(x_5, 3, x_0);
lean::cnstr_set(x_5, 4, x_0);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
}
obj* _init_l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__5() {
_start:
{
obj* x_0; obj* x_2; obj* x_4; 
x_2 = l_lean_parser_ident_parser_view___rarg___lambda__1___closed__1;
lean::inc(x_2);
x_4 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_4, 0, x_2);
x_0 = x_4;
goto lbl_1;
lbl_1:
{
obj* x_5; obj* x_6; 
x_5 = lean::box(3);
x_6 = l_lean_parser_syntax_as__node___main(x_5);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_9; 
x_7 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__1;
lean::inc(x_7);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_0);
lean::cnstr_set(x_9, 1, x_7);
return x_9;
}
else
{
obj* x_10; obj* x_13; obj* x_16; obj* x_18; obj* x_19; 
x_10 = lean::cnstr_get(x_6, 0);
lean::inc(x_10);
lean::dec(x_6);
x_13 = lean::cnstr_get(x_10, 1);
lean::inc(x_13);
lean::dec(x_10);
x_16 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__2;
lean::inc(x_16);
x_18 = l_list_map___main___rarg(x_16, x_13);
x_19 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_19, 0, x_0);
lean::cnstr_set(x_19, 1, x_18);
return x_19;
}
}
}
}
obj* _init_l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__6() {
_start:
{
obj* x_0; obj* x_2; 
x_0 = l_lean_parser_ident_parser_view___rarg___lambda__1___closed__1;
lean::inc(x_0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_0);
return x_2;
}
}
obj* _init_l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__7() {
_start:
{
obj* x_0; obj* x_2; 
x_2 = lean::box(0);
x_0 = x_2;
goto lbl_1;
lbl_1:
{
obj* x_3; obj* x_4; 
x_3 = lean::box(3);
x_4 = l_lean_parser_syntax_as__node___main(x_3);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; obj* x_7; 
x_5 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__1;
lean::inc(x_5);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_0);
lean::cnstr_set(x_7, 1, x_5);
return x_7;
}
else
{
obj* x_8; obj* x_11; obj* x_14; obj* x_16; obj* x_17; 
x_8 = lean::cnstr_get(x_4, 0);
lean::inc(x_8);
lean::dec(x_4);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
lean::dec(x_8);
x_14 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__2;
lean::inc(x_14);
x_16 = l_list_map___main___rarg(x_14, x_11);
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_0);
lean::cnstr_set(x_17, 1, x_16);
return x_17;
}
}
}
}
obj* _init_l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__8() {
_start:
{
obj* x_0; obj* x_2; obj* x_3; obj* x_5; obj* x_6; obj* x_8; obj* x_9; 
x_8 = lean::box(0);
x_9 = lean::box(3);
x_5 = x_8;
x_6 = x_9;
goto lbl_7;
lbl_1:
{
obj* x_10; obj* x_11; 
x_10 = lean::box(3);
x_11 = l_lean_parser_syntax_as__node___main(x_10);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_14; 
x_12 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__1;
lean::inc(x_12);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_0);
lean::cnstr_set(x_14, 1, x_12);
return x_14;
}
else
{
obj* x_15; obj* x_18; obj* x_21; obj* x_23; obj* x_24; 
x_15 = lean::cnstr_get(x_11, 0);
lean::inc(x_15);
lean::dec(x_11);
x_18 = lean::cnstr_get(x_15, 1);
lean::inc(x_18);
lean::dec(x_15);
x_21 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__2;
lean::inc(x_21);
x_23 = l_list_map___main___rarg(x_21, x_18);
x_24 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_24, 0, x_0);
lean::cnstr_set(x_24, 1, x_23);
return x_24;
}
}
lbl_4:
{
obj* x_25; 
x_25 = l_lean_parser_syntax_as__node___main(x_3);
if (lean::obj_tag(x_25) == 0)
{
obj* x_26; obj* x_28; 
x_26 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__1;
lean::inc(x_26);
x_28 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_28, 0, x_2);
lean::cnstr_set(x_28, 1, x_26);
return x_28;
}
else
{
obj* x_29; obj* x_32; obj* x_35; obj* x_37; obj* x_38; 
x_29 = lean::cnstr_get(x_25, 0);
lean::inc(x_29);
lean::dec(x_25);
x_32 = lean::cnstr_get(x_29, 1);
lean::inc(x_32);
lean::dec(x_29);
x_35 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__2;
lean::inc(x_35);
x_37 = l_list_map___main___rarg(x_35, x_32);
x_38 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_38, 0, x_2);
lean::cnstr_set(x_38, 1, x_37);
return x_38;
}
}
lbl_7:
{
obj* x_39; obj* x_41; 
x_41 = l_lean_parser_syntax_as__node___main(x_6);
if (lean::obj_tag(x_41) == 0)
{
if (lean::obj_tag(x_5) == 0)
{
obj* x_42; 
x_42 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__5;
lean::inc(x_42);
return x_42;
}
else
{
obj* x_44; obj* x_47; 
x_44 = lean::cnstr_get(x_5, 0);
lean::inc(x_44);
lean::dec(x_5);
x_47 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__6;
lean::inc(x_47);
x_2 = x_47;
x_3 = x_44;
goto lbl_4;
}
}
else
{
obj* x_49; obj* x_51; obj* x_52; 
x_49 = lean::cnstr_get(x_41, 0);
lean::inc(x_49);
if (lean::is_exclusive(x_41)) {
 lean::cnstr_release(x_41, 0);
 x_51 = x_41;
} else {
 lean::dec(x_41);
 x_51 = lean::box(0);
}
x_52 = lean::cnstr_get(x_49, 1);
lean::inc(x_52);
lean::dec(x_49);
if (lean::obj_tag(x_52) == 0)
{
lean::dec(x_51);
if (lean::obj_tag(x_5) == 0)
{
obj* x_56; 
x_56 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__7;
lean::inc(x_56);
return x_56;
}
else
{
obj* x_58; obj* x_61; 
x_58 = lean::cnstr_get(x_5, 0);
lean::inc(x_58);
lean::dec(x_5);
x_61 = lean::box(0);
x_2 = x_61;
x_3 = x_58;
goto lbl_4;
}
}
else
{
obj* x_62; obj* x_64; 
x_62 = lean::cnstr_get(x_52, 0);
lean::inc(x_62);
x_64 = lean::cnstr_get(x_52, 1);
lean::inc(x_64);
lean::dec(x_52);
if (lean::obj_tag(x_64) == 0)
{
switch (lean::obj_tag(x_62)) {
case 1:
{
obj* x_67; obj* x_70; 
x_67 = lean::cnstr_get(x_62, 0);
lean::inc(x_67);
lean::dec(x_62);
if (lean::is_scalar(x_51)) {
 x_70 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_70 = x_51;
}
lean::cnstr_set(x_70, 0, x_67);
if (lean::obj_tag(x_5) == 0)
{
x_0 = x_70;
goto lbl_1;
}
else
{
obj* x_71; 
x_71 = lean::cnstr_get(x_5, 0);
lean::inc(x_71);
lean::dec(x_5);
x_2 = x_70;
x_3 = x_71;
goto lbl_4;
}
}
case 3:
{
obj* x_75; 
lean::dec(x_51);
x_75 = lean::box(0);
x_39 = x_75;
goto lbl_40;
}
default:
{
obj* x_78; 
lean::dec(x_51);
lean::dec(x_62);
x_78 = lean::box(0);
x_39 = x_78;
goto lbl_40;
}
}
}
else
{
lean::dec(x_51);
lean::dec(x_62);
lean::dec(x_64);
if (lean::obj_tag(x_5) == 0)
{
obj* x_82; 
x_82 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__5;
lean::inc(x_82);
return x_82;
}
else
{
obj* x_84; obj* x_87; 
x_84 = lean::cnstr_get(x_5, 0);
lean::inc(x_84);
lean::dec(x_5);
x_87 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__6;
lean::inc(x_87);
x_2 = x_87;
x_3 = x_84;
goto lbl_4;
}
}
}
}
lbl_40:
{
lean::dec(x_39);
if (lean::obj_tag(x_5) == 0)
{
obj* x_90; 
x_90 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__3;
lean::inc(x_90);
return x_90;
}
else
{
obj* x_92; obj* x_95; 
x_92 = lean::cnstr_get(x_5, 0);
lean::inc(x_92);
lean::dec(x_5);
x_95 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__4;
lean::inc(x_95);
x_2 = x_95;
x_3 = x_92;
goto lbl_4;
}
}
}
}
}
obj* l_lean_parser_command_notation__spec_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_4; obj* x_6; obj* x_7; obj* x_9; 
x_9 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_9) == 0)
{
obj* x_10; 
x_10 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__8;
lean::inc(x_10);
return x_10;
}
else
{
obj* x_12; obj* x_15; 
x_12 = lean::cnstr_get(x_9, 0);
lean::inc(x_12);
lean::dec(x_9);
x_15 = lean::cnstr_get(x_12, 1);
lean::inc(x_15);
lean::dec(x_12);
if (lean::obj_tag(x_15) == 0)
{
obj* x_18; 
x_18 = lean::box(3);
x_6 = x_15;
x_7 = x_18;
goto lbl_8;
}
else
{
obj* x_19; obj* x_21; 
x_19 = lean::cnstr_get(x_15, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_15, 1);
lean::inc(x_21);
lean::dec(x_15);
x_6 = x_21;
x_7 = x_19;
goto lbl_8;
}
}
lbl_2:
{
obj* x_24; obj* x_25; 
x_24 = lean::box(3);
x_25 = l_lean_parser_syntax_as__node___main(x_24);
if (lean::obj_tag(x_25) == 0)
{
obj* x_26; obj* x_28; 
x_26 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__1;
lean::inc(x_26);
x_28 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_28, 0, x_1);
lean::cnstr_set(x_28, 1, x_26);
return x_28;
}
else
{
obj* x_29; obj* x_32; obj* x_35; obj* x_37; obj* x_38; 
x_29 = lean::cnstr_get(x_25, 0);
lean::inc(x_29);
lean::dec(x_25);
x_32 = lean::cnstr_get(x_29, 1);
lean::inc(x_32);
lean::dec(x_29);
x_35 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__2;
lean::inc(x_35);
x_37 = l_list_map___main___rarg(x_35, x_32);
x_38 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_38, 0, x_1);
lean::cnstr_set(x_38, 1, x_37);
return x_38;
}
}
lbl_5:
{
obj* x_39; 
x_39 = l_lean_parser_syntax_as__node___main(x_4);
if (lean::obj_tag(x_39) == 0)
{
obj* x_40; obj* x_42; 
x_40 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__1;
lean::inc(x_40);
x_42 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_42, 0, x_3);
lean::cnstr_set(x_42, 1, x_40);
return x_42;
}
else
{
obj* x_43; obj* x_46; obj* x_49; obj* x_51; obj* x_52; 
x_43 = lean::cnstr_get(x_39, 0);
lean::inc(x_43);
lean::dec(x_39);
x_46 = lean::cnstr_get(x_43, 1);
lean::inc(x_46);
lean::dec(x_43);
x_49 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__2;
lean::inc(x_49);
x_51 = l_list_map___main___rarg(x_49, x_46);
x_52 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_52, 0, x_3);
lean::cnstr_set(x_52, 1, x_51);
return x_52;
}
}
lbl_8:
{
obj* x_53; obj* x_55; 
x_55 = l_lean_parser_syntax_as__node___main(x_7);
if (lean::obj_tag(x_55) == 0)
{
if (lean::obj_tag(x_6) == 0)
{
obj* x_56; 
x_56 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__5;
lean::inc(x_56);
return x_56;
}
else
{
obj* x_58; obj* x_61; 
x_58 = lean::cnstr_get(x_6, 0);
lean::inc(x_58);
lean::dec(x_6);
x_61 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__6;
lean::inc(x_61);
x_3 = x_61;
x_4 = x_58;
goto lbl_5;
}
}
else
{
obj* x_63; obj* x_65; obj* x_66; 
x_63 = lean::cnstr_get(x_55, 0);
lean::inc(x_63);
if (lean::is_exclusive(x_55)) {
 lean::cnstr_release(x_55, 0);
 x_65 = x_55;
} else {
 lean::dec(x_55);
 x_65 = lean::box(0);
}
x_66 = lean::cnstr_get(x_63, 1);
lean::inc(x_66);
lean::dec(x_63);
if (lean::obj_tag(x_66) == 0)
{
lean::dec(x_65);
if (lean::obj_tag(x_6) == 0)
{
obj* x_70; 
x_70 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__7;
lean::inc(x_70);
return x_70;
}
else
{
obj* x_72; obj* x_75; 
x_72 = lean::cnstr_get(x_6, 0);
lean::inc(x_72);
lean::dec(x_6);
x_75 = lean::box(0);
x_3 = x_75;
x_4 = x_72;
goto lbl_5;
}
}
else
{
obj* x_76; obj* x_78; 
x_76 = lean::cnstr_get(x_66, 0);
lean::inc(x_76);
x_78 = lean::cnstr_get(x_66, 1);
lean::inc(x_78);
lean::dec(x_66);
if (lean::obj_tag(x_78) == 0)
{
switch (lean::obj_tag(x_76)) {
case 1:
{
obj* x_81; obj* x_84; 
x_81 = lean::cnstr_get(x_76, 0);
lean::inc(x_81);
lean::dec(x_76);
if (lean::is_scalar(x_65)) {
 x_84 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_84 = x_65;
}
lean::cnstr_set(x_84, 0, x_81);
if (lean::obj_tag(x_6) == 0)
{
x_1 = x_84;
goto lbl_2;
}
else
{
obj* x_85; 
x_85 = lean::cnstr_get(x_6, 0);
lean::inc(x_85);
lean::dec(x_6);
x_3 = x_84;
x_4 = x_85;
goto lbl_5;
}
}
case 3:
{
obj* x_89; 
lean::dec(x_65);
x_89 = lean::box(0);
x_53 = x_89;
goto lbl_54;
}
default:
{
obj* x_92; 
lean::dec(x_76);
lean::dec(x_65);
x_92 = lean::box(0);
x_53 = x_92;
goto lbl_54;
}
}
}
else
{
lean::dec(x_76);
lean::dec(x_78);
lean::dec(x_65);
if (lean::obj_tag(x_6) == 0)
{
obj* x_96; 
x_96 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__5;
lean::inc(x_96);
return x_96;
}
else
{
obj* x_98; obj* x_101; 
x_98 = lean::cnstr_get(x_6, 0);
lean::inc(x_98);
lean::dec(x_6);
x_101 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__6;
lean::inc(x_101);
x_3 = x_101;
x_4 = x_98;
goto lbl_5;
}
}
}
}
lbl_54:
{
lean::dec(x_53);
if (lean::obj_tag(x_6) == 0)
{
obj* x_104; 
x_104 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__3;
lean::inc(x_104);
return x_104;
}
else
{
obj* x_106; obj* x_109; 
x_106 = lean::cnstr_get(x_6, 0);
lean::inc(x_106);
lean::dec(x_6);
x_109 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__4;
lean::inc(x_109);
x_3 = x_109;
x_4 = x_106;
goto lbl_5;
}
}
}
}
}
obj* _init_l_lean_parser_command_notation__spec_has__view_x_27___lambda__2___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = l_lean_parser_command_notation__spec_rule_has__view;
x_1 = lean::cnstr_get(x_0, 1);
lean::inc(x_1);
return x_1;
}
}
obj* l_lean_parser_command_notation__spec_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_13; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_lean_parser_command_notation__spec_has__view_x_27___lambda__2___closed__1;
lean::inc(x_6);
x_8 = l_list_map___main___rarg(x_6, x_3);
x_9 = l_lean_parser_no__kind;
lean::inc(x_9);
x_11 = l_lean_parser_syntax_mk__node(x_9, x_8);
x_12 = lean::box(0);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_11);
lean::cnstr_set(x_13, 1, x_12);
if (lean::obj_tag(x_1) == 0)
{
obj* x_14; obj* x_16; obj* x_17; obj* x_19; 
x_14 = l_lean_parser_combinators_many___rarg___closed__1;
lean::inc(x_14);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_14);
lean::cnstr_set(x_16, 1, x_13);
x_17 = l_lean_parser_command_notation__spec;
lean::inc(x_17);
x_19 = l_lean_parser_syntax_mk__node(x_17, x_16);
return x_19;
}
else
{
obj* x_20; obj* x_23; obj* x_24; obj* x_26; obj* x_27; obj* x_28; obj* x_30; 
x_20 = lean::cnstr_get(x_1, 0);
lean::inc(x_20);
lean::dec(x_1);
x_23 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_23, 0, x_20);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_12);
lean::inc(x_9);
x_26 = l_lean_parser_syntax_mk__node(x_9, x_24);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_13);
x_28 = l_lean_parser_command_notation__spec;
lean::inc(x_28);
x_30 = l_lean_parser_syntax_mk__node(x_28, x_27);
return x_30;
}
}
}
obj* _init_l_lean_parser_command_notation__spec_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_notation__spec_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_notation__spec_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* l___private_init_lean_parser_combinators_1__many1__aux___main___at_lean_parser_command_notation__spec_parser_lean_parser_has__tokens___spec__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; uint8 x_9; 
x_8 = lean::mk_nat_obj(0u);
x_9 = lean::nat_dec_eq(x_2, x_8);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_13; obj* x_14; obj* x_20; obj* x_21; obj* x_23; 
x_10 = lean::mk_nat_obj(1u);
x_11 = lean::nat_sub(x_2, x_10);
lean::dec(x_2);
lean::inc(x_5);
lean::inc(x_4);
lean::inc(x_3);
lean::inc(x_0);
x_20 = lean::apply_5(x_0, x_3, x_4, x_5, x_6, x_7);
x_21 = lean::cnstr_get(x_20, 0);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_20, 1);
lean::inc(x_23);
lean::dec(x_20);
if (lean::obj_tag(x_21) == 0)
{
x_13 = x_21;
x_14 = x_23;
goto lbl_15;
}
else
{
obj* x_26; uint8 x_28; obj* x_29; obj* x_30; obj* x_32; obj* x_34; obj* x_36; obj* x_39; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_47; obj* x_48; obj* x_49; 
x_26 = lean::cnstr_get(x_21, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get_scalar<uint8>(x_21, sizeof(void*)*1);
if (lean::is_exclusive(x_21)) {
 lean::cnstr_release(x_21, 0);
 x_29 = x_21;
} else {
 lean::dec(x_21);
 x_29 = lean::box(0);
}
x_30 = lean::cnstr_get(x_26, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_26, 1);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_26, 2);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_26, 3);
lean::inc(x_36);
lean::dec(x_26);
x_39 = l_option_get___main___at_lean_parser_run___spec__2(x_36);
lean::inc(x_1);
x_41 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_41, 0, x_39);
lean::cnstr_set(x_41, 1, x_1);
x_42 = lean::box(3);
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_42);
lean::cnstr_set(x_43, 1, x_41);
x_44 = l_list_reverse___rarg(x_43);
x_45 = l_lean_parser_no__kind;
lean::inc(x_45);
x_47 = l_lean_parser_syntax_mk__node(x_45, x_44);
x_48 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_48, 0, x_47);
x_49 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_49, 0, x_30);
lean::cnstr_set(x_49, 1, x_32);
lean::cnstr_set(x_49, 2, x_34);
lean::cnstr_set(x_49, 3, x_48);
if (x_28 == 0)
{
uint8 x_50; obj* x_51; obj* x_52; 
x_50 = 0;
if (lean::is_scalar(x_29)) {
 x_51 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_51 = x_29;
}
lean::cnstr_set(x_51, 0, x_49);
lean::cnstr_set_scalar(x_51, sizeof(void*)*1, x_50);
x_52 = x_51;
x_13 = x_52;
x_14 = x_23;
goto lbl_15;
}
else
{
obj* x_53; obj* x_54; 
if (lean::is_scalar(x_29)) {
 x_53 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_53 = x_29;
}
lean::cnstr_set(x_53, 0, x_49);
lean::cnstr_set_scalar(x_53, sizeof(void*)*1, x_28);
x_54 = x_53;
x_13 = x_54;
x_14 = x_23;
goto lbl_15;
}
}
lbl_15:
{
if (lean::obj_tag(x_13) == 0)
{
obj* x_55; obj* x_57; obj* x_59; obj* x_61; obj* x_62; obj* x_65; obj* x_66; obj* x_68; obj* x_70; 
x_55 = lean::cnstr_get(x_13, 0);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_13, 1);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_13, 2);
lean::inc(x_59);
if (lean::is_exclusive(x_13)) {
 lean::cnstr_release(x_13, 0);
 lean::cnstr_release(x_13, 1);
 lean::cnstr_release(x_13, 2);
 x_61 = x_13;
} else {
 lean::dec(x_13);
 x_61 = lean::box(0);
}
x_62 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_62, 0, x_55);
lean::cnstr_set(x_62, 1, x_1);
lean::inc(x_57);
lean::inc(x_62);
x_65 = l___private_init_lean_parser_combinators_1__many1__aux___main___at_lean_parser_command_notation__spec_parser_lean_parser_has__tokens___spec__3(x_0, x_62, x_11, x_3, x_4, x_5, x_57, x_14);
x_66 = lean::cnstr_get(x_65, 0);
lean::inc(x_66);
x_68 = lean::cnstr_get(x_65, 1);
lean::inc(x_68);
if (lean::is_exclusive(x_65)) {
 lean::cnstr_release(x_65, 0);
 lean::cnstr_release(x_65, 1);
 x_70 = x_65;
} else {
 lean::dec(x_65);
 x_70 = lean::box(0);
}
if (lean::obj_tag(x_66) == 0)
{
obj* x_74; obj* x_75; 
lean::dec(x_62);
lean::dec(x_61);
lean::dec(x_57);
x_74 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_59, x_66);
if (lean::is_scalar(x_70)) {
 x_75 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_75 = x_70;
}
lean::cnstr_set(x_75, 0, x_74);
lean::cnstr_set(x_75, 1, x_68);
return x_75;
}
else
{
obj* x_76; uint8 x_78; 
x_76 = lean::cnstr_get(x_66, 0);
lean::inc(x_76);
x_78 = lean::cnstr_get_scalar<uint8>(x_66, sizeof(void*)*1);
if (x_78 == 0)
{
obj* x_80; obj* x_81; obj* x_83; obj* x_84; obj* x_87; obj* x_89; obj* x_90; obj* x_91; obj* x_92; obj* x_93; 
lean::dec(x_66);
x_80 = l_list_reverse___rarg(x_62);
x_81 = l_lean_parser_no__kind;
lean::inc(x_81);
x_83 = l_lean_parser_syntax_mk__node(x_81, x_80);
x_84 = lean::cnstr_get(x_76, 2);
lean::inc(x_84);
lean::dec(x_76);
x_87 = l_mjoin___rarg___closed__1;
lean::inc(x_87);
x_89 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_89, 0, x_84);
lean::closure_set(x_89, 1, x_87);
x_90 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_90, 0, x_89);
if (lean::is_scalar(x_61)) {
 x_91 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_91 = x_61;
}
lean::cnstr_set(x_91, 0, x_83);
lean::cnstr_set(x_91, 1, x_57);
lean::cnstr_set(x_91, 2, x_90);
x_92 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_59, x_91);
if (lean::is_scalar(x_70)) {
 x_93 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_93 = x_70;
}
lean::cnstr_set(x_93, 0, x_92);
lean::cnstr_set(x_93, 1, x_68);
return x_93;
}
else
{
obj* x_98; obj* x_99; 
lean::dec(x_62);
lean::dec(x_61);
lean::dec(x_57);
lean::dec(x_76);
x_98 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_59, x_66);
if (lean::is_scalar(x_70)) {
 x_99 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_99 = x_70;
}
lean::cnstr_set(x_99, 0, x_98);
lean::cnstr_set(x_99, 1, x_68);
return x_99;
}
}
}
else
{
obj* x_106; uint8 x_108; obj* x_109; obj* x_110; obj* x_111; obj* x_112; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_11);
x_106 = lean::cnstr_get(x_13, 0);
lean::inc(x_106);
x_108 = lean::cnstr_get_scalar<uint8>(x_13, sizeof(void*)*1);
if (lean::is_exclusive(x_13)) {
 lean::cnstr_release(x_13, 0);
 x_109 = x_13;
} else {
 lean::dec(x_13);
 x_109 = lean::box(0);
}
if (lean::is_scalar(x_109)) {
 x_110 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_110 = x_109;
}
lean::cnstr_set(x_110, 0, x_106);
lean::cnstr_set_scalar(x_110, sizeof(void*)*1, x_108);
x_111 = x_110;
x_112 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_112, 0, x_111);
lean::cnstr_set(x_112, 1, x_14);
return x_112;
}
}
}
else
{
obj* x_116; obj* x_117; obj* x_118; obj* x_121; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_116 = lean::box(0);
x_117 = l___private_init_lean_parser_combinators_1__many1__aux___main___rarg___closed__1;
x_118 = l_mjoin___rarg___closed__1;
lean::inc(x_118);
lean::inc(x_117);
x_121 = l_lean_parser_monad__parsec_error___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__4___rarg(x_117, x_118, x_116, x_116, x_3, x_4, x_5, x_6, x_7);
return x_121;
}
}
}
obj* l_lean_parser_combinators_many1___at_lean_parser_command_notation__spec_parser_lean_parser_has__tokens___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_14; obj* x_16; obj* x_17; obj* x_19; obj* x_20; 
x_6 = lean::string_iterator_remaining(x_4);
x_7 = lean::box(0);
x_8 = lean::mk_nat_obj(1u);
x_9 = lean::nat_add(x_6, x_8);
lean::dec(x_6);
x_11 = l___private_init_lean_parser_combinators_1__many1__aux___main___at_lean_parser_command_notation__spec_parser_lean_parser_has__tokens___spec__3(x_0, x_7, x_9, x_1, x_2, x_3, x_4, x_5);
x_12 = lean::cnstr_get(x_11, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_11, 1);
lean::inc(x_14);
if (lean::is_exclusive(x_11)) {
 lean::cnstr_release(x_11, 0);
 lean::cnstr_release(x_11, 1);
 x_16 = x_11;
} else {
 lean::dec(x_11);
 x_16 = lean::box(0);
}
x_17 = l_lean_parser_finish__comment__block___closed__2;
lean::inc(x_17);
x_19 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_12);
if (lean::is_scalar(x_16)) {
 x_20 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_20 = x_16;
}
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_14);
return x_20;
}
}
obj* l_lean_parser_combinators_many___at_lean_parser_command_notation__spec_parser_lean_parser_has__tokens___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_7; obj* x_8; obj* x_10; obj* x_12; 
lean::inc(x_4);
x_7 = l_lean_parser_combinators_many1___at_lean_parser_command_notation__spec_parser_lean_parser_has__tokens___spec__2(x_0, x_1, x_2, x_3, x_4, x_5);
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 x_12 = x_7;
} else {
 lean::dec(x_7);
 x_12 = lean::box(0);
}
if (lean::obj_tag(x_8) == 0)
{
obj* x_14; 
lean::dec(x_4);
if (lean::is_scalar(x_12)) {
 x_14 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_14 = x_12;
}
lean::cnstr_set(x_14, 0, x_8);
lean::cnstr_set(x_14, 1, x_10);
return x_14;
}
else
{
obj* x_15; uint8 x_17; 
x_15 = lean::cnstr_get(x_8, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get_scalar<uint8>(x_8, sizeof(void*)*1);
if (x_17 == 0)
{
obj* x_19; obj* x_22; obj* x_24; obj* x_25; obj* x_26; obj* x_28; obj* x_29; 
lean::dec(x_8);
x_19 = lean::cnstr_get(x_15, 2);
lean::inc(x_19);
lean::dec(x_15);
x_22 = l_mjoin___rarg___closed__1;
lean::inc(x_22);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_24, 0, x_19);
lean::closure_set(x_24, 1, x_22);
x_25 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_25, 0, x_24);
x_26 = l_lean_parser_combinators_many___rarg___closed__1;
lean::inc(x_26);
x_28 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_28, 0, x_26);
lean::cnstr_set(x_28, 1, x_4);
lean::cnstr_set(x_28, 2, x_25);
if (lean::is_scalar(x_12)) {
 x_29 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_29 = x_12;
}
lean::cnstr_set(x_29, 0, x_28);
lean::cnstr_set(x_29, 1, x_10);
return x_29;
}
else
{
obj* x_32; 
lean::dec(x_15);
lean::dec(x_4);
if (lean::is_scalar(x_12)) {
 x_32 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_32 = x_12;
}
lean::cnstr_set(x_32, 0, x_8);
lean::cnstr_set(x_32, 1, x_10);
return x_32;
}
}
}
}
obj* _init_l_lean_parser_command_notation__spec_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = l_lean_parser_tokens___rarg(x_0);
x_2 = l_lean_parser_command_notation__spec_rule_parser_lean_parser_has__tokens;
lean::inc(x_2);
x_4 = l_lean_parser_tokens___rarg(x_2);
x_5 = l_lean_parser_list_cons_tokens___rarg(x_4, x_0);
x_6 = l_lean_parser_list_cons_tokens___rarg(x_1, x_5);
x_7 = l_lean_parser_tokens___rarg(x_6);
return x_7;
}
}
obj* _init_l_lean_parser_command_notation__spec_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_19; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_ident_parser___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__4), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__7), 6, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_rule_parser), 5, 0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_many___at_lean_parser_command_notation__spec_parser_lean_parser_has__tokens___spec__1), 6, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_3);
lean::cnstr_set(x_5, 1, x_4);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_5);
x_7 = l_lean_parser_term__parser__m_monad;
x_8 = l_lean_parser_term__parser__m_monad__except;
x_9 = l_lean_parser_term__parser__m_lean_parser_monad__parsec;
x_10 = l_lean_parser_term__parser__m_alternative;
x_11 = l_lean_parser_command_notation__spec;
x_12 = l_lean_parser_command_notation__spec_has__view;
lean::inc(x_12);
lean::inc(x_11);
lean::inc(x_10);
lean::inc(x_9);
lean::inc(x_8);
lean::inc(x_7);
x_19 = l_lean_parser_combinators_node_view___rarg(x_7, x_8, x_9, x_10, x_11, x_6, x_12);
return x_19;
}
}
obj* _init_l_lean_parser_command_notation__spec_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_ident_parser___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__4), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__7), 6, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_rule_parser), 5, 0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_many___at_lean_parser_command_notation__spec_parser_lean_parser_has__tokens___spec__1), 6, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_3);
lean::cnstr_set(x_5, 1, x_4);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_5);
return x_6;
}
}
obj* l_lean_parser_command_notation__spec_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_9; 
x_5 = l_lean_parser_command_notation__spec;
x_6 = l_lean_parser_command_notation__spec_parser___closed__1;
lean::inc(x_6);
lean::inc(x_5);
x_9 = l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(x_5, x_6, x_0, x_1, x_2, x_3, x_4);
return x_9;
}
}
obj* _init_l_lean_parser_command_notation() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(0);
x_4 = lean::box(3);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; obj* x_7; 
x_7 = l_lean_parser_syntax_as__node___main(x_1);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; 
x_8 = l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__1;
lean::inc(x_8);
x_5 = x_8;
goto lbl_6;
}
else
{
obj* x_10; obj* x_12; obj* x_13; 
x_10 = lean::cnstr_get(x_7, 0);
lean::inc(x_10);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 x_12 = x_7;
} else {
 lean::dec(x_7);
 x_12 = lean::box(0);
}
x_13 = lean::cnstr_get(x_10, 1);
lean::inc(x_13);
lean::dec(x_10);
if (lean::obj_tag(x_13) == 0)
{
obj* x_17; 
lean::dec(x_12);
x_17 = lean::box(0);
x_5 = x_17;
goto lbl_6;
}
else
{
obj* x_18; obj* x_20; 
x_18 = lean::cnstr_get(x_13, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_13, 1);
lean::inc(x_20);
lean::dec(x_13);
if (lean::obj_tag(x_20) == 0)
{
switch (lean::obj_tag(x_18)) {
case 0:
{
obj* x_23; obj* x_26; obj* x_27; 
x_23 = lean::cnstr_get(x_18, 0);
lean::inc(x_23);
lean::dec(x_18);
if (lean::is_scalar(x_12)) {
 x_26 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_26 = x_12;
}
lean::cnstr_set(x_26, 0, x_23);
x_27 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_27, 0, x_26);
x_5 = x_27;
goto lbl_6;
}
case 3:
{
obj* x_29; 
lean::dec(x_12);
x_29 = l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__1;
lean::inc(x_29);
x_5 = x_29;
goto lbl_6;
}
default:
{
obj* x_33; 
lean::dec(x_18);
lean::dec(x_12);
x_33 = l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__1;
lean::inc(x_33);
x_5 = x_33;
goto lbl_6;
}
}
}
else
{
obj* x_38; 
lean::dec(x_18);
lean::dec(x_20);
lean::dec(x_12);
x_38 = l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__1;
lean::inc(x_38);
x_5 = x_38;
goto lbl_6;
}
}
}
lbl_6:
{
obj* x_40; obj* x_41; 
if (lean::obj_tag(x_0) == 0)
{
obj* x_43; 
x_43 = lean::box(3);
x_40 = x_0;
x_41 = x_43;
goto lbl_42;
}
else
{
obj* x_44; obj* x_46; 
x_44 = lean::cnstr_get(x_0, 0);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_0, 1);
lean::inc(x_46);
lean::dec(x_0);
x_40 = x_46;
x_41 = x_44;
goto lbl_42;
}
lbl_42:
{
obj* x_49; 
switch (lean::obj_tag(x_41)) {
case 0:
{
obj* x_51; obj* x_54; 
x_51 = lean::cnstr_get(x_41, 0);
lean::inc(x_51);
lean::dec(x_41);
x_54 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_54, 0, x_51);
x_49 = x_54;
goto lbl_50;
}
case 3:
{
obj* x_55; 
x_55 = lean::box(0);
x_49 = x_55;
goto lbl_50;
}
default:
{
obj* x_57; 
lean::dec(x_41);
x_57 = lean::box(0);
x_49 = x_57;
goto lbl_50;
}
}
lbl_50:
{
obj* x_58; obj* x_59; 
if (lean::obj_tag(x_40) == 0)
{
obj* x_61; 
x_61 = lean::box(3);
x_58 = x_40;
x_59 = x_61;
goto lbl_60;
}
else
{
obj* x_62; obj* x_64; 
x_62 = lean::cnstr_get(x_40, 0);
lean::inc(x_62);
x_64 = lean::cnstr_get(x_40, 1);
lean::inc(x_64);
lean::dec(x_40);
x_58 = x_64;
x_59 = x_62;
goto lbl_60;
}
lbl_60:
{
obj* x_67; obj* x_68; obj* x_70; 
x_67 = l_lean_parser_command_notation__spec_has__view;
x_68 = lean::cnstr_get(x_67, 0);
lean::inc(x_68);
x_70 = lean::apply_1(x_68, x_59);
if (lean::obj_tag(x_58) == 0)
{
obj* x_71; 
x_71 = lean::box(0);
if (lean::obj_tag(x_58) == 0)
{
obj* x_72; obj* x_73; 
x_72 = lean::box(3);
x_73 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_73, 0, x_5);
lean::cnstr_set(x_73, 1, x_49);
lean::cnstr_set(x_73, 2, x_70);
lean::cnstr_set(x_73, 3, x_71);
lean::cnstr_set(x_73, 4, x_72);
return x_73;
}
else
{
obj* x_74; obj* x_77; 
x_74 = lean::cnstr_get(x_58, 0);
lean::inc(x_74);
lean::dec(x_58);
x_77 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_77, 0, x_5);
lean::cnstr_set(x_77, 1, x_49);
lean::cnstr_set(x_77, 2, x_70);
lean::cnstr_set(x_77, 3, x_71);
lean::cnstr_set(x_77, 4, x_74);
return x_77;
}
}
else
{
obj* x_78; obj* x_80; 
x_78 = lean::cnstr_get(x_58, 0);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_58, 1);
lean::inc(x_80);
lean::dec(x_58);
switch (lean::obj_tag(x_78)) {
case 0:
{
obj* x_83; obj* x_86; 
x_83 = lean::cnstr_get(x_78, 0);
lean::inc(x_83);
lean::dec(x_78);
x_86 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_86, 0, x_83);
if (lean::obj_tag(x_80) == 0)
{
obj* x_87; obj* x_88; 
x_87 = lean::box(3);
x_88 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_88, 0, x_5);
lean::cnstr_set(x_88, 1, x_49);
lean::cnstr_set(x_88, 2, x_70);
lean::cnstr_set(x_88, 3, x_86);
lean::cnstr_set(x_88, 4, x_87);
return x_88;
}
else
{
obj* x_89; obj* x_92; 
x_89 = lean::cnstr_get(x_80, 0);
lean::inc(x_89);
lean::dec(x_80);
x_92 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_92, 0, x_5);
lean::cnstr_set(x_92, 1, x_49);
lean::cnstr_set(x_92, 2, x_70);
lean::cnstr_set(x_92, 3, x_86);
lean::cnstr_set(x_92, 4, x_89);
return x_92;
}
}
case 3:
{
obj* x_93; 
x_93 = lean::box(0);
if (lean::obj_tag(x_80) == 0)
{
obj* x_94; obj* x_95; 
x_94 = lean::box(3);
x_95 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_95, 0, x_5);
lean::cnstr_set(x_95, 1, x_49);
lean::cnstr_set(x_95, 2, x_70);
lean::cnstr_set(x_95, 3, x_93);
lean::cnstr_set(x_95, 4, x_94);
return x_95;
}
else
{
obj* x_96; obj* x_99; 
x_96 = lean::cnstr_get(x_80, 0);
lean::inc(x_96);
lean::dec(x_80);
x_99 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_99, 0, x_5);
lean::cnstr_set(x_99, 1, x_49);
lean::cnstr_set(x_99, 2, x_70);
lean::cnstr_set(x_99, 3, x_93);
lean::cnstr_set(x_99, 4, x_96);
return x_99;
}
}
default:
{
obj* x_101; 
lean::dec(x_78);
x_101 = lean::box(0);
if (lean::obj_tag(x_80) == 0)
{
obj* x_102; obj* x_103; 
x_102 = lean::box(3);
x_103 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_103, 0, x_5);
lean::cnstr_set(x_103, 1, x_49);
lean::cnstr_set(x_103, 2, x_70);
lean::cnstr_set(x_103, 3, x_101);
lean::cnstr_set(x_103, 4, x_102);
return x_103;
}
else
{
obj* x_104; obj* x_107; 
x_104 = lean::cnstr_get(x_80, 0);
lean::inc(x_104);
lean::dec(x_80);
x_107 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_107, 0, x_5);
lean::cnstr_set(x_107, 1, x_49);
lean::cnstr_set(x_107, 2, x_70);
lean::cnstr_set(x_107, 3, x_101);
lean::cnstr_set(x_107, 4, x_104);
return x_107;
}
}
}
}
}
}
}
}
}
}
}
obj* l_lean_parser_command_notation_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__2;
lean::inc(x_5);
return x_5;
}
else
{
obj* x_7; obj* x_10; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::dec(x_7);
if (lean::obj_tag(x_10) == 0)
{
if (lean::obj_tag(x_10) == 0)
{
obj* x_13; 
x_13 = lean::box(3);
x_1 = x_10;
x_2 = x_13;
goto lbl_3;
}
else
{
obj* x_14; obj* x_16; 
x_14 = lean::cnstr_get(x_10, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_10, 1);
lean::inc(x_16);
lean::dec(x_10);
x_1 = x_16;
x_2 = x_14;
goto lbl_3;
}
}
else
{
obj* x_19; obj* x_21; obj* x_24; 
x_19 = lean::cnstr_get(x_10, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_10, 1);
lean::inc(x_21);
lean::dec(x_10);
x_24 = l_lean_parser_syntax_as__node___main(x_19);
if (lean::obj_tag(x_24) == 0)
{
if (lean::obj_tag(x_21) == 0)
{
obj* x_25; 
x_25 = lean::box(3);
x_1 = x_21;
x_2 = x_25;
goto lbl_3;
}
else
{
obj* x_26; obj* x_28; 
x_26 = lean::cnstr_get(x_21, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_21, 1);
lean::inc(x_28);
lean::dec(x_21);
x_1 = x_28;
x_2 = x_26;
goto lbl_3;
}
}
else
{
obj* x_31; obj* x_34; obj* x_37; 
x_31 = lean::cnstr_get(x_24, 0);
lean::inc(x_31);
lean::dec(x_24);
x_34 = lean::cnstr_get(x_31, 1);
lean::inc(x_34);
lean::dec(x_31);
x_37 = l_list_append___rarg(x_34, x_21);
if (lean::obj_tag(x_37) == 0)
{
obj* x_38; 
x_38 = lean::box(3);
x_1 = x_37;
x_2 = x_38;
goto lbl_3;
}
else
{
obj* x_39; obj* x_41; 
x_39 = lean::cnstr_get(x_37, 0);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_37, 1);
lean::inc(x_41);
lean::dec(x_37);
x_1 = x_41;
x_2 = x_39;
goto lbl_3;
}
}
}
}
lbl_3:
{
obj* x_44; obj* x_46; 
x_46 = l_lean_parser_syntax_as__node___main(x_2);
if (lean::obj_tag(x_46) == 0)
{
obj* x_47; 
x_47 = l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__1;
lean::inc(x_47);
x_44 = x_47;
goto lbl_45;
}
else
{
obj* x_49; obj* x_51; obj* x_52; 
x_49 = lean::cnstr_get(x_46, 0);
lean::inc(x_49);
if (lean::is_exclusive(x_46)) {
 lean::cnstr_release(x_46, 0);
 x_51 = x_46;
} else {
 lean::dec(x_46);
 x_51 = lean::box(0);
}
x_52 = lean::cnstr_get(x_49, 1);
lean::inc(x_52);
lean::dec(x_49);
if (lean::obj_tag(x_52) == 0)
{
obj* x_56; 
lean::dec(x_51);
x_56 = lean::box(0);
x_44 = x_56;
goto lbl_45;
}
else
{
obj* x_57; obj* x_59; 
x_57 = lean::cnstr_get(x_52, 0);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_52, 1);
lean::inc(x_59);
lean::dec(x_52);
if (lean::obj_tag(x_59) == 0)
{
switch (lean::obj_tag(x_57)) {
case 0:
{
obj* x_62; obj* x_65; obj* x_66; 
x_62 = lean::cnstr_get(x_57, 0);
lean::inc(x_62);
lean::dec(x_57);
if (lean::is_scalar(x_51)) {
 x_65 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_65 = x_51;
}
lean::cnstr_set(x_65, 0, x_62);
x_66 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_66, 0, x_65);
x_44 = x_66;
goto lbl_45;
}
case 3:
{
obj* x_68; 
lean::dec(x_51);
x_68 = l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__1;
lean::inc(x_68);
x_44 = x_68;
goto lbl_45;
}
default:
{
obj* x_72; 
lean::dec(x_51);
lean::dec(x_57);
x_72 = l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__1;
lean::inc(x_72);
x_44 = x_72;
goto lbl_45;
}
}
}
else
{
obj* x_77; 
lean::dec(x_51);
lean::dec(x_59);
lean::dec(x_57);
x_77 = l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__1;
lean::inc(x_77);
x_44 = x_77;
goto lbl_45;
}
}
}
lbl_45:
{
obj* x_79; obj* x_80; 
if (lean::obj_tag(x_1) == 0)
{
obj* x_82; 
x_82 = lean::box(3);
x_79 = x_1;
x_80 = x_82;
goto lbl_81;
}
else
{
obj* x_83; obj* x_85; 
x_83 = lean::cnstr_get(x_1, 0);
lean::inc(x_83);
x_85 = lean::cnstr_get(x_1, 1);
lean::inc(x_85);
lean::dec(x_1);
x_79 = x_85;
x_80 = x_83;
goto lbl_81;
}
lbl_81:
{
obj* x_88; 
switch (lean::obj_tag(x_80)) {
case 0:
{
obj* x_90; obj* x_93; 
x_90 = lean::cnstr_get(x_80, 0);
lean::inc(x_90);
lean::dec(x_80);
x_93 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_93, 0, x_90);
x_88 = x_93;
goto lbl_89;
}
case 3:
{
obj* x_94; 
x_94 = lean::box(0);
x_88 = x_94;
goto lbl_89;
}
default:
{
obj* x_96; 
lean::dec(x_80);
x_96 = lean::box(0);
x_88 = x_96;
goto lbl_89;
}
}
lbl_89:
{
obj* x_97; obj* x_98; 
if (lean::obj_tag(x_79) == 0)
{
obj* x_100; 
x_100 = lean::box(3);
x_97 = x_79;
x_98 = x_100;
goto lbl_99;
}
else
{
obj* x_101; obj* x_103; 
x_101 = lean::cnstr_get(x_79, 0);
lean::inc(x_101);
x_103 = lean::cnstr_get(x_79, 1);
lean::inc(x_103);
lean::dec(x_79);
x_97 = x_103;
x_98 = x_101;
goto lbl_99;
}
lbl_99:
{
obj* x_106; obj* x_107; obj* x_109; 
x_106 = l_lean_parser_command_notation__spec_has__view;
x_107 = lean::cnstr_get(x_106, 0);
lean::inc(x_107);
x_109 = lean::apply_1(x_107, x_98);
if (lean::obj_tag(x_97) == 0)
{
obj* x_110; 
x_110 = lean::box(0);
if (lean::obj_tag(x_97) == 0)
{
obj* x_111; obj* x_112; 
x_111 = lean::box(3);
x_112 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_112, 0, x_44);
lean::cnstr_set(x_112, 1, x_88);
lean::cnstr_set(x_112, 2, x_109);
lean::cnstr_set(x_112, 3, x_110);
lean::cnstr_set(x_112, 4, x_111);
return x_112;
}
else
{
obj* x_113; obj* x_116; 
x_113 = lean::cnstr_get(x_97, 0);
lean::inc(x_113);
lean::dec(x_97);
x_116 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_116, 0, x_44);
lean::cnstr_set(x_116, 1, x_88);
lean::cnstr_set(x_116, 2, x_109);
lean::cnstr_set(x_116, 3, x_110);
lean::cnstr_set(x_116, 4, x_113);
return x_116;
}
}
else
{
obj* x_117; obj* x_119; 
x_117 = lean::cnstr_get(x_97, 0);
lean::inc(x_117);
x_119 = lean::cnstr_get(x_97, 1);
lean::inc(x_119);
lean::dec(x_97);
switch (lean::obj_tag(x_117)) {
case 0:
{
obj* x_122; obj* x_125; 
x_122 = lean::cnstr_get(x_117, 0);
lean::inc(x_122);
lean::dec(x_117);
x_125 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_125, 0, x_122);
if (lean::obj_tag(x_119) == 0)
{
obj* x_126; obj* x_127; 
x_126 = lean::box(3);
x_127 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_127, 0, x_44);
lean::cnstr_set(x_127, 1, x_88);
lean::cnstr_set(x_127, 2, x_109);
lean::cnstr_set(x_127, 3, x_125);
lean::cnstr_set(x_127, 4, x_126);
return x_127;
}
else
{
obj* x_128; obj* x_131; 
x_128 = lean::cnstr_get(x_119, 0);
lean::inc(x_128);
lean::dec(x_119);
x_131 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_131, 0, x_44);
lean::cnstr_set(x_131, 1, x_88);
lean::cnstr_set(x_131, 2, x_109);
lean::cnstr_set(x_131, 3, x_125);
lean::cnstr_set(x_131, 4, x_128);
return x_131;
}
}
case 3:
{
obj* x_132; 
x_132 = lean::box(0);
if (lean::obj_tag(x_119) == 0)
{
obj* x_133; obj* x_134; 
x_133 = lean::box(3);
x_134 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_134, 0, x_44);
lean::cnstr_set(x_134, 1, x_88);
lean::cnstr_set(x_134, 2, x_109);
lean::cnstr_set(x_134, 3, x_132);
lean::cnstr_set(x_134, 4, x_133);
return x_134;
}
else
{
obj* x_135; obj* x_138; 
x_135 = lean::cnstr_get(x_119, 0);
lean::inc(x_135);
lean::dec(x_119);
x_138 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_138, 0, x_44);
lean::cnstr_set(x_138, 1, x_88);
lean::cnstr_set(x_138, 2, x_109);
lean::cnstr_set(x_138, 3, x_132);
lean::cnstr_set(x_138, 4, x_135);
return x_138;
}
}
default:
{
obj* x_140; 
lean::dec(x_117);
x_140 = lean::box(0);
if (lean::obj_tag(x_119) == 0)
{
obj* x_141; obj* x_142; 
x_141 = lean::box(3);
x_142 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_142, 0, x_44);
lean::cnstr_set(x_142, 1, x_88);
lean::cnstr_set(x_142, 2, x_109);
lean::cnstr_set(x_142, 3, x_140);
lean::cnstr_set(x_142, 4, x_141);
return x_142;
}
else
{
obj* x_143; obj* x_146; 
x_143 = lean::cnstr_get(x_119, 0);
lean::inc(x_143);
lean::dec(x_119);
x_146 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_146, 0, x_44);
lean::cnstr_set(x_146, 1, x_88);
lean::cnstr_set(x_146, 2, x_109);
lean::cnstr_set(x_146, 3, x_140);
lean::cnstr_set(x_146, 4, x_143);
return x_146;
}
}
}
}
}
}
}
}
}
}
}
obj* l_lean_parser_command_notation_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_12; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_22; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 3);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 4);
lean::inc(x_9);
lean::dec(x_0);
x_12 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
lean::inc(x_12);
x_14 = l_option_map___rarg(x_12, x_3);
x_15 = lean::box(3);
x_16 = l_option_get__or__else___main___rarg(x_14, x_15);
x_17 = lean::box(0);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_16);
lean::cnstr_set(x_18, 1, x_17);
x_19 = l_lean_parser_command_notation__spec_has__view;
x_20 = lean::cnstr_get(x_19, 1);
lean::inc(x_20);
x_22 = lean::apply_1(x_20, x_5);
lean::inc(x_12);
x_24 = l_option_map___rarg(x_12, x_7);
x_25 = l_option_get__or__else___main___rarg(x_24, x_15);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_9);
lean::cnstr_set(x_26, 1, x_17);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_25);
lean::cnstr_set(x_27, 1, x_26);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_22);
lean::cnstr_set(x_28, 1, x_27);
if (lean::obj_tag(x_1) == 0)
{
obj* x_29; obj* x_31; obj* x_32; obj* x_34; obj* x_35; obj* x_36; obj* x_38; 
x_29 = l_lean_parser_combinators_many___rarg___closed__1;
lean::inc(x_29);
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_29);
lean::cnstr_set(x_31, 1, x_18);
x_32 = l_lean_parser_no__kind;
lean::inc(x_32);
x_34 = l_lean_parser_syntax_mk__node(x_32, x_31);
x_35 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_28);
x_36 = l_lean_parser_command_notation;
lean::inc(x_36);
x_38 = l_lean_parser_syntax_mk__node(x_36, x_35);
return x_38;
}
else
{
obj* x_39; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_48; obj* x_49; obj* x_51; obj* x_52; obj* x_53; obj* x_55; 
x_39 = lean::cnstr_get(x_1, 0);
lean::inc(x_39);
lean::dec(x_1);
lean::inc(x_12);
x_43 = l_option_map___rarg(x_12, x_39);
x_44 = l_option_get__or__else___main___rarg(x_43, x_15);
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_17);
x_46 = l_lean_parser_no__kind;
lean::inc(x_46);
x_48 = l_lean_parser_syntax_mk__node(x_46, x_45);
x_49 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_49, 0, x_48);
lean::cnstr_set(x_49, 1, x_18);
lean::inc(x_46);
x_51 = l_lean_parser_syntax_mk__node(x_46, x_49);
x_52 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_28);
x_53 = l_lean_parser_command_notation;
lean::inc(x_53);
x_55 = l_lean_parser_syntax_mk__node(x_53, x_52);
return x_55;
}
}
}
obj* _init_l_lean_parser_command_notation_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_notation_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_notation_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_parser_command_notation_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_21; 
x_0 = lean::mk_string("local ");
x_1 = lean::mk_nat_obj(0u);
x_2 = l_lean_parser_symbol_tokens___rarg(x_0, x_1);
x_3 = l_lean_parser_tokens___rarg(x_2);
x_4 = lean::mk_string("notation");
x_5 = l_lean_parser_symbol_tokens___rarg(x_4, x_1);
x_6 = lean::box(0);
x_7 = l_lean_parser_list_cons_tokens___rarg(x_5, x_6);
x_8 = l_lean_parser_list_cons_tokens___rarg(x_3, x_7);
x_9 = l_lean_parser_tokens___rarg(x_8);
x_10 = l_lean_parser_tokens___rarg(x_9);
x_11 = lean::mk_string(":=");
x_12 = l_lean_parser_symbol_tokens___rarg(x_11, x_1);
x_13 = l_lean_parser_term_parser_lean_parser_has__tokens___closed__1;
lean::inc(x_13);
x_15 = l_lean_parser_list_cons_tokens___rarg(x_13, x_6);
x_16 = l_lean_parser_list_cons_tokens___rarg(x_12, x_15);
x_17 = l_lean_parser_command_notation__spec_parser_lean_parser_has__tokens;
lean::inc(x_17);
x_19 = l_lean_parser_list_cons_tokens___rarg(x_17, x_16);
x_20 = l_lean_parser_list_cons_tokens___rarg(x_10, x_19);
x_21 = l_lean_parser_tokens___rarg(x_20);
return x_21;
}
}
obj* _init_l_lean_parser_command_notation_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_39; 
x_0 = lean::mk_string("local ");
x_1 = l_string_trim(x_0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_5, 0, x_1);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__7), 6, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::mk_string("notation");
x_8 = l_string_trim(x_7);
lean::inc(x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_10, 0, x_8);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_11, 0, x_8);
lean::closure_set(x_11, 1, x_4);
lean::closure_set(x_11, 2, x_10);
x_12 = lean::box(0);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_11);
lean::cnstr_set(x_13, 1, x_12);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_6);
lean::cnstr_set(x_14, 1, x_13);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_action_parser_lean_parser_has__view___lambda__2), 6, 1);
lean::closure_set(x_15, 0, x_14);
x_16 = lean::mk_string(":=");
x_17 = l_string_trim(x_16);
lean::inc(x_17);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_19, 0, x_17);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_20, 0, x_17);
lean::closure_set(x_20, 1, x_4);
lean::closure_set(x_20, 2, x_19);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_parser), 6, 1);
lean::closure_set(x_21, 0, x_4);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_12);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_20);
lean::cnstr_set(x_23, 1, x_22);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_parser), 5, 0);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_23);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_15);
lean::cnstr_set(x_26, 1, x_25);
x_27 = l_lean_parser_term__parser__m_monad;
x_28 = l_lean_parser_term__parser__m_monad__except;
x_29 = l_lean_parser_term__parser__m_lean_parser_monad__parsec;
x_30 = l_lean_parser_term__parser__m_alternative;
x_31 = l_lean_parser_command_notation;
x_32 = l_lean_parser_command_notation_has__view;
lean::inc(x_32);
lean::inc(x_31);
lean::inc(x_30);
lean::inc(x_29);
lean::inc(x_28);
lean::inc(x_27);
x_39 = l_lean_parser_combinators_node_view___rarg(x_27, x_28, x_29, x_30, x_31, x_26, x_32);
return x_39;
}
}
obj* _init_l_lean_parser_command_notation_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_0 = lean::mk_string("local ");
x_1 = l_string_trim(x_0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_5, 0, x_1);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__7), 6, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::mk_string("notation");
x_8 = l_string_trim(x_7);
lean::inc(x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_10, 0, x_8);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_11, 0, x_8);
lean::closure_set(x_11, 1, x_4);
lean::closure_set(x_11, 2, x_10);
x_12 = lean::box(0);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_11);
lean::cnstr_set(x_13, 1, x_12);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_6);
lean::cnstr_set(x_14, 1, x_13);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_action_parser_lean_parser_has__view___lambda__2), 6, 1);
lean::closure_set(x_15, 0, x_14);
x_16 = lean::mk_string(":=");
x_17 = l_string_trim(x_16);
lean::inc(x_17);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_19, 0, x_17);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_20, 0, x_17);
lean::closure_set(x_20, 1, x_4);
lean::closure_set(x_20, 2, x_19);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_parser), 6, 1);
lean::closure_set(x_21, 0, x_4);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_12);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_20);
lean::cnstr_set(x_23, 1, x_22);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_parser), 5, 0);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_23);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_15);
lean::cnstr_set(x_26, 1, x_25);
return x_26;
}
}
obj* l_lean_parser_command_notation_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_9; 
x_5 = l_lean_parser_command_notation;
x_6 = l_lean_parser_command_notation_parser___closed__1;
lean::inc(x_6);
lean::inc(x_5);
x_9 = l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(x_5, x_6, x_0, x_1, x_2, x_3, x_4);
return x_9;
}
}
obj* _init_l_lean_parser_command_reserve__notation() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("reserve_notation");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_parser_command_reserve__notation_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_0 = l_lean_parser_command_notation__spec_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_1, x_3);
return x_4;
}
}
obj* _init_l_lean_parser_command_reserve__notation_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(0);
x_4 = lean::box(3);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; 
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_7; obj* x_10; 
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
lean::dec(x_1);
x_10 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_10, 0, x_7);
x_5 = x_10;
goto lbl_6;
}
case 3:
{
obj* x_11; 
x_11 = lean::box(0);
x_5 = x_11;
goto lbl_6;
}
default:
{
obj* x_13; 
lean::dec(x_1);
x_13 = lean::box(0);
x_5 = x_13;
goto lbl_6;
}
}
lbl_6:
{
obj* x_14; obj* x_15; 
if (lean::obj_tag(x_0) == 0)
{
obj* x_17; 
x_17 = lean::box(3);
x_14 = x_0;
x_15 = x_17;
goto lbl_16;
}
else
{
obj* x_18; obj* x_20; 
x_18 = lean::cnstr_get(x_0, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_0, 1);
lean::inc(x_20);
lean::dec(x_0);
x_14 = x_20;
x_15 = x_18;
goto lbl_16;
}
lbl_16:
{
switch (lean::obj_tag(x_15)) {
case 0:
{
obj* x_23; obj* x_26; 
x_23 = lean::cnstr_get(x_15, 0);
lean::inc(x_23);
lean::dec(x_15);
x_26 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_26, 0, x_23);
if (lean::obj_tag(x_14) == 0)
{
obj* x_27; obj* x_29; 
x_27 = l_lean_parser_command_reserve__notation_has__view_x_27___lambda__1___closed__1;
lean::inc(x_27);
x_29 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_29, 0, x_5);
lean::cnstr_set(x_29, 1, x_26);
lean::cnstr_set(x_29, 2, x_27);
return x_29;
}
else
{
obj* x_30; obj* x_33; obj* x_34; obj* x_36; obj* x_37; 
x_30 = lean::cnstr_get(x_14, 0);
lean::inc(x_30);
lean::dec(x_14);
x_33 = l_lean_parser_command_notation__spec_has__view;
x_34 = lean::cnstr_get(x_33, 0);
lean::inc(x_34);
x_36 = lean::apply_1(x_34, x_30);
x_37 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_37, 0, x_5);
lean::cnstr_set(x_37, 1, x_26);
lean::cnstr_set(x_37, 2, x_36);
return x_37;
}
}
case 3:
{
obj* x_38; 
x_38 = lean::box(0);
if (lean::obj_tag(x_14) == 0)
{
obj* x_39; obj* x_41; 
x_39 = l_lean_parser_command_reserve__notation_has__view_x_27___lambda__1___closed__1;
lean::inc(x_39);
x_41 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_41, 0, x_5);
lean::cnstr_set(x_41, 1, x_38);
lean::cnstr_set(x_41, 2, x_39);
return x_41;
}
else
{
obj* x_42; obj* x_45; obj* x_46; obj* x_48; obj* x_49; 
x_42 = lean::cnstr_get(x_14, 0);
lean::inc(x_42);
lean::dec(x_14);
x_45 = l_lean_parser_command_notation__spec_has__view;
x_46 = lean::cnstr_get(x_45, 0);
lean::inc(x_46);
x_48 = lean::apply_1(x_46, x_42);
x_49 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_49, 0, x_5);
lean::cnstr_set(x_49, 1, x_38);
lean::cnstr_set(x_49, 2, x_48);
return x_49;
}
}
default:
{
obj* x_51; 
lean::dec(x_15);
x_51 = lean::box(0);
if (lean::obj_tag(x_14) == 0)
{
obj* x_52; obj* x_54; 
x_52 = l_lean_parser_command_reserve__notation_has__view_x_27___lambda__1___closed__1;
lean::inc(x_52);
x_54 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_54, 0, x_5);
lean::cnstr_set(x_54, 1, x_51);
lean::cnstr_set(x_54, 2, x_52);
return x_54;
}
else
{
obj* x_55; obj* x_58; obj* x_59; obj* x_61; obj* x_62; 
x_55 = lean::cnstr_get(x_14, 0);
lean::inc(x_55);
lean::dec(x_14);
x_58 = l_lean_parser_command_notation__spec_has__view;
x_59 = lean::cnstr_get(x_58, 0);
lean::inc(x_59);
x_61 = lean::apply_1(x_59, x_55);
x_62 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_62, 0, x_5);
lean::cnstr_set(x_62, 1, x_51);
lean::cnstr_set(x_62, 2, x_61);
return x_62;
}
}
}
}
}
}
}
}
obj* l_lean_parser_command_reserve__notation_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_command_reserve__notation_has__view_x_27___lambda__1___closed__2;
lean::inc(x_5);
return x_5;
}
else
{
obj* x_7; obj* x_10; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::dec(x_7);
if (lean::obj_tag(x_10) == 0)
{
if (lean::obj_tag(x_10) == 0)
{
obj* x_13; 
x_13 = lean::box(3);
x_1 = x_10;
x_2 = x_13;
goto lbl_3;
}
else
{
obj* x_14; obj* x_16; 
x_14 = lean::cnstr_get(x_10, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_10, 1);
lean::inc(x_16);
lean::dec(x_10);
x_1 = x_16;
x_2 = x_14;
goto lbl_3;
}
}
else
{
obj* x_19; obj* x_21; obj* x_24; 
x_19 = lean::cnstr_get(x_10, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_10, 1);
lean::inc(x_21);
lean::dec(x_10);
x_24 = l_lean_parser_syntax_as__node___main(x_19);
if (lean::obj_tag(x_24) == 0)
{
if (lean::obj_tag(x_21) == 0)
{
obj* x_25; 
x_25 = lean::box(3);
x_1 = x_21;
x_2 = x_25;
goto lbl_3;
}
else
{
obj* x_26; obj* x_28; 
x_26 = lean::cnstr_get(x_21, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_21, 1);
lean::inc(x_28);
lean::dec(x_21);
x_1 = x_28;
x_2 = x_26;
goto lbl_3;
}
}
else
{
obj* x_31; obj* x_34; obj* x_37; 
x_31 = lean::cnstr_get(x_24, 0);
lean::inc(x_31);
lean::dec(x_24);
x_34 = lean::cnstr_get(x_31, 1);
lean::inc(x_34);
lean::dec(x_31);
x_37 = l_list_append___rarg(x_34, x_21);
if (lean::obj_tag(x_37) == 0)
{
obj* x_38; 
x_38 = lean::box(3);
x_1 = x_37;
x_2 = x_38;
goto lbl_3;
}
else
{
obj* x_39; obj* x_41; 
x_39 = lean::cnstr_get(x_37, 0);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_37, 1);
lean::inc(x_41);
lean::dec(x_37);
x_1 = x_41;
x_2 = x_39;
goto lbl_3;
}
}
}
}
lbl_3:
{
obj* x_44; 
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_46; obj* x_49; 
x_46 = lean::cnstr_get(x_2, 0);
lean::inc(x_46);
lean::dec(x_2);
x_49 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_49, 0, x_46);
x_44 = x_49;
goto lbl_45;
}
case 3:
{
obj* x_50; 
x_50 = lean::box(0);
x_44 = x_50;
goto lbl_45;
}
default:
{
obj* x_52; 
lean::dec(x_2);
x_52 = lean::box(0);
x_44 = x_52;
goto lbl_45;
}
}
lbl_45:
{
obj* x_53; obj* x_54; 
if (lean::obj_tag(x_1) == 0)
{
obj* x_56; 
x_56 = lean::box(3);
x_53 = x_1;
x_54 = x_56;
goto lbl_55;
}
else
{
obj* x_57; obj* x_59; 
x_57 = lean::cnstr_get(x_1, 0);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_1, 1);
lean::inc(x_59);
lean::dec(x_1);
x_53 = x_59;
x_54 = x_57;
goto lbl_55;
}
lbl_55:
{
switch (lean::obj_tag(x_54)) {
case 0:
{
obj* x_62; obj* x_65; 
x_62 = lean::cnstr_get(x_54, 0);
lean::inc(x_62);
lean::dec(x_54);
x_65 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_65, 0, x_62);
if (lean::obj_tag(x_53) == 0)
{
obj* x_66; obj* x_68; 
x_66 = l_lean_parser_command_reserve__notation_has__view_x_27___lambda__1___closed__1;
lean::inc(x_66);
x_68 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_68, 0, x_44);
lean::cnstr_set(x_68, 1, x_65);
lean::cnstr_set(x_68, 2, x_66);
return x_68;
}
else
{
obj* x_69; obj* x_72; obj* x_73; obj* x_75; obj* x_76; 
x_69 = lean::cnstr_get(x_53, 0);
lean::inc(x_69);
lean::dec(x_53);
x_72 = l_lean_parser_command_notation__spec_has__view;
x_73 = lean::cnstr_get(x_72, 0);
lean::inc(x_73);
x_75 = lean::apply_1(x_73, x_69);
x_76 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_76, 0, x_44);
lean::cnstr_set(x_76, 1, x_65);
lean::cnstr_set(x_76, 2, x_75);
return x_76;
}
}
case 3:
{
obj* x_77; 
x_77 = lean::box(0);
if (lean::obj_tag(x_53) == 0)
{
obj* x_78; obj* x_80; 
x_78 = l_lean_parser_command_reserve__notation_has__view_x_27___lambda__1___closed__1;
lean::inc(x_78);
x_80 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_80, 0, x_44);
lean::cnstr_set(x_80, 1, x_77);
lean::cnstr_set(x_80, 2, x_78);
return x_80;
}
else
{
obj* x_81; obj* x_84; obj* x_85; obj* x_87; obj* x_88; 
x_81 = lean::cnstr_get(x_53, 0);
lean::inc(x_81);
lean::dec(x_53);
x_84 = l_lean_parser_command_notation__spec_has__view;
x_85 = lean::cnstr_get(x_84, 0);
lean::inc(x_85);
x_87 = lean::apply_1(x_85, x_81);
x_88 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_88, 0, x_44);
lean::cnstr_set(x_88, 1, x_77);
lean::cnstr_set(x_88, 2, x_87);
return x_88;
}
}
default:
{
obj* x_90; 
lean::dec(x_54);
x_90 = lean::box(0);
if (lean::obj_tag(x_53) == 0)
{
obj* x_91; obj* x_93; 
x_91 = l_lean_parser_command_reserve__notation_has__view_x_27___lambda__1___closed__1;
lean::inc(x_91);
x_93 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_93, 0, x_44);
lean::cnstr_set(x_93, 1, x_90);
lean::cnstr_set(x_93, 2, x_91);
return x_93;
}
else
{
obj* x_94; obj* x_97; obj* x_98; obj* x_100; obj* x_101; 
x_94 = lean::cnstr_get(x_53, 0);
lean::inc(x_94);
lean::dec(x_53);
x_97 = l_lean_parser_command_notation__spec_has__view;
x_98 = lean::cnstr_get(x_97, 0);
lean::inc(x_98);
x_100 = lean::apply_1(x_98, x_94);
x_101 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_101, 0, x_44);
lean::cnstr_set(x_101, 1, x_90);
lean::cnstr_set(x_101, 2, x_100);
return x_101;
}
}
}
}
}
}
}
}
obj* l_lean_parser_command_reserve__notation_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_8; obj* x_10; obj* x_11; obj* x_12; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_21; obj* x_22; obj* x_23; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_30; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
lean::dec(x_0);
x_8 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
lean::inc(x_8);
x_10 = l_option_map___rarg(x_8, x_1);
x_11 = lean::box(3);
x_12 = l_option_get__or__else___main___rarg(x_10, x_11);
lean::inc(x_8);
x_14 = l_option_map___rarg(x_8, x_3);
x_15 = l_option_get__or__else___main___rarg(x_14, x_11);
x_16 = lean::box(0);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_16);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_12);
lean::cnstr_set(x_18, 1, x_17);
x_19 = l_lean_parser_no__kind;
lean::inc(x_19);
x_21 = l_lean_parser_syntax_mk__node(x_19, x_18);
x_22 = l_lean_parser_command_notation__spec_has__view;
x_23 = lean::cnstr_get(x_22, 1);
lean::inc(x_23);
x_25 = lean::apply_1(x_23, x_5);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_16);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_21);
lean::cnstr_set(x_27, 1, x_26);
x_28 = l_lean_parser_command_reserve__notation;
lean::inc(x_28);
x_30 = l_lean_parser_syntax_mk__node(x_28, x_27);
return x_30;
}
}
obj* _init_l_lean_parser_command_reserve__notation_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_reserve__notation_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_reserve__notation_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_reserve__notation_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_reserve__notation_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_parser_command_reserve__notation_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_12; obj* x_13; obj* x_14; 
x_0 = lean::mk_string("reserve");
x_1 = lean::mk_nat_obj(0u);
x_2 = l_lean_parser_symbol_tokens___rarg(x_0, x_1);
x_3 = lean::mk_string("notation");
x_4 = l_lean_parser_symbol_tokens___rarg(x_3, x_1);
x_5 = lean::box(0);
x_6 = l_lean_parser_list_cons_tokens___rarg(x_4, x_5);
x_7 = l_lean_parser_list_cons_tokens___rarg(x_2, x_6);
x_8 = l_lean_parser_tokens___rarg(x_7);
x_9 = l_lean_parser_tokens___rarg(x_8);
x_10 = l_lean_parser_command_notation__spec_parser_lean_parser_has__tokens;
lean::inc(x_10);
x_12 = l_lean_parser_list_cons_tokens___rarg(x_10, x_5);
x_13 = l_lean_parser_list_cons_tokens___rarg(x_9, x_12);
x_14 = l_lean_parser_tokens___rarg(x_13);
return x_14;
}
}
obj* _init_l_lean_parser_command_reserve__notation_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_30; 
x_0 = lean::mk_string("reserve");
x_1 = l_string_trim(x_0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_5, 0, x_1);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::mk_string("notation");
x_7 = l_string_trim(x_6);
lean::inc(x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_9, 0, x_7);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_10, 0, x_7);
lean::closure_set(x_10, 1, x_4);
lean::closure_set(x_10, 2, x_9);
x_11 = lean::box(0);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_10);
lean::cnstr_set(x_12, 1, x_11);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_5);
lean::cnstr_set(x_13, 1, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_action_parser_lean_parser_has__view___lambda__2), 6, 1);
lean::closure_set(x_14, 0, x_13);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_parser), 5, 0);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_11);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_14);
lean::cnstr_set(x_17, 1, x_16);
x_18 = l_lean_parser_term__parser__m_monad;
x_19 = l_lean_parser_term__parser__m_monad__except;
x_20 = l_lean_parser_term__parser__m_lean_parser_monad__parsec;
x_21 = l_lean_parser_term__parser__m_alternative;
x_22 = l_lean_parser_command_reserve__notation;
x_23 = l_lean_parser_command_reserve__notation_has__view;
lean::inc(x_23);
lean::inc(x_22);
lean::inc(x_21);
lean::inc(x_20);
lean::inc(x_19);
lean::inc(x_18);
x_30 = l_lean_parser_combinators_node_view___rarg(x_18, x_19, x_20, x_21, x_22, x_17, x_23);
return x_30;
}
}
obj* _init_l_lean_parser_command_reserve__notation_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_0 = lean::mk_string("reserve");
x_1 = l_string_trim(x_0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_5, 0, x_1);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::mk_string("notation");
x_7 = l_string_trim(x_6);
lean::inc(x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_9, 0, x_7);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_10, 0, x_7);
lean::closure_set(x_10, 1, x_4);
lean::closure_set(x_10, 2, x_9);
x_11 = lean::box(0);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_10);
lean::cnstr_set(x_12, 1, x_11);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_5);
lean::cnstr_set(x_13, 1, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_action_parser_lean_parser_has__view___lambda__2), 6, 1);
lean::closure_set(x_14, 0, x_13);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_parser), 5, 0);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_11);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_14);
lean::cnstr_set(x_17, 1, x_16);
return x_17;
}
}
obj* l_lean_parser_command_reserve__notation_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_9; 
x_5 = l_lean_parser_command_reserve__notation;
x_6 = l_lean_parser_command_reserve__notation_parser___closed__1;
lean::inc(x_6);
lean::inc(x_5);
x_9 = l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(x_5, x_6, x_0, x_1, x_2, x_3, x_4);
return x_9;
}
}
obj* _init_l_lean_parser_command_mixfix_kind() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("mixfix");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("kind");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* _init_l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(4, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__3() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__4() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__5() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__6() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(3);
x_4 = lean::mk_nat_obj(0u);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
obj* x_7; uint8 x_8; 
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_dec_eq(x_1, x_7);
if (x_8 == 0)
{
obj* x_9; uint8 x_10; 
x_9 = lean::mk_nat_obj(2u);
x_10 = lean::nat_dec_eq(x_1, x_9);
if (x_10 == 0)
{
obj* x_11; uint8 x_12; 
x_11 = lean::mk_nat_obj(3u);
x_12 = lean::nat_dec_eq(x_1, x_11);
lean::dec(x_1);
if (x_12 == 0)
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_14; obj* x_17; obj* x_18; 
x_14 = lean::cnstr_get(x_0, 0);
lean::inc(x_14);
lean::dec(x_0);
x_17 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_17, 0, x_14);
x_18 = lean::alloc_cnstr(4, 1, 0);
lean::cnstr_set(x_18, 0, x_17);
return x_18;
}
case 3:
{
obj* x_19; 
x_19 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__1;
lean::inc(x_19);
return x_19;
}
default:
{
obj* x_22; 
lean::dec(x_0);
x_22 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__1;
lean::inc(x_22);
return x_22;
}
}
}
else
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_24; obj* x_27; obj* x_28; 
x_24 = lean::cnstr_get(x_0, 0);
lean::inc(x_24);
lean::dec(x_0);
x_27 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_27, 0, x_24);
x_28 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_28, 0, x_27);
return x_28;
}
case 3:
{
obj* x_29; 
x_29 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__2;
lean::inc(x_29);
return x_29;
}
default:
{
obj* x_32; 
lean::dec(x_0);
x_32 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__2;
lean::inc(x_32);
return x_32;
}
}
}
}
else
{
lean::dec(x_1);
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_35; obj* x_38; obj* x_39; 
x_35 = lean::cnstr_get(x_0, 0);
lean::inc(x_35);
lean::dec(x_0);
x_38 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_38, 0, x_35);
x_39 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_39, 0, x_38);
return x_39;
}
case 3:
{
obj* x_40; 
x_40 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__3;
lean::inc(x_40);
return x_40;
}
default:
{
obj* x_43; 
lean::dec(x_0);
x_43 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__3;
lean::inc(x_43);
return x_43;
}
}
}
}
else
{
lean::dec(x_1);
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_46; obj* x_49; obj* x_50; 
x_46 = lean::cnstr_get(x_0, 0);
lean::inc(x_46);
lean::dec(x_0);
x_49 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_49, 0, x_46);
x_50 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_50, 0, x_49);
return x_50;
}
case 3:
{
obj* x_51; 
x_51 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__4;
lean::inc(x_51);
return x_51;
}
default:
{
obj* x_54; 
lean::dec(x_0);
x_54 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__4;
lean::inc(x_54);
return x_54;
}
}
}
}
else
{
lean::dec(x_1);
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_57; obj* x_60; obj* x_61; 
x_57 = lean::cnstr_get(x_0, 0);
lean::inc(x_57);
lean::dec(x_0);
x_60 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_60, 0, x_57);
x_61 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_61, 0, x_60);
return x_61;
}
case 3:
{
obj* x_62; 
x_62 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__5;
lean::inc(x_62);
return x_62;
}
default:
{
obj* x_65; 
lean::dec(x_0);
x_65 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__5;
lean::inc(x_65);
return x_65;
}
}
}
}
}
}
obj* _init_l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__7() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("mixfix");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("kind");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__6;
lean::inc(x_5);
return x_5;
}
else
{
obj* x_7; obj* x_10; obj* x_12; obj* x_15; uint8 x_16; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::cnstr_get(x_7, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_7, 1);
lean::inc(x_12);
lean::dec(x_7);
x_15 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__7;
x_16 = lean_name_dec_eq(x_10, x_15);
lean::dec(x_10);
if (x_16 == 0)
{
obj* x_19; 
lean::dec(x_12);
x_19 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__6;
lean::inc(x_19);
return x_19;
}
else
{
if (lean::obj_tag(x_12) == 0)
{
obj* x_21; 
x_21 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__6;
lean::inc(x_21);
return x_21;
}
else
{
obj* x_23; obj* x_25; 
x_23 = lean::cnstr_get(x_12, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_12, 1);
lean::inc(x_25);
lean::dec(x_12);
if (lean::obj_tag(x_25) == 0)
{
obj* x_28; 
x_28 = l_lean_parser_syntax_as__node___main(x_23);
if (lean::obj_tag(x_28) == 0)
{
obj* x_29; 
x_29 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__6;
lean::inc(x_29);
return x_29;
}
else
{
obj* x_31; obj* x_34; obj* x_36; 
x_31 = lean::cnstr_get(x_28, 0);
lean::inc(x_31);
lean::dec(x_28);
x_34 = lean::cnstr_get(x_31, 0);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_31, 1);
lean::inc(x_36);
lean::dec(x_31);
switch (lean::obj_tag(x_34)) {
case 0:
{
obj* x_40; 
lean::dec(x_36);
x_40 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__6;
lean::inc(x_40);
return x_40;
}
case 1:
{
obj* x_44; 
lean::dec(x_36);
lean::dec(x_34);
x_44 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__6;
lean::inc(x_44);
return x_44;
}
default:
{
obj* x_46; obj* x_48; obj* x_51; uint8 x_52; 
x_46 = lean::cnstr_get(x_34, 0);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_34, 1);
lean::inc(x_48);
lean::dec(x_34);
x_51 = lean::box(0);
x_52 = lean_name_dec_eq(x_46, x_51);
lean::dec(x_46);
if (x_52 == 0)
{
obj* x_56; 
lean::dec(x_36);
lean::dec(x_48);
x_56 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__6;
lean::inc(x_56);
return x_56;
}
else
{
if (lean::obj_tag(x_36) == 0)
{
obj* x_59; 
lean::dec(x_48);
x_59 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__6;
lean::inc(x_59);
return x_59;
}
else
{
obj* x_61; obj* x_63; 
x_61 = lean::cnstr_get(x_36, 0);
lean::inc(x_61);
x_63 = lean::cnstr_get(x_36, 1);
lean::inc(x_63);
lean::dec(x_36);
if (lean::obj_tag(x_63) == 0)
{
x_1 = x_61;
x_2 = x_48;
goto lbl_3;
}
else
{
obj* x_69; 
lean::dec(x_61);
lean::dec(x_63);
lean::dec(x_48);
x_69 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__6;
lean::inc(x_69);
return x_69;
}
}
}
}
}
}
}
else
{
obj* x_73; 
lean::dec(x_23);
lean::dec(x_25);
x_73 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__6;
lean::inc(x_73);
return x_73;
}
}
}
}
lbl_3:
{
obj* x_75; uint8 x_76; 
x_75 = lean::mk_nat_obj(0u);
x_76 = lean::nat_dec_eq(x_2, x_75);
if (x_76 == 0)
{
obj* x_77; uint8 x_78; 
x_77 = lean::mk_nat_obj(1u);
x_78 = lean::nat_dec_eq(x_2, x_77);
if (x_78 == 0)
{
obj* x_79; uint8 x_80; 
x_79 = lean::mk_nat_obj(2u);
x_80 = lean::nat_dec_eq(x_2, x_79);
if (x_80 == 0)
{
obj* x_81; uint8 x_82; 
x_81 = lean::mk_nat_obj(3u);
x_82 = lean::nat_dec_eq(x_2, x_81);
lean::dec(x_2);
if (x_82 == 0)
{
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_84; obj* x_87; obj* x_88; 
x_84 = lean::cnstr_get(x_1, 0);
lean::inc(x_84);
lean::dec(x_1);
x_87 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_87, 0, x_84);
x_88 = lean::alloc_cnstr(4, 1, 0);
lean::cnstr_set(x_88, 0, x_87);
return x_88;
}
case 3:
{
obj* x_89; 
x_89 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__1;
lean::inc(x_89);
return x_89;
}
default:
{
obj* x_92; 
lean::dec(x_1);
x_92 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__1;
lean::inc(x_92);
return x_92;
}
}
}
else
{
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_94; obj* x_97; obj* x_98; 
x_94 = lean::cnstr_get(x_1, 0);
lean::inc(x_94);
lean::dec(x_1);
x_97 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_97, 0, x_94);
x_98 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_98, 0, x_97);
return x_98;
}
case 3:
{
obj* x_99; 
x_99 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__2;
lean::inc(x_99);
return x_99;
}
default:
{
obj* x_102; 
lean::dec(x_1);
x_102 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__2;
lean::inc(x_102);
return x_102;
}
}
}
}
else
{
lean::dec(x_2);
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_105; obj* x_108; obj* x_109; 
x_105 = lean::cnstr_get(x_1, 0);
lean::inc(x_105);
lean::dec(x_1);
x_108 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_108, 0, x_105);
x_109 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_109, 0, x_108);
return x_109;
}
case 3:
{
obj* x_110; 
x_110 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__3;
lean::inc(x_110);
return x_110;
}
default:
{
obj* x_113; 
lean::dec(x_1);
x_113 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__3;
lean::inc(x_113);
return x_113;
}
}
}
}
else
{
lean::dec(x_2);
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_116; obj* x_119; obj* x_120; 
x_116 = lean::cnstr_get(x_1, 0);
lean::inc(x_116);
lean::dec(x_1);
x_119 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_119, 0, x_116);
x_120 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_120, 0, x_119);
return x_120;
}
case 3:
{
obj* x_121; 
x_121 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__4;
lean::inc(x_121);
return x_121;
}
default:
{
obj* x_124; 
lean::dec(x_1);
x_124 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__4;
lean::inc(x_124);
return x_124;
}
}
}
}
else
{
lean::dec(x_2);
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_127; obj* x_130; obj* x_131; 
x_127 = lean::cnstr_get(x_1, 0);
lean::inc(x_127);
lean::dec(x_1);
x_130 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_130, 0, x_127);
x_131 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_131, 0, x_130);
return x_131;
}
case 3:
{
obj* x_132; 
x_132 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__5;
lean::inc(x_132);
return x_132;
}
default:
{
obj* x_135; 
lean::dec(x_1);
x_135 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__5;
lean::inc(x_135);
return x_135;
}
}
}
}
}
}
obj* _init_l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__2___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_nat_obj(4u);
x_2 = lean_name_mk_numeral(x_0, x_1);
return x_2;
}
}
obj* l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_2; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_13; obj* x_14; obj* x_15; obj* x_17; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
lean::inc(x_5);
x_7 = l_option_map___rarg(x_5, x_2);
x_8 = lean::box(3);
x_9 = l_option_get__or__else___main___rarg(x_7, x_8);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_1);
x_11 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__1;
lean::inc(x_11);
x_13 = l_lean_parser_syntax_mk__node(x_11, x_10);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_1);
x_15 = l_lean_parser_command_mixfix_kind;
lean::inc(x_15);
x_17 = l_lean_parser_syntax_mk__node(x_15, x_14);
return x_17;
}
case 1:
{
obj* x_18; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_29; obj* x_30; obj* x_31; obj* x_33; 
x_18 = lean::cnstr_get(x_0, 0);
lean::inc(x_18);
lean::dec(x_0);
x_21 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
lean::inc(x_21);
x_23 = l_option_map___rarg(x_21, x_18);
x_24 = lean::box(3);
x_25 = l_option_get__or__else___main___rarg(x_23, x_24);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_1);
x_27 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__2;
lean::inc(x_27);
x_29 = l_lean_parser_syntax_mk__node(x_27, x_26);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_1);
x_31 = l_lean_parser_command_mixfix_kind;
lean::inc(x_31);
x_33 = l_lean_parser_syntax_mk__node(x_31, x_30);
return x_33;
}
case 2:
{
obj* x_34; obj* x_37; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_45; obj* x_46; obj* x_47; obj* x_49; 
x_34 = lean::cnstr_get(x_0, 0);
lean::inc(x_34);
lean::dec(x_0);
x_37 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
lean::inc(x_37);
x_39 = l_option_map___rarg(x_37, x_34);
x_40 = lean::box(3);
x_41 = l_option_get__or__else___main___rarg(x_39, x_40);
x_42 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_42, 0, x_41);
lean::cnstr_set(x_42, 1, x_1);
x_43 = l_lean_parser_number_has__view_x_27___lambda__2___closed__1;
lean::inc(x_43);
x_45 = l_lean_parser_syntax_mk__node(x_43, x_42);
x_46 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_46, 0, x_45);
lean::cnstr_set(x_46, 1, x_1);
x_47 = l_lean_parser_command_mixfix_kind;
lean::inc(x_47);
x_49 = l_lean_parser_syntax_mk__node(x_47, x_46);
return x_49;
}
case 3:
{
obj* x_50; obj* x_53; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_61; obj* x_62; obj* x_63; obj* x_65; 
x_50 = lean::cnstr_get(x_0, 0);
lean::inc(x_50);
lean::dec(x_0);
x_53 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
lean::inc(x_53);
x_55 = l_option_map___rarg(x_53, x_50);
x_56 = lean::box(3);
x_57 = l_option_get__or__else___main___rarg(x_55, x_56);
x_58 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_58, 0, x_57);
lean::cnstr_set(x_58, 1, x_1);
x_59 = l_lean_parser_number_has__view_x_27___lambda__2___closed__2;
lean::inc(x_59);
x_61 = l_lean_parser_syntax_mk__node(x_59, x_58);
x_62 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_62, 0, x_61);
lean::cnstr_set(x_62, 1, x_1);
x_63 = l_lean_parser_command_mixfix_kind;
lean::inc(x_63);
x_65 = l_lean_parser_syntax_mk__node(x_63, x_62);
return x_65;
}
default:
{
obj* x_66; obj* x_69; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_77; obj* x_78; obj* x_79; obj* x_81; 
x_66 = lean::cnstr_get(x_0, 0);
lean::inc(x_66);
lean::dec(x_0);
x_69 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
lean::inc(x_69);
x_71 = l_option_map___rarg(x_69, x_66);
x_72 = lean::box(3);
x_73 = l_option_get__or__else___main___rarg(x_71, x_72);
x_74 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_74, 0, x_73);
lean::cnstr_set(x_74, 1, x_1);
x_75 = l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__2___closed__1;
lean::inc(x_75);
x_77 = l_lean_parser_syntax_mk__node(x_75, x_74);
x_78 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_78, 0, x_77);
lean::cnstr_set(x_78, 1, x_1);
x_79 = l_lean_parser_command_mixfix_kind;
lean::inc(x_79);
x_81 = l_lean_parser_syntax_mk__node(x_79, x_78);
return x_81;
}
}
}
}
obj* _init_l_lean_parser_command_mixfix_kind_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_mixfix_kind_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_mixfix_kind_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_parser_command_mixfix_kind_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_0 = lean::mk_string("prefix");
x_1 = lean::mk_nat_obj(0u);
x_2 = l_lean_parser_symbol_tokens___rarg(x_0, x_1);
x_3 = lean::mk_string("infix");
x_4 = l_lean_parser_symbol_tokens___rarg(x_3, x_1);
x_5 = lean::mk_string("infixl");
x_6 = l_lean_parser_symbol_tokens___rarg(x_5, x_1);
x_7 = lean::mk_string("infixr");
x_8 = l_lean_parser_symbol_tokens___rarg(x_7, x_1);
x_9 = lean::mk_string("postfix");
x_10 = l_lean_parser_symbol_tokens___rarg(x_9, x_1);
x_11 = lean::box(0);
x_12 = l_lean_parser_list_cons_tokens___rarg(x_10, x_11);
x_13 = l_lean_parser_list_cons_tokens___rarg(x_8, x_12);
x_14 = l_lean_parser_list_cons_tokens___rarg(x_6, x_13);
x_15 = l_lean_parser_list_cons_tokens___rarg(x_4, x_14);
x_16 = l_lean_parser_list_cons_tokens___rarg(x_2, x_15);
x_17 = l_lean_parser_tokens___rarg(x_16);
x_18 = l_lean_parser_list_cons_tokens___rarg(x_17, x_11);
x_19 = l_lean_parser_tokens___rarg(x_18);
return x_19;
}
}
obj* _init_l_lean_parser_command_mixfix_kind_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_46; 
x_0 = lean::mk_string("prefix");
x_1 = l_string_trim(x_0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_5, 0, x_1);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::mk_string("infix");
x_7 = l_string_trim(x_6);
lean::inc(x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_9, 0, x_7);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_10, 0, x_7);
lean::closure_set(x_10, 1, x_4);
lean::closure_set(x_10, 2, x_9);
x_11 = lean::mk_string("infixl");
x_12 = l_string_trim(x_11);
lean::inc(x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_14, 0, x_12);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_15, 0, x_12);
lean::closure_set(x_15, 1, x_4);
lean::closure_set(x_15, 2, x_14);
x_16 = lean::mk_string("infixr");
x_17 = l_string_trim(x_16);
lean::inc(x_17);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_19, 0, x_17);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_20, 0, x_17);
lean::closure_set(x_20, 1, x_4);
lean::closure_set(x_20, 2, x_19);
x_21 = lean::mk_string("postfix");
x_22 = l_string_trim(x_21);
lean::inc(x_22);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_24, 0, x_22);
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_25, 0, x_22);
lean::closure_set(x_25, 1, x_4);
lean::closure_set(x_25, 2, x_24);
x_26 = lean::box(0);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_25);
lean::cnstr_set(x_27, 1, x_26);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_20);
lean::cnstr_set(x_28, 1, x_27);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_15);
lean::cnstr_set(x_29, 1, x_28);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_10);
lean::cnstr_set(x_30, 1, x_29);
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_5);
lean::cnstr_set(x_31, 1, x_30);
x_32 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__3), 7, 2);
lean::closure_set(x_32, 0, x_31);
lean::closure_set(x_32, 1, x_4);
x_33 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_33, 0, x_32);
lean::cnstr_set(x_33, 1, x_26);
x_34 = l_lean_parser_term__parser__m_monad;
x_35 = l_lean_parser_term__parser__m_monad__except;
x_36 = l_lean_parser_term__parser__m_lean_parser_monad__parsec;
x_37 = l_lean_parser_term__parser__m_alternative;
x_38 = l_lean_parser_command_mixfix_kind;
x_39 = l_lean_parser_command_mixfix_kind_has__view;
lean::inc(x_39);
lean::inc(x_38);
lean::inc(x_37);
lean::inc(x_36);
lean::inc(x_35);
lean::inc(x_34);
x_46 = l_lean_parser_combinators_node_view___rarg(x_34, x_35, x_36, x_37, x_38, x_33, x_39);
return x_46;
}
}
obj* _init_l_lean_parser_command_mixfix_kind_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
x_0 = lean::mk_string("prefix");
x_1 = l_string_trim(x_0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_5, 0, x_1);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::mk_string("infix");
x_7 = l_string_trim(x_6);
lean::inc(x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_9, 0, x_7);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_10, 0, x_7);
lean::closure_set(x_10, 1, x_4);
lean::closure_set(x_10, 2, x_9);
x_11 = lean::mk_string("infixl");
x_12 = l_string_trim(x_11);
lean::inc(x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_14, 0, x_12);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_15, 0, x_12);
lean::closure_set(x_15, 1, x_4);
lean::closure_set(x_15, 2, x_14);
x_16 = lean::mk_string("infixr");
x_17 = l_string_trim(x_16);
lean::inc(x_17);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_19, 0, x_17);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_20, 0, x_17);
lean::closure_set(x_20, 1, x_4);
lean::closure_set(x_20, 2, x_19);
x_21 = lean::mk_string("postfix");
x_22 = l_string_trim(x_21);
lean::inc(x_22);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_24, 0, x_22);
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_25, 0, x_22);
lean::closure_set(x_25, 1, x_4);
lean::closure_set(x_25, 2, x_24);
x_26 = lean::box(0);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_25);
lean::cnstr_set(x_27, 1, x_26);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_20);
lean::cnstr_set(x_28, 1, x_27);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_15);
lean::cnstr_set(x_29, 1, x_28);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_10);
lean::cnstr_set(x_30, 1, x_29);
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_5);
lean::cnstr_set(x_31, 1, x_30);
x_32 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__3), 7, 2);
lean::closure_set(x_32, 0, x_31);
lean::closure_set(x_32, 1, x_4);
x_33 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_33, 0, x_32);
lean::cnstr_set(x_33, 1, x_26);
return x_33;
}
}
obj* l_lean_parser_command_mixfix_kind_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_9; 
x_5 = l_lean_parser_command_mixfix_kind;
x_6 = l_lean_parser_command_mixfix_kind_parser___closed__1;
lean::inc(x_6);
lean::inc(x_5);
x_9 = l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(x_5, x_6, x_0, x_1, x_2, x_3, x_4);
return x_9;
}
}
obj* _init_l_lean_parser_command_mixfix() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("mixfix");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_parser_command_mixfix_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(0);
x_4 = lean::box(3);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; obj* x_7; 
x_7 = l_lean_parser_syntax_as__node___main(x_1);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; 
x_8 = l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__1;
lean::inc(x_8);
x_5 = x_8;
goto lbl_6;
}
else
{
obj* x_10; obj* x_12; obj* x_13; 
x_10 = lean::cnstr_get(x_7, 0);
lean::inc(x_10);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 x_12 = x_7;
} else {
 lean::dec(x_7);
 x_12 = lean::box(0);
}
x_13 = lean::cnstr_get(x_10, 1);
lean::inc(x_13);
lean::dec(x_10);
if (lean::obj_tag(x_13) == 0)
{
obj* x_17; 
lean::dec(x_12);
x_17 = lean::box(0);
x_5 = x_17;
goto lbl_6;
}
else
{
obj* x_18; obj* x_20; 
x_18 = lean::cnstr_get(x_13, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_13, 1);
lean::inc(x_20);
lean::dec(x_13);
if (lean::obj_tag(x_20) == 0)
{
switch (lean::obj_tag(x_18)) {
case 0:
{
obj* x_23; obj* x_26; obj* x_27; 
x_23 = lean::cnstr_get(x_18, 0);
lean::inc(x_23);
lean::dec(x_18);
if (lean::is_scalar(x_12)) {
 x_26 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_26 = x_12;
}
lean::cnstr_set(x_26, 0, x_23);
x_27 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_27, 0, x_26);
x_5 = x_27;
goto lbl_6;
}
case 3:
{
obj* x_29; 
lean::dec(x_12);
x_29 = l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__1;
lean::inc(x_29);
x_5 = x_29;
goto lbl_6;
}
default:
{
obj* x_33; 
lean::dec(x_18);
lean::dec(x_12);
x_33 = l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__1;
lean::inc(x_33);
x_5 = x_33;
goto lbl_6;
}
}
}
else
{
obj* x_38; 
lean::dec(x_18);
lean::dec(x_20);
lean::dec(x_12);
x_38 = l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__1;
lean::inc(x_38);
x_5 = x_38;
goto lbl_6;
}
}
}
lbl_6:
{
obj* x_40; obj* x_41; 
if (lean::obj_tag(x_0) == 0)
{
obj* x_43; 
x_43 = lean::box(3);
x_40 = x_0;
x_41 = x_43;
goto lbl_42;
}
else
{
obj* x_44; obj* x_46; 
x_44 = lean::cnstr_get(x_0, 0);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_0, 1);
lean::inc(x_46);
lean::dec(x_0);
x_40 = x_46;
x_41 = x_44;
goto lbl_42;
}
lbl_42:
{
obj* x_49; obj* x_50; obj* x_52; obj* x_53; obj* x_54; 
x_49 = l_lean_parser_command_mixfix_kind_has__view;
x_50 = lean::cnstr_get(x_49, 0);
lean::inc(x_50);
x_52 = lean::apply_1(x_50, x_41);
if (lean::obj_tag(x_40) == 0)
{
obj* x_56; 
x_56 = lean::box(3);
x_53 = x_40;
x_54 = x_56;
goto lbl_55;
}
else
{
obj* x_57; obj* x_59; 
x_57 = lean::cnstr_get(x_40, 0);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_40, 1);
lean::inc(x_59);
lean::dec(x_40);
x_53 = x_59;
x_54 = x_57;
goto lbl_55;
}
lbl_55:
{
obj* x_62; obj* x_63; obj* x_65; 
x_62 = l_lean_parser_command_notation__spec_mixfix__symbol_has__view;
x_63 = lean::cnstr_get(x_62, 0);
lean::inc(x_63);
x_65 = lean::apply_1(x_63, x_54);
if (lean::obj_tag(x_53) == 0)
{
obj* x_66; 
x_66 = lean::box(0);
if (lean::obj_tag(x_53) == 0)
{
obj* x_67; obj* x_68; 
x_67 = lean::box(3);
x_68 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_68, 0, x_5);
lean::cnstr_set(x_68, 1, x_52);
lean::cnstr_set(x_68, 2, x_65);
lean::cnstr_set(x_68, 3, x_66);
lean::cnstr_set(x_68, 4, x_67);
return x_68;
}
else
{
obj* x_69; obj* x_72; 
x_69 = lean::cnstr_get(x_53, 0);
lean::inc(x_69);
lean::dec(x_53);
x_72 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_72, 0, x_5);
lean::cnstr_set(x_72, 1, x_52);
lean::cnstr_set(x_72, 2, x_65);
lean::cnstr_set(x_72, 3, x_66);
lean::cnstr_set(x_72, 4, x_69);
return x_72;
}
}
else
{
obj* x_73; obj* x_75; 
x_73 = lean::cnstr_get(x_53, 0);
lean::inc(x_73);
x_75 = lean::cnstr_get(x_53, 1);
lean::inc(x_75);
lean::dec(x_53);
switch (lean::obj_tag(x_73)) {
case 0:
{
obj* x_78; obj* x_81; 
x_78 = lean::cnstr_get(x_73, 0);
lean::inc(x_78);
lean::dec(x_73);
x_81 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_81, 0, x_78);
if (lean::obj_tag(x_75) == 0)
{
obj* x_82; obj* x_83; 
x_82 = lean::box(3);
x_83 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_83, 0, x_5);
lean::cnstr_set(x_83, 1, x_52);
lean::cnstr_set(x_83, 2, x_65);
lean::cnstr_set(x_83, 3, x_81);
lean::cnstr_set(x_83, 4, x_82);
return x_83;
}
else
{
obj* x_84; obj* x_87; 
x_84 = lean::cnstr_get(x_75, 0);
lean::inc(x_84);
lean::dec(x_75);
x_87 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_87, 0, x_5);
lean::cnstr_set(x_87, 1, x_52);
lean::cnstr_set(x_87, 2, x_65);
lean::cnstr_set(x_87, 3, x_81);
lean::cnstr_set(x_87, 4, x_84);
return x_87;
}
}
case 3:
{
obj* x_88; 
x_88 = lean::box(0);
if (lean::obj_tag(x_75) == 0)
{
obj* x_89; obj* x_90; 
x_89 = lean::box(3);
x_90 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_90, 0, x_5);
lean::cnstr_set(x_90, 1, x_52);
lean::cnstr_set(x_90, 2, x_65);
lean::cnstr_set(x_90, 3, x_88);
lean::cnstr_set(x_90, 4, x_89);
return x_90;
}
else
{
obj* x_91; obj* x_94; 
x_91 = lean::cnstr_get(x_75, 0);
lean::inc(x_91);
lean::dec(x_75);
x_94 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_94, 0, x_5);
lean::cnstr_set(x_94, 1, x_52);
lean::cnstr_set(x_94, 2, x_65);
lean::cnstr_set(x_94, 3, x_88);
lean::cnstr_set(x_94, 4, x_91);
return x_94;
}
}
default:
{
obj* x_96; 
lean::dec(x_73);
x_96 = lean::box(0);
if (lean::obj_tag(x_75) == 0)
{
obj* x_97; obj* x_98; 
x_97 = lean::box(3);
x_98 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_98, 0, x_5);
lean::cnstr_set(x_98, 1, x_52);
lean::cnstr_set(x_98, 2, x_65);
lean::cnstr_set(x_98, 3, x_96);
lean::cnstr_set(x_98, 4, x_97);
return x_98;
}
else
{
obj* x_99; obj* x_102; 
x_99 = lean::cnstr_get(x_75, 0);
lean::inc(x_99);
lean::dec(x_75);
x_102 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_102, 0, x_5);
lean::cnstr_set(x_102, 1, x_52);
lean::cnstr_set(x_102, 2, x_65);
lean::cnstr_set(x_102, 3, x_96);
lean::cnstr_set(x_102, 4, x_99);
return x_102;
}
}
}
}
}
}
}
}
}
}
obj* l_lean_parser_command_mixfix_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_command_mixfix_has__view_x_27___lambda__1___closed__1;
lean::inc(x_5);
return x_5;
}
else
{
obj* x_7; obj* x_10; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::dec(x_7);
if (lean::obj_tag(x_10) == 0)
{
if (lean::obj_tag(x_10) == 0)
{
obj* x_13; 
x_13 = lean::box(3);
x_1 = x_10;
x_2 = x_13;
goto lbl_3;
}
else
{
obj* x_14; obj* x_16; 
x_14 = lean::cnstr_get(x_10, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_10, 1);
lean::inc(x_16);
lean::dec(x_10);
x_1 = x_16;
x_2 = x_14;
goto lbl_3;
}
}
else
{
obj* x_19; obj* x_21; obj* x_24; 
x_19 = lean::cnstr_get(x_10, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_10, 1);
lean::inc(x_21);
lean::dec(x_10);
x_24 = l_lean_parser_syntax_as__node___main(x_19);
if (lean::obj_tag(x_24) == 0)
{
if (lean::obj_tag(x_21) == 0)
{
obj* x_25; 
x_25 = lean::box(3);
x_1 = x_21;
x_2 = x_25;
goto lbl_3;
}
else
{
obj* x_26; obj* x_28; 
x_26 = lean::cnstr_get(x_21, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_21, 1);
lean::inc(x_28);
lean::dec(x_21);
x_1 = x_28;
x_2 = x_26;
goto lbl_3;
}
}
else
{
obj* x_31; obj* x_34; obj* x_37; 
x_31 = lean::cnstr_get(x_24, 0);
lean::inc(x_31);
lean::dec(x_24);
x_34 = lean::cnstr_get(x_31, 1);
lean::inc(x_34);
lean::dec(x_31);
x_37 = l_list_append___rarg(x_34, x_21);
if (lean::obj_tag(x_37) == 0)
{
obj* x_38; 
x_38 = lean::box(3);
x_1 = x_37;
x_2 = x_38;
goto lbl_3;
}
else
{
obj* x_39; obj* x_41; 
x_39 = lean::cnstr_get(x_37, 0);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_37, 1);
lean::inc(x_41);
lean::dec(x_37);
x_1 = x_41;
x_2 = x_39;
goto lbl_3;
}
}
}
}
lbl_3:
{
obj* x_44; obj* x_46; 
x_46 = l_lean_parser_syntax_as__node___main(x_2);
if (lean::obj_tag(x_46) == 0)
{
obj* x_47; 
x_47 = l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__1;
lean::inc(x_47);
x_44 = x_47;
goto lbl_45;
}
else
{
obj* x_49; obj* x_51; obj* x_52; 
x_49 = lean::cnstr_get(x_46, 0);
lean::inc(x_49);
if (lean::is_exclusive(x_46)) {
 lean::cnstr_release(x_46, 0);
 x_51 = x_46;
} else {
 lean::dec(x_46);
 x_51 = lean::box(0);
}
x_52 = lean::cnstr_get(x_49, 1);
lean::inc(x_52);
lean::dec(x_49);
if (lean::obj_tag(x_52) == 0)
{
obj* x_56; 
lean::dec(x_51);
x_56 = lean::box(0);
x_44 = x_56;
goto lbl_45;
}
else
{
obj* x_57; obj* x_59; 
x_57 = lean::cnstr_get(x_52, 0);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_52, 1);
lean::inc(x_59);
lean::dec(x_52);
if (lean::obj_tag(x_59) == 0)
{
switch (lean::obj_tag(x_57)) {
case 0:
{
obj* x_62; obj* x_65; obj* x_66; 
x_62 = lean::cnstr_get(x_57, 0);
lean::inc(x_62);
lean::dec(x_57);
if (lean::is_scalar(x_51)) {
 x_65 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_65 = x_51;
}
lean::cnstr_set(x_65, 0, x_62);
x_66 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_66, 0, x_65);
x_44 = x_66;
goto lbl_45;
}
case 3:
{
obj* x_68; 
lean::dec(x_51);
x_68 = l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__1;
lean::inc(x_68);
x_44 = x_68;
goto lbl_45;
}
default:
{
obj* x_72; 
lean::dec(x_51);
lean::dec(x_57);
x_72 = l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__1;
lean::inc(x_72);
x_44 = x_72;
goto lbl_45;
}
}
}
else
{
obj* x_77; 
lean::dec(x_51);
lean::dec(x_59);
lean::dec(x_57);
x_77 = l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__1;
lean::inc(x_77);
x_44 = x_77;
goto lbl_45;
}
}
}
lbl_45:
{
obj* x_79; obj* x_80; 
if (lean::obj_tag(x_1) == 0)
{
obj* x_82; 
x_82 = lean::box(3);
x_79 = x_1;
x_80 = x_82;
goto lbl_81;
}
else
{
obj* x_83; obj* x_85; 
x_83 = lean::cnstr_get(x_1, 0);
lean::inc(x_83);
x_85 = lean::cnstr_get(x_1, 1);
lean::inc(x_85);
lean::dec(x_1);
x_79 = x_85;
x_80 = x_83;
goto lbl_81;
}
lbl_81:
{
obj* x_88; obj* x_89; obj* x_91; obj* x_92; obj* x_93; 
x_88 = l_lean_parser_command_mixfix_kind_has__view;
x_89 = lean::cnstr_get(x_88, 0);
lean::inc(x_89);
x_91 = lean::apply_1(x_89, x_80);
if (lean::obj_tag(x_79) == 0)
{
obj* x_95; 
x_95 = lean::box(3);
x_92 = x_79;
x_93 = x_95;
goto lbl_94;
}
else
{
obj* x_96; obj* x_98; 
x_96 = lean::cnstr_get(x_79, 0);
lean::inc(x_96);
x_98 = lean::cnstr_get(x_79, 1);
lean::inc(x_98);
lean::dec(x_79);
x_92 = x_98;
x_93 = x_96;
goto lbl_94;
}
lbl_94:
{
obj* x_101; obj* x_102; obj* x_104; 
x_101 = l_lean_parser_command_notation__spec_mixfix__symbol_has__view;
x_102 = lean::cnstr_get(x_101, 0);
lean::inc(x_102);
x_104 = lean::apply_1(x_102, x_93);
if (lean::obj_tag(x_92) == 0)
{
obj* x_105; 
x_105 = lean::box(0);
if (lean::obj_tag(x_92) == 0)
{
obj* x_106; obj* x_107; 
x_106 = lean::box(3);
x_107 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_107, 0, x_44);
lean::cnstr_set(x_107, 1, x_91);
lean::cnstr_set(x_107, 2, x_104);
lean::cnstr_set(x_107, 3, x_105);
lean::cnstr_set(x_107, 4, x_106);
return x_107;
}
else
{
obj* x_108; obj* x_111; 
x_108 = lean::cnstr_get(x_92, 0);
lean::inc(x_108);
lean::dec(x_92);
x_111 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_111, 0, x_44);
lean::cnstr_set(x_111, 1, x_91);
lean::cnstr_set(x_111, 2, x_104);
lean::cnstr_set(x_111, 3, x_105);
lean::cnstr_set(x_111, 4, x_108);
return x_111;
}
}
else
{
obj* x_112; obj* x_114; 
x_112 = lean::cnstr_get(x_92, 0);
lean::inc(x_112);
x_114 = lean::cnstr_get(x_92, 1);
lean::inc(x_114);
lean::dec(x_92);
switch (lean::obj_tag(x_112)) {
case 0:
{
obj* x_117; obj* x_120; 
x_117 = lean::cnstr_get(x_112, 0);
lean::inc(x_117);
lean::dec(x_112);
x_120 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_120, 0, x_117);
if (lean::obj_tag(x_114) == 0)
{
obj* x_121; obj* x_122; 
x_121 = lean::box(3);
x_122 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_122, 0, x_44);
lean::cnstr_set(x_122, 1, x_91);
lean::cnstr_set(x_122, 2, x_104);
lean::cnstr_set(x_122, 3, x_120);
lean::cnstr_set(x_122, 4, x_121);
return x_122;
}
else
{
obj* x_123; obj* x_126; 
x_123 = lean::cnstr_get(x_114, 0);
lean::inc(x_123);
lean::dec(x_114);
x_126 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_126, 0, x_44);
lean::cnstr_set(x_126, 1, x_91);
lean::cnstr_set(x_126, 2, x_104);
lean::cnstr_set(x_126, 3, x_120);
lean::cnstr_set(x_126, 4, x_123);
return x_126;
}
}
case 3:
{
obj* x_127; 
x_127 = lean::box(0);
if (lean::obj_tag(x_114) == 0)
{
obj* x_128; obj* x_129; 
x_128 = lean::box(3);
x_129 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_129, 0, x_44);
lean::cnstr_set(x_129, 1, x_91);
lean::cnstr_set(x_129, 2, x_104);
lean::cnstr_set(x_129, 3, x_127);
lean::cnstr_set(x_129, 4, x_128);
return x_129;
}
else
{
obj* x_130; obj* x_133; 
x_130 = lean::cnstr_get(x_114, 0);
lean::inc(x_130);
lean::dec(x_114);
x_133 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_133, 0, x_44);
lean::cnstr_set(x_133, 1, x_91);
lean::cnstr_set(x_133, 2, x_104);
lean::cnstr_set(x_133, 3, x_127);
lean::cnstr_set(x_133, 4, x_130);
return x_133;
}
}
default:
{
obj* x_135; 
lean::dec(x_112);
x_135 = lean::box(0);
if (lean::obj_tag(x_114) == 0)
{
obj* x_136; obj* x_137; 
x_136 = lean::box(3);
x_137 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_137, 0, x_44);
lean::cnstr_set(x_137, 1, x_91);
lean::cnstr_set(x_137, 2, x_104);
lean::cnstr_set(x_137, 3, x_135);
lean::cnstr_set(x_137, 4, x_136);
return x_137;
}
else
{
obj* x_138; obj* x_141; 
x_138 = lean::cnstr_get(x_114, 0);
lean::inc(x_138);
lean::dec(x_114);
x_141 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_141, 0, x_44);
lean::cnstr_set(x_141, 1, x_91);
lean::cnstr_set(x_141, 2, x_104);
lean::cnstr_set(x_141, 3, x_135);
lean::cnstr_set(x_141, 4, x_138);
return x_141;
}
}
}
}
}
}
}
}
}
}
obj* l_lean_parser_command_mixfix_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_12; obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_21; obj* x_22; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 3);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 4);
lean::inc(x_9);
lean::dec(x_0);
x_12 = l_lean_parser_command_mixfix_kind_has__view;
x_13 = lean::cnstr_get(x_12, 1);
lean::inc(x_13);
x_15 = lean::apply_1(x_13, x_3);
x_16 = lean::box(0);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_16);
x_18 = l_lean_parser_command_notation__spec_mixfix__symbol_has__view;
x_19 = lean::cnstr_get(x_18, 1);
lean::inc(x_19);
x_21 = lean::apply_1(x_19, x_5);
x_22 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
lean::inc(x_22);
x_24 = l_option_map___rarg(x_22, x_7);
x_25 = lean::box(3);
x_26 = l_option_get__or__else___main___rarg(x_24, x_25);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_9);
lean::cnstr_set(x_27, 1, x_16);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_26);
lean::cnstr_set(x_28, 1, x_27);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_21);
lean::cnstr_set(x_29, 1, x_28);
if (lean::obj_tag(x_1) == 0)
{
obj* x_30; obj* x_32; obj* x_33; obj* x_35; obj* x_36; obj* x_37; obj* x_39; 
x_30 = l_lean_parser_combinators_many___rarg___closed__1;
lean::inc(x_30);
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_30);
lean::cnstr_set(x_32, 1, x_17);
x_33 = l_lean_parser_no__kind;
lean::inc(x_33);
x_35 = l_lean_parser_syntax_mk__node(x_33, x_32);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_35);
lean::cnstr_set(x_36, 1, x_29);
x_37 = l_lean_parser_command_mixfix;
lean::inc(x_37);
x_39 = l_lean_parser_syntax_mk__node(x_37, x_36);
return x_39;
}
else
{
obj* x_40; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_49; obj* x_50; obj* x_52; obj* x_53; obj* x_54; obj* x_56; 
x_40 = lean::cnstr_get(x_1, 0);
lean::inc(x_40);
lean::dec(x_1);
lean::inc(x_22);
x_44 = l_option_map___rarg(x_22, x_40);
x_45 = l_option_get__or__else___main___rarg(x_44, x_25);
x_46 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_46, 0, x_45);
lean::cnstr_set(x_46, 1, x_16);
x_47 = l_lean_parser_no__kind;
lean::inc(x_47);
x_49 = l_lean_parser_syntax_mk__node(x_47, x_46);
x_50 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_50, 0, x_49);
lean::cnstr_set(x_50, 1, x_17);
lean::inc(x_47);
x_52 = l_lean_parser_syntax_mk__node(x_47, x_50);
x_53 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_29);
x_54 = l_lean_parser_command_mixfix;
lean::inc(x_54);
x_56 = l_lean_parser_syntax_mk__node(x_54, x_53);
return x_56;
}
}
}
obj* _init_l_lean_parser_command_mixfix_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_mixfix_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_mixfix_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_mixfix_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_mixfix_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_parser_command_mixfix_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_21; 
x_0 = lean::mk_string("local ");
x_1 = lean::mk_nat_obj(0u);
x_2 = l_lean_parser_symbol_tokens___rarg(x_0, x_1);
x_3 = l_lean_parser_tokens___rarg(x_2);
x_4 = lean::box(0);
x_5 = l_lean_parser_command_mixfix_kind_parser_lean_parser_has__tokens;
lean::inc(x_5);
x_7 = l_lean_parser_list_cons_tokens___rarg(x_5, x_4);
x_8 = l_lean_parser_list_cons_tokens___rarg(x_3, x_7);
x_9 = l_lean_parser_tokens___rarg(x_8);
x_10 = l_lean_parser_tokens___rarg(x_9);
x_11 = lean::mk_string(":=");
x_12 = l_lean_parser_symbol_tokens___rarg(x_11, x_1);
x_13 = l_lean_parser_term_parser_lean_parser_has__tokens___closed__1;
lean::inc(x_13);
x_15 = l_lean_parser_list_cons_tokens___rarg(x_13, x_4);
x_16 = l_lean_parser_list_cons_tokens___rarg(x_12, x_15);
x_17 = l_lean_parser_command_notation__spec_mixfix__symbol_parser_lean_parser_has__tokens;
lean::inc(x_17);
x_19 = l_lean_parser_list_cons_tokens___rarg(x_17, x_16);
x_20 = l_lean_parser_list_cons_tokens___rarg(x_10, x_19);
x_21 = l_lean_parser_tokens___rarg(x_20);
return x_21;
}
}
obj* _init_l_lean_parser_command_mixfix_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_35; 
x_0 = lean::mk_string("local ");
x_1 = l_string_trim(x_0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_5, 0, x_1);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__7), 6, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::box(0);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_mixfix_kind_parser), 5, 0);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_7);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_6);
lean::cnstr_set(x_10, 1, x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_action_parser_lean_parser_has__view___lambda__2), 6, 1);
lean::closure_set(x_11, 0, x_10);
x_12 = lean::mk_string(":=");
x_13 = l_string_trim(x_12);
lean::inc(x_13);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_15, 0, x_13);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_16, 0, x_13);
lean::closure_set(x_16, 1, x_4);
lean::closure_set(x_16, 2, x_15);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_parser), 6, 1);
lean::closure_set(x_17, 0, x_4);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_7);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_16);
lean::cnstr_set(x_19, 1, x_18);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_mixfix__symbol_parser), 5, 0);
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_20);
lean::cnstr_set(x_21, 1, x_19);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_11);
lean::cnstr_set(x_22, 1, x_21);
x_23 = l_lean_parser_term__parser__m_monad;
x_24 = l_lean_parser_term__parser__m_monad__except;
x_25 = l_lean_parser_term__parser__m_lean_parser_monad__parsec;
x_26 = l_lean_parser_term__parser__m_alternative;
x_27 = l_lean_parser_command_mixfix;
x_28 = l_lean_parser_command_mixfix_has__view;
lean::inc(x_28);
lean::inc(x_27);
lean::inc(x_26);
lean::inc(x_25);
lean::inc(x_24);
lean::inc(x_23);
x_35 = l_lean_parser_combinators_node_view___rarg(x_23, x_24, x_25, x_26, x_27, x_22, x_28);
return x_35;
}
}
obj* _init_l_lean_parser_command_mixfix_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_0 = lean::mk_string("local ");
x_1 = l_string_trim(x_0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_5, 0, x_1);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional___at_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens___spec__7), 6, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::box(0);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_mixfix_kind_parser), 5, 0);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_7);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_6);
lean::cnstr_set(x_10, 1, x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_action_parser_lean_parser_has__view___lambda__2), 6, 1);
lean::closure_set(x_11, 0, x_10);
x_12 = lean::mk_string(":=");
x_13 = l_string_trim(x_12);
lean::inc(x_13);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_15, 0, x_13);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_16, 0, x_13);
lean::closure_set(x_16, 1, x_4);
lean::closure_set(x_16, 2, x_15);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_parser), 6, 1);
lean::closure_set(x_17, 0, x_4);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_7);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_16);
lean::cnstr_set(x_19, 1, x_18);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_mixfix__symbol_parser), 5, 0);
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_20);
lean::cnstr_set(x_21, 1, x_19);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_11);
lean::cnstr_set(x_22, 1, x_21);
return x_22;
}
}
obj* l_lean_parser_command_mixfix_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_9; 
x_5 = l_lean_parser_command_mixfix;
x_6 = l_lean_parser_command_mixfix_parser___closed__1;
lean::inc(x_6);
lean::inc(x_5);
x_9 = l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(x_5, x_6, x_0, x_1, x_2, x_3, x_4);
return x_9;
}
}
obj* _init_l_lean_parser_command_notation__like() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_like");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_parser_command_notation__like_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(3);
x_4 = lean::mk_nat_obj(0u);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_1, x_5);
lean::dec(x_1);
if (x_6 == 0)
{
obj* x_8; obj* x_9; obj* x_11; obj* x_12; 
x_8 = l_lean_parser_command_mixfix_has__view;
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::apply_1(x_9, x_0);
x_12 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_12, 0, x_11);
return x_12;
}
else
{
obj* x_13; obj* x_14; obj* x_16; obj* x_17; 
x_13 = l_lean_parser_command_notation_has__view;
x_14 = lean::cnstr_get(x_13, 0);
lean::inc(x_14);
x_16 = lean::apply_1(x_14, x_0);
x_17 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_17, 0, x_16);
return x_17;
}
}
}
}
obj* _init_l_lean_parser_command_notation__like_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("notation_like");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* l_lean_parser_command_notation__like_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_command_notation__like_has__view_x_27___lambda__1___closed__1;
lean::inc(x_5);
return x_5;
}
else
{
obj* x_7; obj* x_10; obj* x_12; obj* x_15; uint8 x_16; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::cnstr_get(x_7, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_7, 1);
lean::inc(x_12);
lean::dec(x_7);
x_15 = l_lean_parser_command_notation__like_has__view_x_27___lambda__1___closed__2;
x_16 = lean_name_dec_eq(x_10, x_15);
lean::dec(x_10);
if (x_16 == 0)
{
obj* x_19; 
lean::dec(x_12);
x_19 = l_lean_parser_command_notation__like_has__view_x_27___lambda__1___closed__1;
lean::inc(x_19);
return x_19;
}
else
{
if (lean::obj_tag(x_12) == 0)
{
obj* x_21; 
x_21 = l_lean_parser_command_notation__like_has__view_x_27___lambda__1___closed__1;
lean::inc(x_21);
return x_21;
}
else
{
obj* x_23; obj* x_25; 
x_23 = lean::cnstr_get(x_12, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_12, 1);
lean::inc(x_25);
lean::dec(x_12);
if (lean::obj_tag(x_25) == 0)
{
obj* x_28; 
x_28 = l_lean_parser_syntax_as__node___main(x_23);
if (lean::obj_tag(x_28) == 0)
{
obj* x_29; 
x_29 = l_lean_parser_command_notation__like_has__view_x_27___lambda__1___closed__1;
lean::inc(x_29);
return x_29;
}
else
{
obj* x_31; obj* x_34; obj* x_36; 
x_31 = lean::cnstr_get(x_28, 0);
lean::inc(x_31);
lean::dec(x_28);
x_34 = lean::cnstr_get(x_31, 0);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_31, 1);
lean::inc(x_36);
lean::dec(x_31);
switch (lean::obj_tag(x_34)) {
case 0:
{
obj* x_40; 
lean::dec(x_36);
x_40 = l_lean_parser_command_notation__like_has__view_x_27___lambda__1___closed__1;
lean::inc(x_40);
return x_40;
}
case 1:
{
obj* x_44; 
lean::dec(x_36);
lean::dec(x_34);
x_44 = l_lean_parser_command_notation__like_has__view_x_27___lambda__1___closed__1;
lean::inc(x_44);
return x_44;
}
default:
{
obj* x_46; obj* x_48; obj* x_51; uint8 x_52; 
x_46 = lean::cnstr_get(x_34, 0);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_34, 1);
lean::inc(x_48);
lean::dec(x_34);
x_51 = lean::box(0);
x_52 = lean_name_dec_eq(x_46, x_51);
lean::dec(x_46);
if (x_52 == 0)
{
obj* x_56; 
lean::dec(x_36);
lean::dec(x_48);
x_56 = l_lean_parser_command_notation__like_has__view_x_27___lambda__1___closed__1;
lean::inc(x_56);
return x_56;
}
else
{
if (lean::obj_tag(x_36) == 0)
{
obj* x_59; 
lean::dec(x_48);
x_59 = l_lean_parser_command_notation__like_has__view_x_27___lambda__1___closed__1;
lean::inc(x_59);
return x_59;
}
else
{
obj* x_61; obj* x_63; 
x_61 = lean::cnstr_get(x_36, 0);
lean::inc(x_61);
x_63 = lean::cnstr_get(x_36, 1);
lean::inc(x_63);
lean::dec(x_36);
if (lean::obj_tag(x_63) == 0)
{
x_1 = x_61;
x_2 = x_48;
goto lbl_3;
}
else
{
obj* x_69; 
lean::dec(x_61);
lean::dec(x_63);
lean::dec(x_48);
x_69 = l_lean_parser_command_notation__like_has__view_x_27___lambda__1___closed__1;
lean::inc(x_69);
return x_69;
}
}
}
}
}
}
}
else
{
obj* x_73; 
lean::dec(x_23);
lean::dec(x_25);
x_73 = l_lean_parser_command_notation__like_has__view_x_27___lambda__1___closed__1;
lean::inc(x_73);
return x_73;
}
}
}
}
lbl_3:
{
obj* x_75; uint8 x_76; 
x_75 = lean::mk_nat_obj(0u);
x_76 = lean::nat_dec_eq(x_2, x_75);
lean::dec(x_2);
if (x_76 == 0)
{
obj* x_78; obj* x_79; obj* x_81; obj* x_82; 
x_78 = l_lean_parser_command_mixfix_has__view;
x_79 = lean::cnstr_get(x_78, 0);
lean::inc(x_79);
x_81 = lean::apply_1(x_79, x_1);
x_82 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_82, 0, x_81);
return x_82;
}
else
{
obj* x_83; obj* x_84; obj* x_86; obj* x_87; 
x_83 = l_lean_parser_command_notation_has__view;
x_84 = lean::cnstr_get(x_83, 0);
lean::inc(x_84);
x_86 = lean::apply_1(x_84, x_1);
x_87 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_87, 0, x_86);
return x_87;
}
}
}
}
obj* l_lean_parser_command_notation__like_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_16; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_lean_parser_command_notation_has__view;
x_6 = lean::cnstr_get(x_5, 1);
lean::inc(x_6);
x_8 = lean::apply_1(x_6, x_2);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_1);
x_10 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__1;
lean::inc(x_10);
x_12 = l_lean_parser_syntax_mk__node(x_10, x_9);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_1);
x_14 = l_lean_parser_command_notation__like;
lean::inc(x_14);
x_16 = l_lean_parser_syntax_mk__node(x_14, x_13);
return x_16;
}
else
{
obj* x_17; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_27; obj* x_28; obj* x_29; obj* x_31; 
x_17 = lean::cnstr_get(x_0, 0);
lean::inc(x_17);
lean::dec(x_0);
x_20 = l_lean_parser_command_mixfix_has__view;
x_21 = lean::cnstr_get(x_20, 1);
lean::inc(x_21);
x_23 = lean::apply_1(x_21, x_17);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_1);
x_25 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__2;
lean::inc(x_25);
x_27 = l_lean_parser_syntax_mk__node(x_25, x_24);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_1);
x_29 = l_lean_parser_command_notation__like;
lean::inc(x_29);
x_31 = l_lean_parser_syntax_mk__node(x_29, x_28);
return x_31;
}
}
}
obj* _init_l_lean_parser_command_notation__like_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__like_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__like_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_notation__like_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_notation__like_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_parser_command_notation__like_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_0 = lean::box(0);
x_1 = l_lean_parser_command_mixfix_parser_lean_parser_has__tokens;
lean::inc(x_1);
x_3 = l_lean_parser_list_cons_tokens___rarg(x_1, x_0);
x_4 = l_lean_parser_command_notation_parser_lean_parser_has__tokens;
lean::inc(x_4);
x_6 = l_lean_parser_list_cons_tokens___rarg(x_4, x_3);
x_7 = l_lean_parser_tokens___rarg(x_6);
x_8 = l_lean_parser_list_cons_tokens___rarg(x_7, x_0);
x_9 = l_lean_parser_tokens___rarg(x_8);
return x_9;
}
}
obj* _init_l_lean_parser_command_notation__like_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_20; 
x_0 = lean::box(0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_mixfix_parser), 5, 0);
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_1);
lean::cnstr_set(x_2, 1, x_0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation_parser), 5, 0);
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__3), 7, 2);
lean::closure_set(x_6, 0, x_4);
lean::closure_set(x_6, 1, x_5);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_0);
x_8 = l_lean_parser_term__parser__m_monad;
x_9 = l_lean_parser_term__parser__m_monad__except;
x_10 = l_lean_parser_term__parser__m_lean_parser_monad__parsec;
x_11 = l_lean_parser_term__parser__m_alternative;
x_12 = l_lean_parser_command_notation__like;
x_13 = l_lean_parser_command_notation__like_has__view;
lean::inc(x_13);
lean::inc(x_12);
lean::inc(x_11);
lean::inc(x_10);
lean::inc(x_9);
lean::inc(x_8);
x_20 = l_lean_parser_combinators_node_view___rarg(x_8, x_9, x_10, x_11, x_12, x_7, x_13);
return x_20;
}
}
obj* _init_l_lean_parser_command_notation__like_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_mixfix_parser), 5, 0);
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_1);
lean::cnstr_set(x_2, 1, x_0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation_parser), 5, 0);
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__3), 7, 2);
lean::closure_set(x_6, 0, x_4);
lean::closure_set(x_6, 1, x_5);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_0);
return x_7;
}
}
obj* l_lean_parser_command_notation__like_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_9; 
x_5 = l_lean_parser_command_notation__like;
x_6 = l_lean_parser_command_notation__like_parser___closed__1;
lean::inc(x_6);
lean::inc(x_5);
x_9 = l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(x_5, x_6, x_0, x_1, x_2, x_3, x_4);
return x_9;
}
}
obj* _init_l_lean_parser_command_reserve__mixfix() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("reserve_mixfix");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_parser_command_reserve__mixfix_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_0 = l_lean_parser_command_mixfix_kind_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_1, x_3);
return x_4;
}
}
obj* _init_l_lean_parser_command_reserve__mixfix_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_7; obj* x_8; 
x_7 = lean::box(0);
x_8 = lean::box(3);
x_4 = x_7;
x_5 = x_8;
goto lbl_6;
lbl_3:
{
obj* x_9; obj* x_10; obj* x_12; 
x_9 = l_lean_parser_command_mixfix_kind_has__view;
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
x_12 = lean::apply_1(x_10, x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_13; obj* x_15; 
x_13 = l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1___closed__1;
lean::inc(x_13);
x_15 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_15, 0, x_0);
lean::cnstr_set(x_15, 1, x_12);
lean::cnstr_set(x_15, 2, x_13);
return x_15;
}
else
{
obj* x_16; obj* x_19; obj* x_20; obj* x_22; obj* x_23; 
x_16 = lean::cnstr_get(x_2, 0);
lean::inc(x_16);
lean::dec(x_2);
x_19 = l_lean_parser_command_notation__spec_notation__symbol_has__view;
x_20 = lean::cnstr_get(x_19, 0);
lean::inc(x_20);
x_22 = lean::apply_1(x_20, x_16);
x_23 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_23, 0, x_0);
lean::cnstr_set(x_23, 1, x_12);
lean::cnstr_set(x_23, 2, x_22);
return x_23;
}
}
lbl_6:
{
obj* x_24; 
switch (lean::obj_tag(x_5)) {
case 0:
{
obj* x_26; obj* x_29; 
x_26 = lean::cnstr_get(x_5, 0);
lean::inc(x_26);
lean::dec(x_5);
x_29 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_29, 0, x_26);
if (lean::obj_tag(x_4) == 0)
{
x_24 = x_29;
goto lbl_25;
}
else
{
obj* x_30; obj* x_32; 
x_30 = lean::cnstr_get(x_4, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_4, 1);
lean::inc(x_32);
lean::dec(x_4);
x_0 = x_29;
x_1 = x_30;
x_2 = x_32;
goto lbl_3;
}
}
case 3:
{
obj* x_35; 
x_35 = lean::box(0);
if (lean::obj_tag(x_4) == 0)
{
x_24 = x_35;
goto lbl_25;
}
else
{
obj* x_36; obj* x_38; 
x_36 = lean::cnstr_get(x_4, 0);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_4, 1);
lean::inc(x_38);
lean::dec(x_4);
x_0 = x_35;
x_1 = x_36;
x_2 = x_38;
goto lbl_3;
}
}
default:
{
obj* x_42; 
lean::dec(x_5);
x_42 = lean::box(0);
if (lean::obj_tag(x_4) == 0)
{
x_24 = x_42;
goto lbl_25;
}
else
{
obj* x_43; obj* x_45; 
x_43 = lean::cnstr_get(x_4, 0);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_4, 1);
lean::inc(x_45);
lean::dec(x_4);
x_0 = x_42;
x_1 = x_43;
x_2 = x_45;
goto lbl_3;
}
}
}
lbl_25:
{
if (lean::obj_tag(x_4) == 0)
{
obj* x_48; obj* x_49; obj* x_52; 
x_48 = l_lean_parser_command_reserve__mixfix_has__view_x_27___lambda__1___closed__1;
x_49 = l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1___closed__1;
lean::inc(x_49);
lean::inc(x_48);
x_52 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_52, 0, x_24);
lean::cnstr_set(x_52, 1, x_48);
lean::cnstr_set(x_52, 2, x_49);
return x_52;
}
else
{
obj* x_53; obj* x_56; obj* x_57; obj* x_59; obj* x_60; obj* x_62; 
x_53 = lean::cnstr_get(x_4, 0);
lean::inc(x_53);
lean::dec(x_4);
x_56 = l_lean_parser_command_notation__spec_notation__symbol_has__view;
x_57 = lean::cnstr_get(x_56, 0);
lean::inc(x_57);
x_59 = lean::apply_1(x_57, x_53);
x_60 = l_lean_parser_command_reserve__mixfix_has__view_x_27___lambda__1___closed__1;
lean::inc(x_60);
x_62 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_62, 0, x_24);
lean::cnstr_set(x_62, 1, x_60);
lean::cnstr_set(x_62, 2, x_59);
return x_62;
}
}
}
}
}
obj* l_lean_parser_command_reserve__mixfix_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_5; obj* x_6; obj* x_8; 
x_8 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_8) == 0)
{
obj* x_9; 
x_9 = l_lean_parser_command_reserve__mixfix_has__view_x_27___lambda__1___closed__2;
lean::inc(x_9);
return x_9;
}
else
{
obj* x_11; obj* x_14; 
x_11 = lean::cnstr_get(x_8, 0);
lean::inc(x_11);
lean::dec(x_8);
x_14 = lean::cnstr_get(x_11, 1);
lean::inc(x_14);
lean::dec(x_11);
if (lean::obj_tag(x_14) == 0)
{
if (lean::obj_tag(x_14) == 0)
{
obj* x_17; 
x_17 = lean::box(3);
x_5 = x_14;
x_6 = x_17;
goto lbl_7;
}
else
{
obj* x_18; obj* x_20; 
x_18 = lean::cnstr_get(x_14, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_14, 1);
lean::inc(x_20);
lean::dec(x_14);
x_5 = x_20;
x_6 = x_18;
goto lbl_7;
}
}
else
{
obj* x_23; obj* x_25; obj* x_28; 
x_23 = lean::cnstr_get(x_14, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_14, 1);
lean::inc(x_25);
lean::dec(x_14);
x_28 = l_lean_parser_syntax_as__node___main(x_23);
if (lean::obj_tag(x_28) == 0)
{
if (lean::obj_tag(x_25) == 0)
{
obj* x_29; 
x_29 = lean::box(3);
x_5 = x_25;
x_6 = x_29;
goto lbl_7;
}
else
{
obj* x_30; obj* x_32; 
x_30 = lean::cnstr_get(x_25, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_25, 1);
lean::inc(x_32);
lean::dec(x_25);
x_5 = x_32;
x_6 = x_30;
goto lbl_7;
}
}
else
{
obj* x_35; obj* x_38; obj* x_41; 
x_35 = lean::cnstr_get(x_28, 0);
lean::inc(x_35);
lean::dec(x_28);
x_38 = lean::cnstr_get(x_35, 1);
lean::inc(x_38);
lean::dec(x_35);
x_41 = l_list_append___rarg(x_38, x_25);
if (lean::obj_tag(x_41) == 0)
{
obj* x_42; 
x_42 = lean::box(3);
x_5 = x_41;
x_6 = x_42;
goto lbl_7;
}
else
{
obj* x_43; obj* x_45; 
x_43 = lean::cnstr_get(x_41, 0);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_41, 1);
lean::inc(x_45);
lean::dec(x_41);
x_5 = x_45;
x_6 = x_43;
goto lbl_7;
}
}
}
}
lbl_4:
{
obj* x_48; obj* x_49; obj* x_51; 
x_48 = l_lean_parser_command_mixfix_kind_has__view;
x_49 = lean::cnstr_get(x_48, 0);
lean::inc(x_49);
x_51 = lean::apply_1(x_49, x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_52; obj* x_54; 
x_52 = l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1___closed__1;
lean::inc(x_52);
x_54 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_54, 0, x_1);
lean::cnstr_set(x_54, 1, x_51);
lean::cnstr_set(x_54, 2, x_52);
return x_54;
}
else
{
obj* x_55; obj* x_58; obj* x_59; obj* x_61; obj* x_62; 
x_55 = lean::cnstr_get(x_3, 0);
lean::inc(x_55);
lean::dec(x_3);
x_58 = l_lean_parser_command_notation__spec_notation__symbol_has__view;
x_59 = lean::cnstr_get(x_58, 0);
lean::inc(x_59);
x_61 = lean::apply_1(x_59, x_55);
x_62 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_62, 0, x_1);
lean::cnstr_set(x_62, 1, x_51);
lean::cnstr_set(x_62, 2, x_61);
return x_62;
}
}
lbl_7:
{
obj* x_63; 
switch (lean::obj_tag(x_6)) {
case 0:
{
obj* x_65; obj* x_68; 
x_65 = lean::cnstr_get(x_6, 0);
lean::inc(x_65);
lean::dec(x_6);
x_68 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_68, 0, x_65);
if (lean::obj_tag(x_5) == 0)
{
x_63 = x_68;
goto lbl_64;
}
else
{
obj* x_69; obj* x_71; 
x_69 = lean::cnstr_get(x_5, 0);
lean::inc(x_69);
x_71 = lean::cnstr_get(x_5, 1);
lean::inc(x_71);
lean::dec(x_5);
x_1 = x_68;
x_2 = x_69;
x_3 = x_71;
goto lbl_4;
}
}
case 3:
{
obj* x_74; 
x_74 = lean::box(0);
if (lean::obj_tag(x_5) == 0)
{
x_63 = x_74;
goto lbl_64;
}
else
{
obj* x_75; obj* x_77; 
x_75 = lean::cnstr_get(x_5, 0);
lean::inc(x_75);
x_77 = lean::cnstr_get(x_5, 1);
lean::inc(x_77);
lean::dec(x_5);
x_1 = x_74;
x_2 = x_75;
x_3 = x_77;
goto lbl_4;
}
}
default:
{
obj* x_81; 
lean::dec(x_6);
x_81 = lean::box(0);
if (lean::obj_tag(x_5) == 0)
{
x_63 = x_81;
goto lbl_64;
}
else
{
obj* x_82; obj* x_84; 
x_82 = lean::cnstr_get(x_5, 0);
lean::inc(x_82);
x_84 = lean::cnstr_get(x_5, 1);
lean::inc(x_84);
lean::dec(x_5);
x_1 = x_81;
x_2 = x_82;
x_3 = x_84;
goto lbl_4;
}
}
}
lbl_64:
{
if (lean::obj_tag(x_5) == 0)
{
obj* x_87; obj* x_88; obj* x_91; 
x_87 = l_lean_parser_command_reserve__mixfix_has__view_x_27___lambda__1___closed__1;
x_88 = l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1___closed__1;
lean::inc(x_88);
lean::inc(x_87);
x_91 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_91, 0, x_63);
lean::cnstr_set(x_91, 1, x_87);
lean::cnstr_set(x_91, 2, x_88);
return x_91;
}
else
{
obj* x_92; obj* x_95; obj* x_96; obj* x_98; obj* x_99; obj* x_101; 
x_92 = lean::cnstr_get(x_5, 0);
lean::inc(x_92);
lean::dec(x_5);
x_95 = l_lean_parser_command_notation__spec_notation__symbol_has__view;
x_96 = lean::cnstr_get(x_95, 0);
lean::inc(x_96);
x_98 = lean::apply_1(x_96, x_92);
x_99 = l_lean_parser_command_reserve__mixfix_has__view_x_27___lambda__1___closed__1;
lean::inc(x_99);
x_101 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_101, 0, x_63);
lean::cnstr_set(x_101, 1, x_99);
lean::cnstr_set(x_101, 2, x_98);
return x_101;
}
}
}
}
}
obj* l_lean_parser_command_reserve__mixfix_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_8; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_22; obj* x_23; obj* x_24; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_31; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
lean::dec(x_0);
x_8 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
lean::inc(x_8);
x_10 = l_option_map___rarg(x_8, x_1);
x_11 = lean::box(3);
x_12 = l_option_get__or__else___main___rarg(x_10, x_11);
x_13 = l_lean_parser_command_mixfix_kind_has__view;
x_14 = lean::cnstr_get(x_13, 1);
lean::inc(x_14);
x_16 = lean::apply_1(x_14, x_3);
x_17 = lean::box(0);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_16);
lean::cnstr_set(x_18, 1, x_17);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_12);
lean::cnstr_set(x_19, 1, x_18);
x_20 = l_lean_parser_no__kind;
lean::inc(x_20);
x_22 = l_lean_parser_syntax_mk__node(x_20, x_19);
x_23 = l_lean_parser_command_notation__spec_notation__symbol_has__view;
x_24 = lean::cnstr_get(x_23, 1);
lean::inc(x_24);
x_26 = lean::apply_1(x_24, x_5);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_17);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_22);
lean::cnstr_set(x_28, 1, x_27);
x_29 = l_lean_parser_command_reserve__mixfix;
lean::inc(x_29);
x_31 = l_lean_parser_syntax_mk__node(x_29, x_28);
return x_31;
}
}
obj* _init_l_lean_parser_command_reserve__mixfix_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_reserve__mixfix_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_reserve__mixfix_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_command_reserve__mixfix_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_command_reserve__mixfix_has__view_x_27;
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_parser_command_reserve__mixfix_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_12; obj* x_13; obj* x_14; 
x_0 = lean::mk_string("reserve");
x_1 = lean::mk_nat_obj(0u);
x_2 = l_lean_parser_symbol_tokens___rarg(x_0, x_1);
x_3 = lean::box(0);
x_4 = l_lean_parser_command_mixfix_kind_parser_lean_parser_has__tokens;
lean::inc(x_4);
x_6 = l_lean_parser_list_cons_tokens___rarg(x_4, x_3);
x_7 = l_lean_parser_list_cons_tokens___rarg(x_2, x_6);
x_8 = l_lean_parser_tokens___rarg(x_7);
x_9 = l_lean_parser_tokens___rarg(x_8);
x_10 = l_lean_parser_command_notation__spec_notation__symbol_parser_lean_parser_has__tokens;
lean::inc(x_10);
x_12 = l_lean_parser_list_cons_tokens___rarg(x_10, x_3);
x_13 = l_lean_parser_list_cons_tokens___rarg(x_9, x_12);
x_14 = l_lean_parser_tokens___rarg(x_13);
return x_14;
}
}
obj* _init_l_lean_parser_command_reserve__mixfix_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_26; 
x_0 = lean::mk_string("reserve");
x_1 = l_string_trim(x_0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_5, 0, x_1);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::box(0);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_mixfix_kind_parser), 5, 0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_5);
lean::cnstr_set(x_9, 1, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_action_parser_lean_parser_has__view___lambda__2), 6, 1);
lean::closure_set(x_10, 0, x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_notation__symbol_parser), 5, 0);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_6);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_10);
lean::cnstr_set(x_13, 1, x_12);
x_14 = l_lean_parser_term__parser__m_monad;
x_15 = l_lean_parser_term__parser__m_monad__except;
x_16 = l_lean_parser_term__parser__m_lean_parser_monad__parsec;
x_17 = l_lean_parser_term__parser__m_alternative;
x_18 = l_lean_parser_command_reserve__mixfix;
x_19 = l_lean_parser_command_reserve__mixfix_has__view;
lean::inc(x_19);
lean::inc(x_18);
lean::inc(x_17);
lean::inc(x_16);
lean::inc(x_15);
lean::inc(x_14);
x_26 = l_lean_parser_combinators_node_view___rarg(x_14, x_15, x_16, x_17, x_18, x_13, x_19);
return x_26;
}
}
obj* _init_l_lean_parser_command_reserve__mixfix_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_0 = lean::mk_string("reserve");
x_1 = l_string_trim(x_0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_5, 0, x_1);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::box(0);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_mixfix_kind_parser), 5, 0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_5);
lean::cnstr_set(x_9, 1, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_action_parser_lean_parser_has__view___lambda__2), 6, 1);
lean::closure_set(x_10, 0, x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_command_notation__spec_notation__symbol_parser), 5, 0);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_6);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_10);
lean::cnstr_set(x_13, 1, x_12);
return x_13;
}
}
obj* l_lean_parser_command_reserve__mixfix_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_9; 
x_5 = l_lean_parser_command_reserve__mixfix;
x_6 = l_lean_parser_command_reserve__mixfix_parser___closed__1;
lean::inc(x_6);
lean::inc(x_5);
x_9 = l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(x_5, x_6, x_0, x_1, x_2, x_3, x_4);
return x_9;
}
}
void initialize_init_lean_parser_token();
static bool _G_initialized = false;
void initialize_init_lean_parser_notation() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_lean_parser_token();
 l_lean_parser_term_parser_lean_parser_has__tokens___closed__1 = _init_l_lean_parser_term_parser_lean_parser_has__tokens___closed__1();
lean::mark_persistent(l_lean_parser_term_parser_lean_parser_has__tokens___closed__1);
 l_lean_parser_term_parser_lean_parser_has__view___closed__1 = _init_l_lean_parser_term_parser_lean_parser_has__view___closed__1();
lean::mark_persistent(l_lean_parser_term_parser_lean_parser_has__view___closed__1);
 l_lean_parser_term_parser___closed__1 = _init_l_lean_parser_term_parser___closed__1();
lean::mark_persistent(l_lean_parser_term_parser___closed__1);
 l_lean_parser_command_notation__spec_precedence__lit = _init_l_lean_parser_command_notation__spec_precedence__lit();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__lit);
 l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27 = _init_l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__lit_has__view_x_27);
 l_lean_parser_command_notation__spec_precedence__lit_has__view = _init_l_lean_parser_command_notation__spec_precedence__lit_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__lit_has__view);
 l_lean_parser_number_parser___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__1___rarg___closed__1 = _init_l_lean_parser_number_parser___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__1___rarg___closed__1();
lean::mark_persistent(l_lean_parser_number_parser___at_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens___spec__1___rarg___closed__1);
 l_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens = _init_l_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__tokens);
 l_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__view = _init_l_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__lit_parser_lean_parser_has__view);
 l_lean_parser_command_notation__spec_precedence__lit_parser___closed__1 = _init_l_lean_parser_command_notation__spec_precedence__lit_parser___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__lit_parser___closed__1);
 l_lean_parser_command_notation__spec_precedence__offset__op = _init_l_lean_parser_command_notation__spec_precedence__offset__op();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__offset__op);
 l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__3 = _init_l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__3();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__3);
 l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__4 = _init_l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__4();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27___lambda__1___closed__4);
 l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27 = _init_l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__offset__op_has__view_x_27);
 l_lean_parser_command_notation__spec_precedence__offset__op_has__view = _init_l_lean_parser_command_notation__spec_precedence__offset__op_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__offset__op_has__view);
 l_lean_parser_command_notation__spec_precedence__offset = _init_l_lean_parser_command_notation__spec_precedence__offset();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__offset);
 l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27 = _init_l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__offset_has__view_x_27);
 l_lean_parser_command_notation__spec_precedence__offset_has__view = _init_l_lean_parser_command_notation__spec_precedence__offset_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__offset_has__view);
 l_lean_parser_command_notation__spec_precedence__term = _init_l_lean_parser_command_notation__spec_precedence__term();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__term);
 l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__term_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_command_notation__spec_precedence__term_has__view_x_27 = _init_l_lean_parser_command_notation__spec_precedence__term_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__term_has__view_x_27);
 l_lean_parser_command_notation__spec_precedence__term_has__view = _init_l_lean_parser_command_notation__spec_precedence__term_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__term_has__view);
 l_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens = _init_l_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens);
 l_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__view = _init_l_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__view);
 l_lean_parser_command_notation__spec_precedence__term_parser___closed__1 = _init_l_lean_parser_command_notation__spec_precedence__term_parser___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence__term_parser___closed__1);
 l_lean_parser_command_notation__spec_precedence = _init_l_lean_parser_command_notation__spec_precedence();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence);
 l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1___closed__3 = _init_l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1___closed__3();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence_has__view_x_27___lambda__1___closed__3);
 l_lean_parser_command_notation__spec_precedence_has__view_x_27 = _init_l_lean_parser_command_notation__spec_precedence_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence_has__view_x_27);
 l_lean_parser_command_notation__spec_precedence_has__view = _init_l_lean_parser_command_notation__spec_precedence_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence_has__view);
 l_lean_parser_command_notation__spec_precedence_parser_lean_parser_has__tokens = _init_l_lean_parser_command_notation__spec_precedence_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence_parser_lean_parser_has__tokens);
 l_lean_parser_command_notation__spec_precedence_parser_lean_parser_has__view = _init_l_lean_parser_command_notation__spec_precedence_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence_parser_lean_parser_has__view);
 l_lean_parser_command_notation__spec_precedence_parser___closed__1 = _init_l_lean_parser_command_notation__spec_precedence_parser___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_precedence_parser___closed__1);
 l_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__tokens = _init_l_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__tokens);
 l_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__view = _init_l_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_quoted__symbol_parser_lean_parser_has__view);
 l_lean_parser_command_notation__spec_symbol__quote = _init_l_lean_parser_command_notation__spec_symbol__quote();
lean::mark_persistent(l_lean_parser_command_notation__spec_symbol__quote);
 l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27 = _init_l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_notation__spec_symbol__quote_has__view_x_27);
 l_lean_parser_command_notation__spec_symbol__quote_has__view = _init_l_lean_parser_command_notation__spec_symbol__quote_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_symbol__quote_has__view);
 l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens = _init_l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__tokens);
 l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__view___lambda__1___closed__1 = _init_l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__view___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__view___lambda__1___closed__1);
 l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__view = _init_l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_symbol__quote_parser_lean_parser_has__view);
 l_lean_parser_command_notation__spec_symbol__quote_parser___closed__1 = _init_l_lean_parser_command_notation__spec_symbol__quote_parser___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_symbol__quote_parser___closed__1);
 l_lean_parser_command_notation__spec_unquoted__symbol_parser___closed__1 = _init_l_lean_parser_command_notation__spec_unquoted__symbol_parser___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_unquoted__symbol_parser___closed__1);
 l_lean_parser_command_notation__spec_unquoted__symbol_tokens = _init_l_lean_parser_command_notation__spec_unquoted__symbol_tokens();
lean::mark_persistent(l_lean_parser_command_notation__spec_unquoted__symbol_tokens);
 l_lean_parser_command_notation__spec_unquoted__symbol_view = _init_l_lean_parser_command_notation__spec_unquoted__symbol_view();
lean::mark_persistent(l_lean_parser_command_notation__spec_unquoted__symbol_view);
 l_lean_parser_command_notation__spec_notation__symbol = _init_l_lean_parser_command_notation__spec_notation__symbol();
lean::mark_persistent(l_lean_parser_command_notation__spec_notation__symbol);
 l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27 = _init_l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_notation__spec_notation__symbol_has__view_x_27);
 l_lean_parser_command_notation__spec_notation__symbol_has__view = _init_l_lean_parser_command_notation__spec_notation__symbol_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_notation__symbol_has__view);
 l_lean_parser_command_notation__spec_notation__symbol_parser_lean_parser_has__tokens = _init_l_lean_parser_command_notation__spec_notation__symbol_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_command_notation__spec_notation__symbol_parser_lean_parser_has__tokens);
 l_lean_parser_command_notation__spec_notation__symbol_parser_lean_parser_has__view = _init_l_lean_parser_command_notation__spec_notation__symbol_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_notation__symbol_parser_lean_parser_has__view);
 l_lean_parser_command_notation__spec_notation__symbol_parser___closed__1 = _init_l_lean_parser_command_notation__spec_notation__symbol_parser___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_notation__symbol_parser___closed__1);
 l_lean_parser_command_notation__spec_mixfix__symbol = _init_l_lean_parser_command_notation__spec_mixfix__symbol();
lean::mark_persistent(l_lean_parser_command_notation__spec_mixfix__symbol);
 l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__3 = _init_l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__3();
lean::mark_persistent(l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27___lambda__1___closed__3);
 l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27 = _init_l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_notation__spec_mixfix__symbol_has__view_x_27);
 l_lean_parser_command_notation__spec_mixfix__symbol_has__view = _init_l_lean_parser_command_notation__spec_mixfix__symbol_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_mixfix__symbol_has__view);
 l_lean_parser_command_notation__spec_mixfix__symbol_parser_lean_parser_has__tokens = _init_l_lean_parser_command_notation__spec_mixfix__symbol_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_command_notation__spec_mixfix__symbol_parser_lean_parser_has__tokens);
 l_lean_parser_command_notation__spec_mixfix__symbol_parser_lean_parser_has__view = _init_l_lean_parser_command_notation__spec_mixfix__symbol_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_mixfix__symbol_parser_lean_parser_has__view);
 l_lean_parser_command_notation__spec_mixfix__symbol_parser___closed__1 = _init_l_lean_parser_command_notation__spec_mixfix__symbol_parser___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_mixfix__symbol_parser___closed__1);
 l_lean_parser_command_notation__spec_fold__action__folder = _init_l_lean_parser_command_notation__spec_fold__action__folder();
lean::mark_persistent(l_lean_parser_command_notation__spec_fold__action__folder);
 l_lean_parser_command_notation__spec_fold__action__folder_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_notation__spec_fold__action__folder_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_fold__action__folder_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_notation__spec_fold__action__folder_has__view_x_27 = _init_l_lean_parser_command_notation__spec_fold__action__folder_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_notation__spec_fold__action__folder_has__view_x_27);
 l_lean_parser_command_notation__spec_fold__action__folder_has__view = _init_l_lean_parser_command_notation__spec_fold__action__folder_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_fold__action__folder_has__view);
 l_lean_parser_command_notation__spec_fold__action = _init_l_lean_parser_command_notation__spec_fold__action();
lean::mark_persistent(l_lean_parser_command_notation__spec_fold__action);
 l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_command_notation__spec_fold__action_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_command_notation__spec_fold__action_has__view_x_27 = _init_l_lean_parser_command_notation__spec_fold__action_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_notation__spec_fold__action_has__view_x_27);
 l_lean_parser_command_notation__spec_fold__action_has__view = _init_l_lean_parser_command_notation__spec_fold__action_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_fold__action_has__view);
 l_lean_parser_ident_parser___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__4___rarg___closed__1 = _init_l_lean_parser_ident_parser___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__4___rarg___closed__1();
lean::mark_persistent(l_lean_parser_ident_parser___at_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens___spec__4___rarg___closed__1);
 l_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens = _init_l_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__tokens);
 l_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__view = _init_l_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_fold__action_parser_lean_parser_has__view);
 l_lean_parser_command_notation__spec_fold__action_parser___closed__1 = _init_l_lean_parser_command_notation__spec_fold__action_parser___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_fold__action_parser___closed__1);
 l_lean_parser_command_notation__spec_scoped__action = _init_l_lean_parser_command_notation__spec_scoped__action();
lean::mark_persistent(l_lean_parser_command_notation__spec_scoped__action);
 l_lean_parser_command_notation__spec_scoped__action_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_notation__spec_scoped__action_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_scoped__action_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_notation__spec_scoped__action_has__view_x_27 = _init_l_lean_parser_command_notation__spec_scoped__action_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_notation__spec_scoped__action_has__view_x_27);
 l_lean_parser_command_notation__spec_scoped__action_has__view = _init_l_lean_parser_command_notation__spec_scoped__action_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_scoped__action_has__view);
 l_lean_parser_command_notation__spec_action__kind = _init_l_lean_parser_command_notation__spec_action__kind();
lean::mark_persistent(l_lean_parser_command_notation__spec_action__kind);
 l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_command_notation__spec_action__kind_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_command_notation__spec_action__kind_has__view_x_27 = _init_l_lean_parser_command_notation__spec_action__kind_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_notation__spec_action__kind_has__view_x_27);
 l_lean_parser_command_notation__spec_action__kind_has__view = _init_l_lean_parser_command_notation__spec_action__kind_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_action__kind_has__view);
 l_lean_parser_command_notation__spec_action = _init_l_lean_parser_command_notation__spec_action();
lean::mark_persistent(l_lean_parser_command_notation__spec_action);
 l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1___closed__3 = _init_l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1___closed__3();
lean::mark_persistent(l_lean_parser_command_notation__spec_action_has__view_x_27___lambda__1___closed__3);
 l_lean_parser_command_notation__spec_action_has__view_x_27 = _init_l_lean_parser_command_notation__spec_action_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_notation__spec_action_has__view_x_27);
 l_lean_parser_command_notation__spec_action_has__view = _init_l_lean_parser_command_notation__spec_action_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_action_has__view);
 l_lean_parser_command_notation__spec_action_parser_lean_parser_has__tokens = _init_l_lean_parser_command_notation__spec_action_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_command_notation__spec_action_parser_lean_parser_has__tokens);
 l_lean_parser_command_notation__spec_action_parser_lean_parser_has__view = _init_l_lean_parser_command_notation__spec_action_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_action_parser_lean_parser_has__view);
 l_lean_parser_command_notation__spec_action_parser___closed__1 = _init_l_lean_parser_command_notation__spec_action_parser___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_action_parser___closed__1);
 l_lean_parser_command_notation__spec_binder = _init_l_lean_parser_command_notation__spec_binder();
lean::mark_persistent(l_lean_parser_command_notation__spec_binder);
 l_lean_parser_command_notation__spec_binder_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_notation__spec_binder_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_binder_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_notation__spec_binder_has__view_x_27 = _init_l_lean_parser_command_notation__spec_binder_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_notation__spec_binder_has__view_x_27);
 l_lean_parser_command_notation__spec_binder_has__view = _init_l_lean_parser_command_notation__spec_binder_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_binder_has__view);
 l_lean_parser_command_notation__spec_binders = _init_l_lean_parser_command_notation__spec_binders();
lean::mark_persistent(l_lean_parser_command_notation__spec_binders);
 l_lean_parser_command_notation__spec_binders_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_notation__spec_binders_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_binders_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_notation__spec_binders_has__view_x_27 = _init_l_lean_parser_command_notation__spec_binders_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_notation__spec_binders_has__view_x_27);
 l_lean_parser_command_notation__spec_binders_has__view = _init_l_lean_parser_command_notation__spec_binders_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_binders_has__view);
 l_lean_parser_command_notation__spec_argument = _init_l_lean_parser_command_notation__spec_argument();
lean::mark_persistent(l_lean_parser_command_notation__spec_argument);
 l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__3 = _init_l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__3();
lean::mark_persistent(l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__3);
 l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__4 = _init_l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__4();
lean::mark_persistent(l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__4);
 l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__5 = _init_l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__5();
lean::mark_persistent(l_lean_parser_command_notation__spec_argument_has__view_x_27___lambda__1___closed__5);
 l_lean_parser_command_notation__spec_argument_has__view_x_27 = _init_l_lean_parser_command_notation__spec_argument_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_notation__spec_argument_has__view_x_27);
 l_lean_parser_command_notation__spec_argument_has__view = _init_l_lean_parser_command_notation__spec_argument_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_argument_has__view);
 l_lean_parser_command_notation__spec_transition = _init_l_lean_parser_command_notation__spec_transition();
lean::mark_persistent(l_lean_parser_command_notation__spec_transition);
 l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_command_notation__spec_transition_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_command_notation__spec_transition_has__view_x_27 = _init_l_lean_parser_command_notation__spec_transition_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_notation__spec_transition_has__view_x_27);
 l_lean_parser_command_notation__spec_transition_has__view = _init_l_lean_parser_command_notation__spec_transition_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_transition_has__view);
 l_lean_parser_command_notation__spec_transition_parser_lean_parser_has__tokens = _init_l_lean_parser_command_notation__spec_transition_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_command_notation__spec_transition_parser_lean_parser_has__tokens);
 l_lean_parser_command_notation__spec_transition_parser_lean_parser_has__view = _init_l_lean_parser_command_notation__spec_transition_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_transition_parser_lean_parser_has__view);
 l_lean_parser_command_notation__spec_transition_parser___closed__1 = _init_l_lean_parser_command_notation__spec_transition_parser___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_transition_parser___closed__1);
 l_lean_parser_command_notation__spec_rule = _init_l_lean_parser_command_notation__spec_rule();
lean::mark_persistent(l_lean_parser_command_notation__spec_rule);
 l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_command_notation__spec_rule_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_command_notation__spec_rule_has__view_x_27 = _init_l_lean_parser_command_notation__spec_rule_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_notation__spec_rule_has__view_x_27);
 l_lean_parser_command_notation__spec_rule_has__view = _init_l_lean_parser_command_notation__spec_rule_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_rule_has__view);
 l_lean_parser_command_notation__spec_rule_parser_lean_parser_has__tokens = _init_l_lean_parser_command_notation__spec_rule_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_command_notation__spec_rule_parser_lean_parser_has__tokens);
 l_lean_parser_command_notation__spec_rule_parser_lean_parser_has__view = _init_l_lean_parser_command_notation__spec_rule_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_rule_parser_lean_parser_has__view);
 l_lean_parser_command_notation__spec_rule_parser___closed__1 = _init_l_lean_parser_command_notation__spec_rule_parser___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_rule_parser___closed__1);
 l_lean_parser_command_notation__spec = _init_l_lean_parser_command_notation__spec();
lean::mark_persistent(l_lean_parser_command_notation__spec);
 l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__3 = _init_l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__3();
lean::mark_persistent(l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__3);
 l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__4 = _init_l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__4();
lean::mark_persistent(l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__4);
 l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__5 = _init_l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__5();
lean::mark_persistent(l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__5);
 l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__6 = _init_l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__6();
lean::mark_persistent(l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__6);
 l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__7 = _init_l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__7();
lean::mark_persistent(l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__7);
 l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__8 = _init_l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__8();
lean::mark_persistent(l_lean_parser_command_notation__spec_has__view_x_27___lambda__1___closed__8);
 l_lean_parser_command_notation__spec_has__view_x_27___lambda__2___closed__1 = _init_l_lean_parser_command_notation__spec_has__view_x_27___lambda__2___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_has__view_x_27___lambda__2___closed__1);
 l_lean_parser_command_notation__spec_has__view_x_27 = _init_l_lean_parser_command_notation__spec_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_notation__spec_has__view_x_27);
 l_lean_parser_command_notation__spec_has__view = _init_l_lean_parser_command_notation__spec_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_has__view);
 l_lean_parser_command_notation__spec_parser_lean_parser_has__tokens = _init_l_lean_parser_command_notation__spec_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_command_notation__spec_parser_lean_parser_has__tokens);
 l_lean_parser_command_notation__spec_parser_lean_parser_has__view = _init_l_lean_parser_command_notation__spec_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_command_notation__spec_parser_lean_parser_has__view);
 l_lean_parser_command_notation__spec_parser___closed__1 = _init_l_lean_parser_command_notation__spec_parser___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__spec_parser___closed__1);
 l_lean_parser_command_notation = _init_l_lean_parser_command_notation();
lean::mark_persistent(l_lean_parser_command_notation);
 l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_command_notation_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_command_notation_has__view_x_27 = _init_l_lean_parser_command_notation_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_notation_has__view_x_27);
 l_lean_parser_command_notation_has__view = _init_l_lean_parser_command_notation_has__view();
lean::mark_persistent(l_lean_parser_command_notation_has__view);
 l_lean_parser_command_notation_parser_lean_parser_has__tokens = _init_l_lean_parser_command_notation_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_command_notation_parser_lean_parser_has__tokens);
 l_lean_parser_command_notation_parser_lean_parser_has__view = _init_l_lean_parser_command_notation_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_command_notation_parser_lean_parser_has__view);
 l_lean_parser_command_notation_parser___closed__1 = _init_l_lean_parser_command_notation_parser___closed__1();
lean::mark_persistent(l_lean_parser_command_notation_parser___closed__1);
 l_lean_parser_command_reserve__notation = _init_l_lean_parser_command_reserve__notation();
lean::mark_persistent(l_lean_parser_command_reserve__notation);
 l_lean_parser_command_reserve__notation_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_reserve__notation_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_reserve__notation_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_reserve__notation_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_command_reserve__notation_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_command_reserve__notation_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_command_reserve__notation_has__view_x_27 = _init_l_lean_parser_command_reserve__notation_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_reserve__notation_has__view_x_27);
 l_lean_parser_command_reserve__notation_has__view = _init_l_lean_parser_command_reserve__notation_has__view();
lean::mark_persistent(l_lean_parser_command_reserve__notation_has__view);
 l_lean_parser_command_reserve__notation_parser_lean_parser_has__tokens = _init_l_lean_parser_command_reserve__notation_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_command_reserve__notation_parser_lean_parser_has__tokens);
 l_lean_parser_command_reserve__notation_parser_lean_parser_has__view = _init_l_lean_parser_command_reserve__notation_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_command_reserve__notation_parser_lean_parser_has__view);
 l_lean_parser_command_reserve__notation_parser___closed__1 = _init_l_lean_parser_command_reserve__notation_parser___closed__1();
lean::mark_persistent(l_lean_parser_command_reserve__notation_parser___closed__1);
 l_lean_parser_command_mixfix_kind = _init_l_lean_parser_command_mixfix_kind();
lean::mark_persistent(l_lean_parser_command_mixfix_kind);
 l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__3 = _init_l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__3();
lean::mark_persistent(l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__3);
 l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__4 = _init_l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__4();
lean::mark_persistent(l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__4);
 l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__5 = _init_l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__5();
lean::mark_persistent(l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__5);
 l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__6 = _init_l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__6();
lean::mark_persistent(l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__6);
 l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__7 = _init_l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__7();
lean::mark_persistent(l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__1___closed__7);
 l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__2___closed__1 = _init_l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__2___closed__1();
lean::mark_persistent(l_lean_parser_command_mixfix_kind_has__view_x_27___lambda__2___closed__1);
 l_lean_parser_command_mixfix_kind_has__view_x_27 = _init_l_lean_parser_command_mixfix_kind_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_mixfix_kind_has__view_x_27);
 l_lean_parser_command_mixfix_kind_has__view = _init_l_lean_parser_command_mixfix_kind_has__view();
lean::mark_persistent(l_lean_parser_command_mixfix_kind_has__view);
 l_lean_parser_command_mixfix_kind_parser_lean_parser_has__tokens = _init_l_lean_parser_command_mixfix_kind_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_command_mixfix_kind_parser_lean_parser_has__tokens);
 l_lean_parser_command_mixfix_kind_parser_lean_parser_has__view = _init_l_lean_parser_command_mixfix_kind_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_command_mixfix_kind_parser_lean_parser_has__view);
 l_lean_parser_command_mixfix_kind_parser___closed__1 = _init_l_lean_parser_command_mixfix_kind_parser___closed__1();
lean::mark_persistent(l_lean_parser_command_mixfix_kind_parser___closed__1);
 l_lean_parser_command_mixfix = _init_l_lean_parser_command_mixfix();
lean::mark_persistent(l_lean_parser_command_mixfix);
 l_lean_parser_command_mixfix_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_mixfix_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_mixfix_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_mixfix_has__view_x_27 = _init_l_lean_parser_command_mixfix_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_mixfix_has__view_x_27);
 l_lean_parser_command_mixfix_has__view = _init_l_lean_parser_command_mixfix_has__view();
lean::mark_persistent(l_lean_parser_command_mixfix_has__view);
 l_lean_parser_command_mixfix_parser_lean_parser_has__tokens = _init_l_lean_parser_command_mixfix_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_command_mixfix_parser_lean_parser_has__tokens);
 l_lean_parser_command_mixfix_parser_lean_parser_has__view = _init_l_lean_parser_command_mixfix_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_command_mixfix_parser_lean_parser_has__view);
 l_lean_parser_command_mixfix_parser___closed__1 = _init_l_lean_parser_command_mixfix_parser___closed__1();
lean::mark_persistent(l_lean_parser_command_mixfix_parser___closed__1);
 l_lean_parser_command_notation__like = _init_l_lean_parser_command_notation__like();
lean::mark_persistent(l_lean_parser_command_notation__like);
 l_lean_parser_command_notation__like_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_notation__like_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__like_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_notation__like_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_command_notation__like_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_command_notation__like_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_command_notation__like_has__view_x_27 = _init_l_lean_parser_command_notation__like_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_notation__like_has__view_x_27);
 l_lean_parser_command_notation__like_has__view = _init_l_lean_parser_command_notation__like_has__view();
lean::mark_persistent(l_lean_parser_command_notation__like_has__view);
 l_lean_parser_command_notation__like_parser_lean_parser_has__tokens = _init_l_lean_parser_command_notation__like_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_command_notation__like_parser_lean_parser_has__tokens);
 l_lean_parser_command_notation__like_parser_lean_parser_has__view = _init_l_lean_parser_command_notation__like_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_command_notation__like_parser_lean_parser_has__view);
 l_lean_parser_command_notation__like_parser___closed__1 = _init_l_lean_parser_command_notation__like_parser___closed__1();
lean::mark_persistent(l_lean_parser_command_notation__like_parser___closed__1);
 l_lean_parser_command_reserve__mixfix = _init_l_lean_parser_command_reserve__mixfix();
lean::mark_persistent(l_lean_parser_command_reserve__mixfix);
 l_lean_parser_command_reserve__mixfix_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_command_reserve__mixfix_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_command_reserve__mixfix_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_command_reserve__mixfix_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_command_reserve__mixfix_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_command_reserve__mixfix_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_command_reserve__mixfix_has__view_x_27 = _init_l_lean_parser_command_reserve__mixfix_has__view_x_27();
lean::mark_persistent(l_lean_parser_command_reserve__mixfix_has__view_x_27);
 l_lean_parser_command_reserve__mixfix_has__view = _init_l_lean_parser_command_reserve__mixfix_has__view();
lean::mark_persistent(l_lean_parser_command_reserve__mixfix_has__view);
 l_lean_parser_command_reserve__mixfix_parser_lean_parser_has__tokens = _init_l_lean_parser_command_reserve__mixfix_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_command_reserve__mixfix_parser_lean_parser_has__tokens);
 l_lean_parser_command_reserve__mixfix_parser_lean_parser_has__view = _init_l_lean_parser_command_reserve__mixfix_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_command_reserve__mixfix_parser_lean_parser_has__view);
 l_lean_parser_command_reserve__mixfix_parser___closed__1 = _init_l_lean_parser_command_reserve__mixfix_parser___closed__1();
lean::mark_persistent(l_lean_parser_command_reserve__mixfix_parser___closed__1);
}
