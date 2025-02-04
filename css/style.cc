/* Generelle stiler */
body {
    font-family: Arial, sans-serif;
    margin: 0;
    padding: 0;
    background-color: #f4f4f4;
}

header, footer {
    background-color: #333;
    color: #fff;
    padding: 1em;
    text-align: center;
}

/* Navigasjonsmeny */
nav ul {
    list-style: none;
    padding: 0;
    margin: 0;
    display: flex;
    justify-content: center;
    gap: 1em;
}

nav ul li a {
    color: #fff;
    text-decoration: none;
    font-weight: bold;
}

/* Hovedinnhold */
main {
    padding: 2em;
    background-color: #fff;
    margin: 1em;
}

/* Skjemaer */
form {
    max-width: 400px;
    margin: 0 auto;
    display: flex;
    flex-direction: column;
}

form label {
    margin-top: 1em;
}

form input, form button {
    padding: 0.5em;
    margin-top: 0.5em;
}
