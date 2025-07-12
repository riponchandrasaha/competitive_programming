const searchForm = document.querySelector('form');
const movieContainer = document.querySelector('.movie-container');
const inputBox = document.querySelector('.inputBox');
searchForm.addEventListener('submit', () => {
    console.log(inputBox.value);
});