// populate dropdown
const select = document.getElementById('phraseSelect');
const translation = document.getElementById('translation');
phrases.forEach((item, index) => {
    const option = document.createElement('option');
    option.value = index;
    option.textContent = item.chinese;
    select.appendChild(option);
});
select.addEventListener('change', () => {
    const selected = phrases[select.value];
    translation.textContent = selected.english;
});
// default selection
if (phrases.length) {
    select.value = 0;
    translation.textContent = phrases[0].english;
}
document.getElementById('continueBtn').addEventListener('click', () => {
    const selectedIndex = select.value;
    sessionStorage.setItem('selectedIndex', selectedIndex);
    window.location.href = 'preview.html';
});
