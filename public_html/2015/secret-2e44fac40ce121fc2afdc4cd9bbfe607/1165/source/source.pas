program asdasd;
var
	v:array[1..101,1..6] of integer;
	jum:array[1..6] of integer;
	k,p,t,i,j,l,maks,kand:integer;
begin
	readln(t);
	for i:=1 to t do
	begin
		readln(k,p);
		for j:=1 to k do
			jum[j]:=0;
		for j:=1 to p do
		begin
			for l:=1 to k do
				read(v[j][l]);
			for l:=1 to k do
				jum[l]:=jum[l]+v[j][l];
		end;
		kand:=1;
		maks:=jum[1];
		for l:=2 to k do
		begin
			if (jum[l]>maks) then
			begin
				maks:=jum[l];
				kand:=l;
			end;
		end;
		writeln(kand);
		//writeln(v[1][1]);
	end;
end.
	
