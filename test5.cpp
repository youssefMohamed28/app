import pygame

# تهيئة النافذة
WIDTH = 800
HEIGHT = 600
window = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Spiderman")

# تحميل صورة Spiderman
spiderman_image = pygame.image.load("spiderman.png")

# دورة الحدث الرئيسية
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
    
    # مسح النافذة
    window.fill((255, 255, 255))
    
    # عرض صورة Spiderman في الموقع المحدد
    window.blit(spiderman_image, (WIDTH/2 - spiderman_image.get_width()/2, HEIGHT/2 - spiderman_image.get_height()/2))
    
    # تحديث النافذة
    pygame.display.flip()

# إغلاق النافذة بعد الانتهاء
pygame.quit()