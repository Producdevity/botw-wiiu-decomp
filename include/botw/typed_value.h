#ifndef BOTW_TYPED_VALUE_H
#define BOTW_TYPED_VALUE_H

struct TypedValue {
    unsigned int value;
    unsigned char type;
};
typedef char TypedValueSize[sizeof(TypedValue) == 8 ? 1 : -1];

extern "C" TypedValue* fn_0396bf1c(TypedValue* dst, const TypedValue* src);
extern "C" bool fn_0396bf60(const TypedValue* object);

#endif
