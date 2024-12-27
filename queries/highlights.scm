[
  "return"
  "assert" 
  "panic"
  "import"
  "println"
  "printf" 
  "if"
  "for" 
  "while" 
  "def" 
] @keyword
[ "+" "-" "*" "/" "**" ] @operator
[ "<" ">" "<=" ">=" "==" "!=" "!" ] @operator
"=" @operator
"#" @operator

(comment) @comment
(identifier) @type
(number) @number
(string) @string
(function_definition (identifier) @function)
(function_calling (identifier) @function)
