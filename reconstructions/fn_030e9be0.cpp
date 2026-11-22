#include "botw/action_static_param.h"

using namespace action_static_param;

extern "C" bool fn_03774fd4(const void* program, void* value, const void* definition, const void* key);

static inline const Definition* get_definition(const void* program, int type, int index) {
    const DefinitionBuffer* definitions = fn_037751c0(program, type);
    if (static_cast<unsigned int>(index) < definitions->count)
        return definitions->data + index;
    return definitions->data;
}

static inline bool get_static_param(const void* program, void* value, int type, const Action* owner,
                                    const void* key) {
    bool found = fn_03774fd4(program, value, get_definition(program, type, owner->definition_index), key);
    return found;
}

extern "C" bool fn_030e9be0(const void* action, void* value, const void* key) {
    const void* program = static_cast<const Action*>(action)->actor->param->program;
    const Action* self = static_cast<const Action*>(action);
    return get_static_param(program, value, self->table->get_type(self), self, key);
}
