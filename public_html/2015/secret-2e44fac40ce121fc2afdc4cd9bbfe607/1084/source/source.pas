var
	n,i,j,max,sum,x : integer;
	s : string;

function cek(s:string):boolean;
var
	x,i : integer;
begin
	x := length(s);
	for i := 1 to (length(s) div 2) do begin
		if (s[i] <> s[x]) then begin
			cek := false;
			break;
		end;
		dec(x);
		cek := true;
	end;
end;

begin
	readln(n);
	for i := 1 to n do begin
		readln(s);
		sum := length(s);
		for j := 2 to length(s) do begin
			x := 1;
			max := j;
			while (max <= length(s)) do begin
				if (cek(copy(s,x,j))) then begin
					inc(sum);
				end;
				inc(x);
				inc(max);
			end;
		end;
		writeln(sum);
	end;
end.