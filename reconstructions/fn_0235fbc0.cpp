#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;
using runtime_tag_query::Token;

extern "C" unsigned data_1048a0e0;
extern "C" RuntimeTag data_1048a0dc;
extern "C" const RuntimeVTable data_1008eff4;
extern "C" unsigned data_1048a0cc;
extern "C" RuntimeTag data_1048a0d0;
extern "C" const RuntimeVTable data_1008efe4;
extern "C" unsigned data_1048a0c4;
extern "C" RuntimeTag data_1048a0c8;
extern "C" const RuntimeVTable data_1008efd4;
extern "C" unsigned data_104899a4;
extern "C" RuntimeTag data_104899a8;
extern "C" const RuntimeVTable data_1008efc4;
extern "C" unsigned data_1048999c;
extern "C" RuntimeTag data_104899a0;
extern "C" const RuntimeVTable data_1008efb4;
extern "C" unsigned data_10487130;
extern "C" RuntimeTag data_10487158;
extern "C" const RuntimeVTable data_1008ef3c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1008ef2c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1008ef1c;

typedef Token<&data_1048a0e0, &data_1048a0dc, &data_1008eff4> Type0;
typedef Token<&data_1048a0cc, &data_1048a0d0, &data_1008efe4> Type1;
typedef Token<&data_1048a0c4, &data_1048a0c8, &data_1008efd4> Type2;
typedef Token<&data_104899a4, &data_104899a8, &data_1008efc4> Type3;
typedef Token<&data_1048999c, &data_104899a0, &data_1008efb4> Type4;
typedef Token<&data_10487130, &data_10487158, &data_1008ef3c> Type5;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1008ef2c> Type6;
typedef Token<&data_10485ed0, &data_10486d38, &data_1008ef1c> Type7;

static inline unsigned level7(const RuntimeTag* other) {
    return (other == &Type7::get()) & 0xffu;
}

static inline bool level6(const RuntimeTag* other) {
    if (other == Type6::get())
        return true;
    return level7(other);
}

static inline bool level5(const RuntimeTag* other) {
    bool result = other == &Type5::get() ? true : level6(other);
    return result;
}

static inline unsigned level4(const RuntimeTag* other) {
    return other == &Type4::get() ? 1u : level5(other);
}

static inline bool level3(const RuntimeTag* other) {
    if (other == &Type3::get())
        return true;
    return level4(other);
}

static inline bool level2(const RuntimeTag* other) {
    return other == &Type2::get() ? true : level3(other);
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == &Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0235fbc0(const void*, const RuntimeTag* other) {
    return other == &Type0::get() ? 1u : level1(other) != 0;
}
