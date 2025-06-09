const tattooText = document.getElementById('tattooText');
const sizeRange = document.getElementById('sizeRange');
const fontSelect = document.getElementById('fontSelect');
const selectedIndex = sessionStorage.getItem('selectedIndex') || 0;
const phrase = phrases[selectedIndex];

tattooText.textContent = phrase.chinese;
sizeRange.addEventListener('input', () => {
    tattooText.style.fontSize = sizeRange.value + 'px';
});
fontSelect.addEventListener('change', () => {
    tattooText.style.fontFamily = fontSelect.value;
});
// initialize default styles
sizeRange.dispatchEvent(new Event('input'));
fontSelect.dispatchEvent(new Event('change'));
