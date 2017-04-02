procedure QSort(var numbers : array of longint; left : Integer; right : Integer);
var 
	pivot, l_ptr, r_ptr : Integer;
begin
	l_ptr := left;							
	r_ptr := right;							
	pivot := numbers[left];
	
	while (left < right) do
	begin
		while ((numbers[right] >= pivot) and (right > left)) do
		right := right - 1;
		
		If (left <> right) then
		begin
			numbers[left] := numbers[right];
			left := left + 1;
		end;
		
		while ((numbers[left] <= pivot) and (right > left)) do
			left := left + 1;
		
		if (left <> right) then
		begin
			numbers[right] := numbers[left];
			right := right - 1;
		end;
	end;
	
	numbers[left] := pivot;
	pivot := left;
	left := l_ptr;
	right := r_ptr;
	
	if (left < pivot) then
		QSort(numbers, left, pivot-1);
	
	if (right > pivot) then
		QSort(numbers, pivot+1, right);
end;

procedure QuickSort(var numbers : array of longint; size : Integer);
begin
 QSort( numbers, 0, size-1);
end;

var
	x				: array [1..100001] of longint;
	n,i,sum,a,tot 	: longint;
begin
	readln(n);
	for i:=1 to n do read(x[i]);
	QuickSort(x,n);
	a:=0;
	sum:=0;
	tot:=0;
	for i:=1 to n do
		if x[i]<>a then
		begin
			sum:=sum+x[i];
			a:=x[i];
			tot:=1;
		end else
		begin
			inc(tot);
			if tot>x[i] then 
			begin
				writeln(-1);
				exit;
			end;
		end;
	writeln(sum);
end.
