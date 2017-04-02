var
	a,b		: array [1..100000] of longint;
	i,j,k,n,s,sum	 : longint;
begin
	readln(n);
	read(a[1]);
	b[1]:=1;
	sum:=a[i];
	k:=1;
	for i:=2 to n do
	begin	
		read(s);
		for j:=1 to k+1 do
			if a[j]=s then 
			begin
				inc(b[j]);
				if b[j] > a[j] then 
				begin
					writeln("-1")
					exit;
				end;
				break;
			end else 
			if j=(k+1) then
			begin
				inc(k);
				a[k]:=s; 
				b[k]:=1;
				sum:=sum+a[k];
			end;
	end;
	writeln(sum);
end.