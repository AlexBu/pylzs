//
// Created by Alex Bu on 19/09/2017.
//

%module clzs

%{ #include "lzs.h" %}

int lzs_encode_file(char* in, char* out);
int lzs_decode_file(char* in, char* out);
