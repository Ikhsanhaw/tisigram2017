var
	a,b		: array [1..100000] of longint;
	i,j,k,n,s,sum	 : longint;
begin
	readln(n);
	read(a[1]);
	b[1]:=1;
	k:=1;
	for i:=2 to n do
	begin	
		read(s);
		for j:=1 to k+1 do
			if a[j]=s then 
			begin
				inc(b[j]);
				break;
			end else 
			if j=(k+1) then
			begin
				inc(k);
				a[k]:=s; b[k]:=1;
			end;
	end;
	for i:=1 to k do
	if b[i]>a[i] then 
	begin
		writeln('-1');
		exit;
	end else 
	begin
		sum:=sum+a[i];
		if i=k then writeln(sum);
	end;
end.