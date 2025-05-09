typedef struct {
    int maxSize;
    int top;
    int *array;
} CustomStack;
CustomStack* customStackCreate(int maxSize) {
    CustomStack* stack = malloc(sizeof(CustomStack));
    stack->array = malloc(maxSize * sizeof(int));
    stack->top = 0;
    stack->maxSize = maxSize;
    return stack;
}
void customStackPush(CustomStack* obj, int x) {
    if (obj->top < obj->maxSize) {
        obj->array[obj->top] = x;
        obj->top++;
    }
}
int customStackPop(CustomStack* obj) {
    if (obj->top < 1) {
        return (-1);
    }
    int val = obj->array[obj->top-1];
    obj->top--;
    return val;    
}
void customStackIncrement(CustomStack* obj, int k, int val) {
    int bottom = 0;
    int range = k;
    if (range > obj->maxSize) {
        range = obj->maxSize;
    }
    while (bottom < range) {
        obj->array[bottom] += val;
        bottom++;
    }
}
void customStackFree(CustomStack* obj) {
    free(obj->array);
    free(obj);
}