BEGIN 
DBMS_OUTPUT.PUT_LINE('HELLO WORLD!');
DBMS_OUTPUT.PUT_LINE('THIS IS MY FIRST PROGRAAM IN LIVE SQL!');
END;

BEGIN
DBMS_OUTPUT.PUT('HELLO WORLD!');
DBMS_OUTPUT.PUT(' HOW ARE YOU ?');
DBMS_OUTPUT.PUT_LINE(' ');
DBMS_OUTPUT.PUT_LINE('I AM FINE.');
END;

DECLARE 
	X NUMBER := 10;

Y FLOAT := 10.25;

Z VARCHAR(10) := 'DIVYESH';

BEGIN
	DBMS_OUTPUT.PUT_LINE('THE VALUE OF X = '||X);
	DBMS_OUTPUT.PUT_LINE('THE VALUE OF Y = '||Y);
	DBMS_OUTPUT.PUT_LINE('THE VALUE OF Z = '||Z);
END;

DECLARE -- FIRST 
	X NUMBER := 10;

BEGIN
		DECLARE -- SECOND
			Y NUMBER := 20;
			BEGIN
				DECLARE -- THIRD
					Z NUMBER := 30;
					BEGIN
                    DBMS_OUTPUT.PUT_LINE('THE THIRD VALUES := ');
					DBMS_OUTPUT.PUT_LINE('THE VALUE OF X = '||X);
					DBMS_OUTPUT.PUT_LINE('THE VALUE OF Y = '||Y);
					DBMS_OUTPUT.PUT_LINE('THE VALUE OF Z = '||Z);
					END;
			DBMS_OUTPUT.PUT_LINE('THE SECOND VALUES := ');
			DBMS_OUTPUT.PUT_LINE('THE VALUE OF X = '||X);
			DBMS_OUTPUT.PUT_LINE('THE VALUE OF Y = '||Y);
			END;
	DBMS_OUTPUT.PUT_LINE('THE FIRST VALUE := ');
	DBMS_OUTPUT.PUT_LINE('THE VALUE OF X = '||X);
END;

DECLARE 
	AGE NUMBER := 20;

BEGIN
	IF AGE>18 THEN 
	DBMS_OUTPUT.PUT_LINE('YOU ARE ELGIBLE FOR VOTING');
	ELSE
	DBMS_OUTPUT.PUT_LINE('YOU ARE NOT ELIGIBLE FOR VOTING');
	END IF;
END;

DECLARE 
	X NUMBER := 16;

BEGIN
	IF MOD(X,2) = 0 THEN 
	DBMS_OUTPUT.PUT_LINE(X||' IS AN EVEN NUMBER.');
	ELSE
	DBMS_OUTPUT.PUT_LINE(X||' IS AN ODD NUMBER.');
	END IF;
END;

DECLARE
	X NUMBER := -10;

BEGIN
    IF X>0 THEN
	DBMS_OUTPUT.PUT_LINE(X||' IS AN POSITIVE NUMBER.');
	ELSIF X<0 THEN 
	DBMS_OUTPUT.PUT_LINE(X||' IS AN NEGETIVE NUMBER.');
	ELSE
	DBMS_OUTPUT.PUT_LINE(X||' IS AN NATURAL NUMBER.');
	END IF;
END;

DECLARE 
	N1 NUMBER := 90;

N2 NUMBER := 50;

N3 NUMBER := 20;

BEGIN
    IF N1>N2 AND N1>N3 THEN 
	DBMS_OUTPUT.PUT_LINE(N1||' IS BIGGEST NUMBER.');
	ELSIF N2>N1 AND N2>N3 THEN 
	DBMS_OUTPUT.PUT_LINE(N2||' IS BIGGEST NUMBER.');
	ELSE 
	DBMS_OUTPUT.PUT_LINE(N3||' IS BIGGEST NUMBER.');
	END IF;
END;

--  SIMPLE LOOP
DECLARE 
	X NUMBER := 1;

BEGIN
	LOOP
		DBMS_OUTPUT.PUT_LINE('TOPS TECNOLOGIES');
		IF X = 5 THEN 
		EXIT;
		END IF;
		X := X + 1;
	END LOOP;
END;

-- SIMPLE LOOP SECOND TYPE
DECLARE
	X NUMBER := 1;

BEGIN
	LOOP
	DBMS_OUTPUT.PUT_LINE('TOPS TECHNOLOGIES');
	EXIT WHEN X = 5;
	X := X + 1;
	END LOOP;
END;

-- FOR LOOP TYPE FIRST
BEGIN
	FOR X IN 1..5 LOOP
	DBMS_OUTPUT.PUT_LINE(X||'.TOPS TECHNOLOGIES');
	END LOOP;
END;

-- FOR LOOP TYPE SECOND
DECLARE
	X NUMBER := 5;

BEGIN
	FOR I IN 1..5 LOOP
	DBMS_OUTPUT.PUT_LINE(X||'.TOPS TECHNOLOGIES');
	X := X - 1;
	END LOOP;
END;

-- WHILE LOOP
DECLARE 
	X NUMBER := 1;

BEGIN
	WHILE X<=5 LOOP
	DBMS_OUTPUT.PUT_LINE(X||'.TOPS TECHNOLOGIES');
	X := X + 1;
	END LOOP;
END;