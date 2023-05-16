#include <inttypes>

//num data types
#typedef int32_t i32
#typedef int64_t i64
#typedef float   f32
#typedef double  f64

//vector type
#typedef struct i128{
	uint64_t     low;
	int64_t     high;	
}

//reference type
//TODO

//stack machine stuff
typedef struct stack_frame_t{
	int 	val;
}stack_frame;

typedef struct instruction_t{
	uint32 op1;
	uint32 op2;
	uint32 opcode;
}instruction;

class wasm_stack{
	private:
	
	//contructor
	wasm_stack();
	//destructor
	~wasm_stack();	
	
	//push
	void push();
	void pop();
}
