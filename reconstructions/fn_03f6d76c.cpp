namespace {
struct Values {
    float v0;
    float v1;
    float v2;
    float v3;
};
}

extern "C" int fn_03f6d76c(void *arg0)
{
    float second;
    float fourth;
    float highValue;
    int lowIndex;
    float lowValue;
    int highIndex;
    second = ((Values*) arg0)->v1;
    lowValue = ((Values*) arg0)->v0;
    lowIndex = 0;
    if (!(lowValue > second)) {
        lowValue = second;
        lowIndex = 1;
    }
    highValue = ((Values*) arg0)->v2;
    fourth = ((Values*) arg0)->v3;
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
