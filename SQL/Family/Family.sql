TABLE people 
    id INTEGER NOT NULL PRIMARY KEY 
    motherId INTEGER
    fatherId INTEGER
    name VARCHAR(30) NOT NULL
    age INTEGER NOT NULL
    FOREIGN KEY (motherId) REFERENCE people(id)
    FOREIGN KEY (fatherId) REFERENCE people(id)

SELECT
    mother.name AS mother_name,
    father.name AS father_name,
    MIN(child.age) AS youngest_child_age
FROM
    people AS child 
JOIN
    people AS mother ON child.motherId = mother.id 
JOIN
    people AS father ON child.fatherId = father.id 
GROUP BY
    mother.name,
    father.name;