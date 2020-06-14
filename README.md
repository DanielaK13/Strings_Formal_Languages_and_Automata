# Strings_Formal_Languages_and_Automata
This code reads a string and determines its **shortest period**.

A string has a period *k* if it can be formed by concatenating one or more repetitions of another chain of length *k*. For example, the word *"abcabcabcabc"* has a period *k = 3*, since it is formed by four repetitions of the string *"abc"*. It also has period *k = 6* (two repetitions of "abcabc") and *k = 12* (one repetition of "abcabcabcabc").

## Input
```
3
abcabcabcabc
HoHoHo
abbaabba
```

## Output
```
3, abcabcabcabc
2, HoHoHo
4, abbaabba
```

#### This was an assignment for Formal Languages and Automata class by Ph.D Rafael Rieder from University of Passo Fundo in 2016-1, task from UVa Online Judge.
