#include "botw/proc_accessor.h"
#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_1027d3b0;
extern "C" unsigned char data_1054ae5c[];

typedef Token<&data_10485cd8, &data_10485cdc, &data_1027d3b0> DerivedType;

extern "C" bool fn_03797790(const void* object, int flag);

namespace {
struct Base;
typedef bool (*DerivedQuery)(const Base* object, const RuntimeTag* type);

struct Base {
    unsigned char unknown_00[232];
    void* const* vtable;
};

struct Derived : Base {
    unsigned char unknown_ec[748];
    void* value;
};
typedef char DerivedSize[sizeof(Derived) == 988 ? 1 : -1];

inline bool is_derived_from(const Base* object) {
    const RuntimeTag* type = &DerivedType::get();
    return reinterpret_cast<DerivedQuery>(object->vtable[3])(object, type);
}

inline Derived* cast_derived(Base* object) {
    if (object != 0 && is_derived_from(object))
        return static_cast<Derived*>(object);
    return 0;
}
}

extern "C" void* fn_030e0414(const ProcAccessor* accessor) {
    Derived* derived = cast_derived(static_cast<Base*>(accessor->proc));
    if (derived && !fn_03797790(derived, 46))
        return derived->value;
    return data_1054ae5c;
}
