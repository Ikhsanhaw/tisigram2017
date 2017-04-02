{septialoka}

function kabisat (tahun: integer): boolean;
begin
	if (tahun mod 400 = 0) then
		kabisat:= true
	else if (tahun mod 100 = 0) then
		kabisat:= false
	else if (tahun mod 4 = 0) then
		kabisat:= true
	else kabisat:= false
end;

function kpk (x, y: integer): integer;
var
	a, b, t: integer;
begin
	a := x;
	b := y;
	while (b <> 0) do
	begin
		t := b;
		b := a mod b;
		a := t;
	end;
	kpk := (x * y) div a;
end;

function StrToInt(
  const s: string
):LongInt;

var
	tgl: string;
	bulan: array[1..12] of integer = (31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31);
	getbln, getthn, gettgl, n, a, b, c, i: integer;
begin
	readln(tgl);
	gettgl:= StrToInt(tgl[1]) * 10 + StrToInt(tgl[2]) * 1;
	getbln:= StrToInt(tgl[4]) * 10 + StrToInt(tgl[5]) * 1;
	getthn:= StrToInt(tgl[7]) * 1000 + StrToInt(tgl[8]) * 100 + StrToInt(tgl[9]) * 10 + StrToInt(tgl[10]) * 1;
	readln(a); readln(b); readln(c);
	n:= kpk(a, b);
	n:= kpk(n, c); 
	for i:= 1 to n do
	begin
		gettgl := gettgl+1;
		if ((gettgl > bulan[getbln]) or ((getbln = 2) and (gettgl = 29) and (not(kabisat(getthn))))) then
		begin
			gettgl := 1;
			getbln := getbln+1;
			if (getbln = 13) then
			begin
				getbln := 1;
				getthn := getthn + 1;
			end;
		end;
	end;
	{writeln(gettgl, '/', getbln, '/', getthn);}
end.


