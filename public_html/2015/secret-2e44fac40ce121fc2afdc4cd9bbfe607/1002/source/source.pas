function pa(s: ansistring;k,l: integer): integer;
var
	cek	: boolean;
	i	: integer;
begin
	cek:=true;
	for i:=0 to (l div 2)-1 do
		if s[k+i] <> s[l-i] then cek:=false;
	if cek=true then pa:=1 else pa:=0;
end;

var
	s 			: ansistring;
	i,j,n,sum, k, jlh	: integer;
begin
	readln(jlh);
	for k:= 1 to jlh do
	begin
		sum:= 0;
		readln(s);
		n:= length(s);
		for i:=1 to n-1 do
			for j:=2 to (n-i) do
				sum:=sum+pa(s,i,i+j);
		writeln(sum+n);
	end;
end.
