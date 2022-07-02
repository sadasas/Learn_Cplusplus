








//const are special case both support rvalues and lvalues
//if argument is rvalues 
//automate create lvalue to store the value
void SetBothValue(const int& a)
{

}

//only support lvalue argument
void SetLValue(int& a)
{

}

//only support rvalue argument
void SetRValue(int&& a)
{

}


void RvaluesExample()
{
	//rvalue are value store actual value
	int a = 10;
	//invalid because rvalue is not modifiable
	10 = 1;
	//invalid 
	SetLValue(10);
	//valid
	SetBothValue(10);
	SetRValue(2);
	

	
}

void LValuesExample()
{
	//lvalue are value store pointer address
	int a = 2;
	//valid
	SetLValue(a);
	//invalid
	SetRValue(a);
}