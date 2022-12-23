void push(stack<int>& s, int a){
	    s.push(a);
	   
}

bool isFull(stack<int>& s,int n){
	if(s.size()>=n)
	return true;
	else 
	return false;
}

bool isEmpty(stack<int>& s){
	if(s.size()==0)
	return true;
	else
	return false;
}

int pop(stack<int>& s){
	int x=s.top();
	s.pop();
	return x;
}

int getMin(stack<int>& s){
	stack<int> b;
	int min =s.top();
	while(!(isEmpty(s))){
	    if(min>s.top())
	    min=s.top();
	    push(b,s.top());
	    pop(s);
	}
	while(!b.empty()){
	    push(s,b.top());
	    pop(b);
	}
	return min;
	
}
