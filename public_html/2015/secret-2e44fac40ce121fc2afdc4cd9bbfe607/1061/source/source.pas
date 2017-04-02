var
	t				: array [1..10] of longint;
	n,i,i1,i2,k,p,max,s	: longint;
 
begin
	readln(n);
	for i:=1 to n do
	begin	
		readln(k,p);
		max:=0;
		
		for i1:=0 to k do 
			t[i1]:=0;
		
		for i1:=1 to p do
			for i2:=1 to k do
			begin
				if i2=k then readln(s) else	read(s);
				t[i2]:=t[i2]+s;
			end;
		
		max:=1;
		for i1:=2 to k do
			if t[max]<t[i1] then max:=i1;
		if i=n then write(max) else writeln(max);
	end;
end.