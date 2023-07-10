# Dive into Systems
My thoughts as I think about what I should cover in `Intro to Mojo`

## Chapter 1
### Good
- Really like the side by side comparison and then detailed description of each line, would like to follow this style for all the Python -> Mojo examples
- The difference between interpreted and compiled programs is important, need to add this once the Mojo toolchain is released, showing how to compile a program and what the implications are.
- An introduction to what a type actually is, is important for Python developers before introducing the types themselves.
- The section on arrays and strings is really good and detailed
- The section on structs is also good, detailing how things are layed out in memory with a simple table, and showing the difference between stack frames 

### Bad
- Should describe or link to setting up a free IDE first, e.g. `clangd` lsp with vscode or neovim, the book doesn't write from the perspective of taking advantage of modern IDE lsp features e.g. out of bounds indexing showing warnings
- Listing out all the types in one code block is a bit too much context, think it's better to go through code examples of how to use each type with descriptions notebook style.
- Should probably introduce Python f-strings as a much better alternative to the printf style
- The introduction text to `The Stack` is not great, it needs a lot more visual explanation, I think the later chapters on pointers will explain better though

#### Ideas for later chapters in `Into to Mojo`
- Go into more detail about the size differences and signs of types, with examples of overflow etc in a later chapter
- Need details on type promotion through operators, in a later chapter when `dunder` methods are introduced

### Notes
- The majority of this content can be skipped in `Intro to Mojo` as it's a superset of Python
