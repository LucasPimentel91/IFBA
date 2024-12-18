CREATE TABLE EDITORA (
   	COD_EDITORA INT NOT NULL,
	DESCRICAO VARCHAR(30) NOT NULL,
	ENDERECO VARCHAR (30) NULL,
	CONSTRAINT PK_EDITORA PRIMARY KEY (COD_EDITORA)
);

CREATE TABLE LIVRO (
	COD_LIVRO INT NOT NULL,
	ISBN VARCHAR (20) NOT NULL,
	TITULO VARCHAR (45) NOT NULL,
	NUM_EDICAO INT NOT NULL,
	PRECO FLOAT NOT NULL,
	COD_EDITORA INT NOT NULL,
	CONSTRAINT PK_LIVRO PRIMARY KEY(COD_LIVRO),
	CONSTRAINT FK_LIVRO_EDITORA FOREIGN KEY (COD_EDITORA)
		REFERENCES EDITORA (COD_EDITORA)
);

CREATE TABLE AUTOR (
	COD_AUTOR INT NOT NULL,
	NOME VARCHAR (45) NOT NULL,
	SEXO CHAR (1) NOT NULL,
	DATA_NASCIMENTO DATE NOT NULL,
	CONSTRAINT PK_AUTOR PRIMARY KEY (COD_AUTOR)
);

CREATE TABLE LIVRO_AUTOR (
    COD_LIVRO INT NOT NULL,
	COD_AUTOR INT NOT NULL,
	CONSTRAINT PK_LIVRO_AUTOR PRIMARY KEY 
			(COD_LIVRO, COD_AUTOR),
	CONSTRAINT FK_LA_LIVRO FOREIGN KEY (COD_LIVRO)
			REFERENCES LIVRO (COD_LIVRO),
	CONSTRAINT FK_LA_AUTOR FOREIGN KEY (COD_AUTOR)
			REFERENCES AUTOR (COD_AUTOR)
);

INSERT INTO EDITORA (COD_EDITORA, DESCRICAO, ENDERECO)
    VALUES  (1,'Campus', 'Rua do Timbó'),
			(2, 'Abril',NULL),
			(3, 'Editora_teste', NULL);

INSERT INTO LIVRO (COD_LIVRO, ISBN, TITULO, NUM_EDICAO,
				    PRECO, COD_EDITORA)
	VALUES 	(1, '12345','Banco de Dados',3, 70.00, 1),
			(2, '35790','SGBD',1, 85.00, 2),
			(3, '98765','Redes de Computadores',2, 80.00,2);

INSERT INTO AUTOR (COD_AUTOR, NOME, SEXO, DATA_NASCIMENTO)
	VALUES 	(1, 'João','M','1970/01/01'),
			(2, 'Maria', 'F', '1974/05/17'),
			(3, 'José', 'M', '1977/10/10'),
			(4, 'Carla', 'F', '1964/12/08');
			
INSERT INTO LIVRO_AUTOR (COD_LIVRO, COD_AUTOR)
	VALUES (1,1), (1,2), (2,2), (2,4), (3,3);
	
	
--1. Atualizar o endereço da Editora Campus para ‘Av. ACM’

UPDATE EDITORA
SET ENDERECO = 'AV. ACM'
-- PODE TER MAIS DE SET SEPARADO POR VÍRGULA
WHERE COD_EDITORA = 1;

--2. Atualizar os preços dos livros em 10%

UPDATE LIVRO
SET PRECO = PRECO * 1.1;

--3. Excluir a ‘Editora Teste’

DELETE FROM EDITORA
WHERE COD_EDITORA = 3;

--4. Apresentar o nome e data de nascimento de todos os autores

SELECT A.NOME, A.DATA_NASCIMENTO 
FROM AUTOR AS A;

--5. Apresentar o nome e a data de nascimento dos autores por ordem de nome.

SELECT 
	A.NOME, 
	A.DATA_NASCIMENTO
FROM AUTOR AS A
ORDER BY A.NOME DESC

--6. Apresentar o nome e a data de nascimento dos autores do sexo feminino
--ordenados pelo nome.

SELECT 
	A.NOME,
	A. DATA_NASCIMENTO
FROM AUTOR AS A
WHERE SEXO = 'F'
ORDER BY A.NOME

--7. Apresentar o nome das editoras que não tem o endereço cadastrado.

SELECT E.DESCRICAO
FROM EDITORA AS E
WHERE ENDERECO IS NULL;

--8. Apresentar o título do livro e o nome da sua editora

SELECT L.TITULO, E.DESCRICAO
FROM LIVRO AS L INNER JOIN EDITORA AS E
	ON (L.COD_EDITORA = E.COD_EDITORA)
	
SELECT L.TITULO, E.DESCRICAO
FROM LIVRO AS L, EDITORA AS E
WHERE L.COD_EDITORA = E.COD_EDITORA


--9. Apresentar o título do livro e o nome da sua editora. Caso haja alguma
--editora sem livro publicado, informar os dados da editora com valores
--nulos para os livros.

SELECT E.DESCRICAO
FROM EDITORA AS E LEFT JOIN LIVRO AS L
	ON (E.COD_EDITORA = L.COD_EDITORA)
WHERE L.TITULO IS NULL;

--10. Apresentar o título do livro e o nome dos seus autores

SELECT L.TITULO, A.NOME 
FROM LIVRO AS L INNER JOIN LIVRO_AUTOR AS LA
	ON (L.COD_LIVRO = LA.COD_LIVRO)
	INNER JOIN AUTOR AS A
	ON (LA.COD_AUTOR = A.COD_AUTOR)

--11. Apresentar o nome da editora e o nome dos autores que já publicaram
--algum livro na editora.

SELECT DISTINCT A.NOME 
FROM EDITORA AS E INNER JOIN LIVRO AS L
	ON (E.COD_EDITORA = L.COD_EDITORA)
	INNER JOIN LIVRO_AUTOR AS LA
	ON (L.COD_LIVRO = LA.COD_LIVRO)
	INNER JOIN AUTOR AS A
	ON (LA.COD_AUTOR = A.COD_AUTOR)

--12. Apresentar o título dos livros que começam a string ‘Banco’.
--13. Apresentar o título dos livros que tem a string ‘do’.
--14. Apresentar o nome de cada livro e seu preço reajustado em 5%
--15. Apresentar o nome dos autores que nasceram no mês de outubro
--16. Apresentar o número de livros do acervo
--17. Apresentar o número de autores do livro ‘Banco de Dados’
--18. Apresentar o somatório dos preços dos livros do acervo
--19. Apresentar a média de preços dos livros da editora Campus
--20. Apresentar o maior preço dentre todos os livros do acervo.
--21. Apresentar a data de nascimento do autor mais velho
--22. Apresentar o número de livros por editora
--23. Apresentar o somatório e média de preço dos livros por editora
--24. Apresentar o número de autores por livro, mas apenas dos livros que
--possuem mais de 1 autor
--25. Apresentar a média de preços geral por editora, mas apenas as editoras que
--possuem média maior que R$ 80,00
--26. Apresentar o nome dos autores que não são autores do livro Banco de
--Dados
--27. Apresentar a quantidade de livros da editora Campus e Abril em colunas
--diferentes. 
			