CREATE DATABASE IF NOT EXISTS senado;

CREATE TABLE IF NOT EXISTS Campos (
    id_campo INT PRIMARY KEY AUTO_INCREMENT,
    nombre VARCHAR(50) NOT NULL,
    `desc` TEXT,
    direccion_postal VARCHAR(256)
);

CREATE TABLE IF NOT EXISTS Hoyos (
    id_hoyo INT PRIMARY KEY AUTO_INCREMENT,
    extension DECIMAL(7,3),
    par INT,
    fk_campo INT,
    FOREIGN KEY (fk_campo) REFERENCES Campos(id_campo)
);

CREATE TABLE IF NOT EXISTS Usuario (
    mail VARCHAR(256) PRIMARY KEY,
    nombre VARCHAR(30) NOT NULL,
    apellidos VARCHAR(60),
    tipo ENUM('Jugador', 'Mentor') NOT NULL,
    handicap INT,
    fk_mentor VARCHAR(256),
    FOREIGN KEY (fk_mentor) REFERENCES Usuario(mail)
);

CREATE TABLE IF NOT EXISTS Partidas (
    id_partida INT PRIMARY KEY AUTO_INCREMENT,
    fecha DATETIME DEFAULT CURRENT_TIMESTAMP,
    puntuacion INT,
    fk_mail VARCHAR(256),
    FOREIGN KEY (fk_mail) REFERENCES Usuario(mail)
);

CREATE TABLE IF NOT EXISTS Partidas_Hoyos (
    id_partidas_hoyos INT PRIMARY KEY AUTO_INCREMENT,
    fk_partida INT,
    fk_hoyo INT,
    FOREIGN KEY (fk_partida) REFERENCES Partidas(id_partida),
    FOREIGN KEY (fk_hoyo) REFERENCES Hoyos(id_hoyo)
);