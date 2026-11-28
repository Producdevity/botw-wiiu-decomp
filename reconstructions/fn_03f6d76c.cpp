namespace {
struct Values {
    float v0;
    float v1;
    float v2;
    float v3;
};
}

extern "C" int fn_03f6d76c(void *object)
{
    float second;
    float fourth;
    float highValue;
    int lowIndex;
    float lowValue;
    int highIndex;
    second = ((Values *) object)->v1;
    lowValue = ((Values *) object)->v0;
    lowIndex = 0;
    if (!(lowValue > second)) {
        lowValue = second;
        lowIndex = 1;
    }
    highValue = ((Values *) object)->v2;
    fourth = ((Values *) object)->v3;
    highIndex = 2;
    if (!(highValue > fourth)) {
        highValue = fourth;
        highIndex = 3;
    }
    if (!(lowValue > highValue)) {
        return highIndex;
    }
    return lowIndex;
}
